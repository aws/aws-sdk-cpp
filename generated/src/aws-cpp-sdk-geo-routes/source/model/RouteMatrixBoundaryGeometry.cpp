/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/RouteMatrixBoundaryGeometry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

RouteMatrixBoundaryGeometry::RouteMatrixBoundaryGeometry(JsonView jsonValue) { *this = jsonValue; }

RouteMatrixBoundaryGeometry& RouteMatrixBoundaryGeometry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AutoCircle")) {
    m_autoCircle = jsonValue.GetObject("AutoCircle");
    m_autoCircleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Circle")) {
    m_circle = jsonValue.GetObject("Circle");
    m_circleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BoundingBox")) {
    Aws::Utils::Array<JsonView> boundingBoxJsonList = jsonValue.GetArray("BoundingBox");
    for (unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex) {
      m_boundingBox.push_back(boundingBoxJsonList[boundingBoxIndex].AsDouble());
    }
    m_boundingBoxHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Polygon")) {
    Aws::Utils::Array<JsonView> polygonJsonList = jsonValue.GetArray("Polygon");
    for (unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex) {
      Aws::Utils::Array<JsonView> linearRing2JsonList = polygonJsonList[polygonIndex].AsArray();
      Aws::Vector<Aws::Vector<double>> linearRing2List;
      linearRing2List.reserve((size_t)linearRing2JsonList.GetLength());
      for (unsigned linearRing2Index = 0; linearRing2Index < linearRing2JsonList.GetLength(); ++linearRing2Index) {
        Aws::Utils::Array<JsonView> position3JsonList = linearRing2JsonList[linearRing2Index].AsArray();
        Aws::Vector<double> position3List;
        position3List.reserve((size_t)position3JsonList.GetLength());
        for (unsigned position3Index = 0; position3Index < position3JsonList.GetLength(); ++position3Index) {
          position3List.push_back(position3JsonList[position3Index].AsDouble());
        }
        linearRing2List.push_back(std::move(position3List));
      }
      m_polygon.push_back(std::move(linearRing2List));
    }
    m_polygonHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteMatrixBoundaryGeometry::Jsonize() const {
  JsonValue payload;

  if (m_autoCircleHasBeenSet) {
    payload.WithObject("AutoCircle", m_autoCircle.Jsonize());
  }

  if (m_circleHasBeenSet) {
    payload.WithObject("Circle", m_circle.Jsonize());
  }

  if (m_boundingBoxHasBeenSet) {
    Aws::Utils::Array<JsonValue> boundingBoxJsonList(m_boundingBox.size());
    for (unsigned boundingBoxIndex = 0; boundingBoxIndex < boundingBoxJsonList.GetLength(); ++boundingBoxIndex) {
      boundingBoxJsonList[boundingBoxIndex].AsDouble(m_boundingBox[boundingBoxIndex]);
    }
    payload.WithArray("BoundingBox", std::move(boundingBoxJsonList));
  }

  if (m_polygonHasBeenSet) {
    Aws::Utils::Array<JsonValue> polygonJsonList(m_polygon.size());
    for (unsigned polygonIndex = 0; polygonIndex < polygonJsonList.GetLength(); ++polygonIndex) {
      Aws::Utils::Array<JsonValue> linearRingJsonList(m_polygon[polygonIndex].size());
      for (unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex) {
        Aws::Utils::Array<JsonValue> positionJsonList(m_polygon[polygonIndex][linearRingIndex].size());
        for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
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

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
