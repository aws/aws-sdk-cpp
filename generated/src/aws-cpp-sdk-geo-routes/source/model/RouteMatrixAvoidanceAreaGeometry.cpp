/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixAvoidanceAreaGeometry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteMatrixAvoidanceAreaGeometry::RouteMatrixAvoidanceAreaGeometry(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteMatrixAvoidanceAreaGeometry& RouteMatrixAvoidanceAreaGeometry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BoundingBox"))
  {
    Aws::Utils::Array<JsonView> boundingBoxJsonList = jsonValue.GetArray("BoundingBox");
    for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
    {
      m_boundingBox.push_back(boundingBoxJsonList[boundingBoxIndex].AsDouble());
    }
    m_boundingBoxHasBeenSet = true;
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
  if(jsonValue.ValueExists("PolylinePolygon"))
  {
    Aws::Utils::Array<JsonView> polylinePolygonJsonList = jsonValue.GetArray("PolylinePolygon");
    for(unsigned polylinePolygonIndex = 0; polylinePolygonIndex < polylinePolygonJsonList.GetLength(); ++polylinePolygonIndex)
    {
      m_polylinePolygon.push_back(polylinePolygonJsonList[polylinePolygonIndex].AsString());
    }
    m_polylinePolygonHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixAvoidanceAreaGeometry::Jsonize() const
{
  JsonValue payload;

  if(m_boundingBoxHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> boundingBoxJsonList(m_boundingBox.size());
   for(unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex)
   {
     boundingBoxJsonList[boundingBoxIndex].AsDouble(m_boundingBox[boundingBoxIndex]);
   }
   payload.WithArray("BoundingBox", std::move(boundingBoxJsonList));

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

  if(m_polylinePolygonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> polylinePolygonJsonList(m_polylinePolygon.size());
   for(unsigned polylinePolygonIndex = 0; polylinePolygonIndex < polylinePolygonJsonList.GetLength(); ++polylinePolygonIndex)
   {
     polylinePolygonJsonList[polylinePolygonIndex].AsString(m_polylinePolygon[polylinePolygonIndex]);
   }
   payload.WithArray("PolylinePolygon", std::move(polylinePolygonJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
