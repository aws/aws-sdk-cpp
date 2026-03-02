/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/GeofenceGeometry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

GeofenceGeometry::GeofenceGeometry(JsonView jsonValue) { *this = jsonValue; }

GeofenceGeometry& GeofenceGeometry::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("Circle")) {
    m_circle = jsonValue.GetObject("Circle");
    m_circleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Geobuf")) {
    m_geobuf = HashingUtils::Base64Decode(jsonValue.GetString("Geobuf"));
    m_geobufHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MultiPolygon")) {
    Aws::Utils::Array<JsonView> multiPolygonJsonList = jsonValue.GetArray("MultiPolygon");
    for (unsigned multiPolygonIndex = 0; multiPolygonIndex < multiPolygonJsonList.GetLength(); ++multiPolygonIndex) {
      Aws::Utils::Array<JsonView> linearRings2JsonList = multiPolygonJsonList[multiPolygonIndex].AsArray();
      Aws::Vector<Aws::Vector<Aws::Vector<double>>> linearRings2List;
      linearRings2List.reserve((size_t)linearRings2JsonList.GetLength());
      for (unsigned linearRings2Index = 0; linearRings2Index < linearRings2JsonList.GetLength(); ++linearRings2Index) {
        Aws::Utils::Array<JsonView> linearRing3JsonList = linearRings2JsonList[linearRings2Index].AsArray();
        Aws::Vector<Aws::Vector<double>> linearRing3List;
        linearRing3List.reserve((size_t)linearRing3JsonList.GetLength());
        for (unsigned linearRing3Index = 0; linearRing3Index < linearRing3JsonList.GetLength(); ++linearRing3Index) {
          Aws::Utils::Array<JsonView> position4JsonList = linearRing3JsonList[linearRing3Index].AsArray();
          Aws::Vector<double> position4List;
          position4List.reserve((size_t)position4JsonList.GetLength());
          for (unsigned position4Index = 0; position4Index < position4JsonList.GetLength(); ++position4Index) {
            position4List.push_back(position4JsonList[position4Index].AsDouble());
          }
          linearRing3List.push_back(std::move(position4List));
        }
        linearRings2List.push_back(std::move(linearRing3List));
      }
      m_multiPolygon.push_back(std::move(linearRings2List));
    }
    m_multiPolygonHasBeenSet = true;
  }
  return *this;
}

JsonValue GeofenceGeometry::Jsonize() const {
  JsonValue payload;

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

  if (m_circleHasBeenSet) {
    payload.WithObject("Circle", m_circle.Jsonize());
  }

  if (m_geobufHasBeenSet) {
    payload.WithString("Geobuf", HashingUtils::Base64Encode(m_geobuf));
  }

  if (m_multiPolygonHasBeenSet) {
    Aws::Utils::Array<JsonValue> multiPolygonJsonList(m_multiPolygon.size());
    for (unsigned multiPolygonIndex = 0; multiPolygonIndex < multiPolygonJsonList.GetLength(); ++multiPolygonIndex) {
      Aws::Utils::Array<JsonValue> linearRingsJsonList(m_multiPolygon[multiPolygonIndex].size());
      for (unsigned linearRingsIndex = 0; linearRingsIndex < linearRingsJsonList.GetLength(); ++linearRingsIndex) {
        Aws::Utils::Array<JsonValue> linearRingJsonList(m_multiPolygon[multiPolygonIndex][linearRingsIndex].size());
        for (unsigned linearRingIndex = 0; linearRingIndex < linearRingJsonList.GetLength(); ++linearRingIndex) {
          Aws::Utils::Array<JsonValue> positionJsonList(m_multiPolygon[multiPolygonIndex][linearRingsIndex][linearRingIndex].size());
          for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
            positionJsonList[positionIndex].AsDouble(m_multiPolygon[multiPolygonIndex][linearRingsIndex][linearRingIndex][positionIndex]);
          }
          linearRingJsonList[linearRingIndex].AsArray(std::move(positionJsonList));
        }
        linearRingsJsonList[linearRingsIndex].AsArray(std::move(linearRingJsonList));
      }
      multiPolygonJsonList[multiPolygonIndex].AsArray(std::move(linearRingsJsonList));
    }
    payload.WithArray("MultiPolygon", std::move(multiPolygonJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
