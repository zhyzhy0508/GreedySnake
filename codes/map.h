#ifndef MAP_H
#define MAP_H

#include <vector>
#include "point.h"

class Map
{
public:
    Map()//Ĭ�Ϲ��캯�����������θ���ѹ��initmap
    {
        initmap.emplace_back(1, 1);
        initmap.emplace_back(1, 1);     // �����initmap.emplace_back(Point(1,1)),������ת�ƿ������캯���ĵ���
        initmap.emplace_back(2, 1);
        initmap.emplace_back(3, 1);
        initmap.emplace_back(4, 1);
        initmap.emplace_back(5, 1);
        initmap.emplace_back(6, 1);
        initmap.emplace_back(7, 1);
        initmap.emplace_back(8, 1);
        initmap.emplace_back(9, 1);
        initmap.emplace_back(10, 1);
        initmap.emplace_back(11, 1);
        initmap.emplace_back(12, 1);
        initmap.emplace_back(13, 1);
        initmap.emplace_back(14, 1);
        initmap.emplace_back(15, 1);
        initmap.emplace_back(16, 1);
        initmap.emplace_back(17, 1);
        initmap.emplace_back(18, 1);
        initmap.emplace_back(19, 1);
        initmap.emplace_back(20, 1);
        initmap.emplace_back(21, 1);
        initmap.emplace_back(22, 1);
        initmap.emplace_back(23, 1);
        initmap.emplace_back(24, 1);
        initmap.emplace_back(25, 1);
        initmap.emplace_back(26, 1);
        initmap.emplace_back(27, 1);
        initmap.emplace_back(28, 1);
        initmap.emplace_back(29, 1);
        initmap.emplace_back(30, 1);
        initmap.emplace_back(1, 2);
        initmap.emplace_back(30, 2);
        initmap.emplace_back(1, 3);
        initmap.emplace_back(30, 3);
        initmap.emplace_back(1, 4);
        initmap.emplace_back(30, 4);
        initmap.emplace_back(1, 5);
        initmap.emplace_back(30, 5);
        initmap.emplace_back(1, 6);
        initmap.emplace_back(30, 6);
        initmap.emplace_back(1, 7);
        initmap.emplace_back(30, 7);
        initmap.emplace_back(1, 8);
        initmap.emplace_back(30, 8);
        initmap.emplace_back(1, 9);
        initmap.emplace_back(30, 9);
        initmap.emplace_back(1, 10);
        initmap.emplace_back(30, 10);
        initmap.emplace_back(1, 11);
        initmap.emplace_back(30, 11);
        initmap.emplace_back(1, 12);
        initmap.emplace_back(30, 12);
        initmap.emplace_back(1, 13);
        initmap.emplace_back(30, 13);
        initmap.emplace_back(1, 14);
        initmap.emplace_back(30, 14);
        initmap.emplace_back(1, 15);
        initmap.emplace_back(30, 15);
        initmap.emplace_back(1, 16);
        initmap.emplace_back(30, 16);
        initmap.emplace_back(1, 17);
        initmap.emplace_back(30, 17);
        initmap.emplace_back(1, 18);
        initmap.emplace_back(30, 18);
        initmap.emplace_back(1, 19);
        initmap.emplace_back(30, 19);
        initmap.emplace_back(1, 20);
        initmap.emplace_back(30, 20);
        initmap.emplace_back(1, 21);
        initmap.emplace_back(30, 21);
        initmap.emplace_back(1, 22);
        initmap.emplace_back(30, 22);
        initmap.emplace_back(1, 23);
        initmap.emplace_back(30, 23);
        initmap.emplace_back(1, 24);
        initmap.emplace_back(30, 24);
        initmap.emplace_back(1, 25);
        initmap.emplace_back(30, 25);
        initmap.emplace_back(1, 26);
        initmap.emplace_back(30, 26);
        initmap.emplace_back(1, 27);
        initmap.emplace_back(30, 27);
        initmap.emplace_back(1, 28);
        initmap.emplace_back(30, 28);
        initmap.emplace_back(1, 29);
        initmap.emplace_back(30, 29);
        initmap.emplace_back(1, 30);
        initmap.emplace_back(2, 30);
        initmap.emplace_back(3, 30);
        initmap.emplace_back(4, 30);
        initmap.emplace_back(5, 30);
        initmap.emplace_back(6, 30);
        initmap.emplace_back(7, 30);
        initmap.emplace_back(8, 30);
        initmap.emplace_back(9, 30);
        initmap.emplace_back(10, 30);
        initmap.emplace_back(11, 30);
        initmap.emplace_back(12, 30);
        initmap.emplace_back(13, 30);
        initmap.emplace_back(14, 30);
        initmap.emplace_back(15, 30);
        initmap.emplace_back(16, 30);
        initmap.emplace_back(17, 30);
        initmap.emplace_back(18, 30);
        initmap.emplace_back(19, 30);
        initmap.emplace_back(20, 30);
        initmap.emplace_back(21, 30);
        initmap.emplace_back(22, 30);
        initmap.emplace_back(23, 30);
        initmap.emplace_back(24, 30);
        initmap.emplace_back(25, 30);
        initmap.emplace_back(26, 30);
        initmap.emplace_back(27, 30);
        initmap.emplace_back(28, 30);
        initmap.emplace_back(29, 30);
        initmap.emplace_back(30, 30);
    }
    void PrintInitmap();//���Ƴ�ʼ��ͼ
private:
    std::vector<Point> initmap;//�����ʼ��ͼ
    /*Map����Զ�����ֵ�ͼ��ֻ�轫��ʾ��ͼ�ĸ����㱣������Ӧ��map�У�����Snake����������Ӧ�ж�ײǽ��������
    std::vector<Point> map1;
    std::vector<Point> map2;
    */
};
#endif // MAP_H

