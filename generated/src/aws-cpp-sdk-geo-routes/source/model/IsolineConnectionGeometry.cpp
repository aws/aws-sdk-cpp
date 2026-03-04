/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/geo-routes/model/IsolineConnectionGeometry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GeoRoutes {
namespace Model {

IsolineConnectionGeometry::IsolineConnectionGeometry(JsonView jsonValue) { *this = jsonValue; }

IsolineConnectionGeometry& IsolineConnectionGeometry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("LineString")) {
    Aws::Utils::Array<JsonView> lineStringJsonList = jsonValue.GetArray("LineString");
    for (unsigned lineStringIndex = 0; lineStringIndex < lineStringJsonList.GetLength(); ++lineStringIndex) {
      Aws::Utils::Array<JsonView> position2JsonList = lineStringJsonList[lineStringIndex].AsArray();
      Aws::Vector<double> position2List;
      position2List.reserve((size_t)position2JsonList.GetLength());
      for (unsigned position2Index = 0; position2Index < position2JsonList.GetLength(); ++position2Index) {
        position2List.push_back(position2JsonList[position2Index].AsDouble());
      }
      m_lineString.push_back(std::move(position2List));
    }
    m_lineStringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Polyline")) {
    m_polyline = jsonValue.GetString("Polyline");
    m_polylineHasBeenSet = true;
  }
  return *this;
}

JsonValue IsolineConnectionGeometry::Jsonize() const {
  JsonValue payload;

  if (m_lineStringHasBeenSet) {
    Aws::Utils::Array<JsonValue> lineStringJsonList(m_lineString.size());
    for (unsigned lineStringIndex = 0; lineStringIndex < lineStringJsonList.GetLength(); ++lineStringIndex) {
      Aws::Utils::Array<JsonValue> positionJsonList(m_lineString[lineStringIndex].size());
      for (unsigned positionIndex = 0; positionIndex < positionJsonList.GetLength(); ++positionIndex) {
        positionJsonList[positionIndex].AsDouble(m_lineString[lineStringIndex][positionIndex]);
      }
      lineStringJsonList[lineStringIndex].AsArray(std::move(positionJsonList));
    }
    payload.WithArray("LineString", std::move(lineStringJsonList));
  }

  if (m_polylineHasBeenSet) {
    payload.WithString("Polyline", m_polyline);
  }

  return payload;
}

}  // namespace Model
}  // namespace GeoRoutes
}  // namespace Aws
