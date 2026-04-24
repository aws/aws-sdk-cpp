/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AzElSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AzElSegment::AzElSegment(JsonView jsonValue) { *this = jsonValue; }

AzElSegment& AzElSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("referenceEpoch")) {
    m_referenceEpoch = jsonValue.GetString("referenceEpoch");
    m_referenceEpochHasBeenSet = true;
  }
  if (jsonValue.ValueExists("validTimeRange")) {
    m_validTimeRange = jsonValue.GetObject("validTimeRange");
    m_validTimeRangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("azElList")) {
    Aws::Utils::Array<JsonView> azElListJsonList = jsonValue.GetArray("azElList");
    for (unsigned azElListIndex = 0; azElListIndex < azElListJsonList.GetLength(); ++azElListIndex) {
      m_azElList.push_back(azElListJsonList[azElListIndex].AsObject());
    }
    m_azElListHasBeenSet = true;
  }
  return *this;
}

JsonValue AzElSegment::Jsonize() const {
  JsonValue payload;

  if (m_referenceEpochHasBeenSet) {
    payload.WithString("referenceEpoch", m_referenceEpoch.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_validTimeRangeHasBeenSet) {
    payload.WithObject("validTimeRange", m_validTimeRange.Jsonize());
  }

  if (m_azElListHasBeenSet) {
    Aws::Utils::Array<JsonValue> azElListJsonList(m_azElList.size());
    for (unsigned azElListIndex = 0; azElListIndex < azElListJsonList.GetLength(); ++azElListIndex) {
      azElListJsonList[azElListIndex].AsObject(m_azElList[azElListIndex].Jsonize());
    }
    payload.WithArray("azElList", std::move(azElListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
