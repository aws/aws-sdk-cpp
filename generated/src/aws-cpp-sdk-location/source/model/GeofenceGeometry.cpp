/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/GeofenceGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

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
    m_polygonHasBeenSet(false),
    m_circleHasBeenSet(false),
    m_geobufHasBeenSet(false)
{
}

GeofenceGeometry::GeofenceGeometry(JsonView jsonValue)
  : GeofenceGeometry()
{
  *this = jsonValue;
}

GeofenceGeometry& GeofenceGeometry::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("Circle"))
  {
    m_circle = jsonValue.GetObject("Circle");

    m_circleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Geobuf"))
  {
    m_geobuf = HashingUtils::Base64Decode(jsonValue.GetString("Geobuf"));
    m_geobufHasBeenSet = true;
  }

  return *this;
}

JsonValue GeofenceGeometry::Jsonize() const
{
  JsonValue payload;

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

  if(m_circleHasBeenSet)
  {
   payload.WithObject("Circle", m_circle.Jsonize());

  }

  if(m_geobufHasBeenSet)
  {
   payload.WithString("Geobuf", HashingUtils::Base64Encode(m_geobuf));
  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
