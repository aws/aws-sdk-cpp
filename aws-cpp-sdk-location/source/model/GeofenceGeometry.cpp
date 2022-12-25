/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GeofenceGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

GeofenceGeometry::GeofenceGeometry() : 
    m_circleHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
}

GeofenceGeometry::GeofenceGeometry(JsonView jsonValue) : 
    m_circleHasBeenSet(false),
    m_polygonHasBeenSet(false)
{
  *this = jsonValue;
}

GeofenceGeometry& GeofenceGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Circle"))
  {
    m_circle = jsonValue.GetObject("Circle");

    m_circleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Polygon"))
  {
    Aws::Utils::Array<JsonView> polygonJsonList = jsonValue.GetArray("Polygon");
    for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
    {
      Aws::Utils::Array<JsonView> linearRingJsonList = polygonJsonList[polygonIndex].AsArray();
      Aws::Vector<Aws::Vector<double>> linearRingList;
      linearRingList.reserve((size_t)linearRingJsonList.GetLength());
      for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
      {
        Aws::Utils::Array<JsonView> positionJsonList = linearRingJsonList[linearRingIndex].AsArray();
        Aws::Vector<double> positionList;
        positionList.reserve((size_t)positionJsonList.GetLength());
        for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
        {
          positionList.push_back(positionJsonList[positionIndex].AsDouble());
        }
        linearRingList.push_back(std::move(positionList));
      }
      m_polygon.push_back(std::move(linearRingList));
    }
    m_polygonHasBeenSet = true;
  }

  return *this;
}

JsonValue GeofenceGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_circleHasBeenSet)
  {
   payload.WithObject("Circle", m_circle.Jsonize());

  }

  if(m_polygonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> polygonJsonList(m_polygon.size());
   for(unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex)
   {
     Aws::Utils::Array<JsonValue> linearRingJsonList(m_polygon[polygonIndex].size());
     for(unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex)
     {
       Aws::Utils::Array<JsonValue> positionJsonList(m_polygon[polygonIndex][linearRingIndex].size());
       for(unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex)
       {
         positionJsonList[positionIndex].AsDouble(m_polygon[polygonIndex][linearRingIndex][positionIndex]);
       }
       linearRingJsonList[linearRingIndex].AsArray(std::move(positionJsonList));
     }
     polygonJsonList[polygonIndex].AsArray(std::move(linearRingJsonList));
   }
   payload.WithArray("Polygon", std::move(polygonJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
