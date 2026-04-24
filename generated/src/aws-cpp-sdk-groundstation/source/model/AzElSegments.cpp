/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AzElSegments.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AzElSegments::AzElSegments(JsonView jsonValue) { *this = jsonValue; }

AzElSegments& AzElSegments::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("angleUnit")) {
    m_angleUnit = AngleUnitsMapper::GetAngleUnitsForName(jsonValue.GetString("angleUnit"));
    m_angleUnitHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azElSegmentList")) {
    Aws::Utils::Array<JsonView> azElSegmentListJsonList = jsonValue.GetArray("azElSegmentList");
    for (unsigned azElSegmentListIndex = 0; azElSegmentListIndex < azElSegmentListJsonList.GetLength(); ++azElSegmentListIndex) {
      m_azElSegmentList.push_back(azElSegmentListJsonList[azElSegmentListIndex].AsObject());
    }
    m_azElSegmentListHasBeenSet = true;
  }
  return *this;
}

JsonValue AzElSegments::Jsonize() const {
  JsonValue payload;

  if (m_angleUnitHasBeenSet) {
    payload.WithString("angleUnit", AngleUnitsMapper::GetNameForAngleUnits(m_angleUnit));
  }

  if (m_azElSegmentListHasBeenSet) {
    Aws::Utils::Array<JsonValue> azElSegmentListJsonList(m_azElSegmentList.size());
    for (unsigned azElSegmentListIndex = 0; azElSegmentListIndex < azElSegmentListJsonList.GetLength(); ++azElSegmentListIndex) {
      azElSegmentListJsonList[azElSegmentListIndex].AsObject(m_azElSegmentList[azElSegmentListIndex].Jsonize());
    }
    payload.WithArray("azElSegmentList", std::move(azElSegmentListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
