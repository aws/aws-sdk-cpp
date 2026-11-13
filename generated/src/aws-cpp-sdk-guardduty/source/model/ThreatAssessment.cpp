/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/ThreatAssessment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

ThreatAssessment::ThreatAssessment(JsonView jsonValue) { *this = jsonValue; }

ThreatAssessment& ThreatAssessment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attackProgression")) {
    Aws::Utils::Array<JsonView> attackProgressionJsonList = jsonValue.GetArray("attackProgression");
    for (unsigned attackProgressionIndex = 0; attackProgressionIndex < attackProgressionJsonList.GetLength(); ++attackProgressionIndex) {
      m_attackProgression.push_back(attackProgressionJsonList[attackProgressionIndex].AsObject());
    }
    m_attackProgressionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("threatActorProfile")) {
    m_threatActorProfile = jsonValue.GetString("threatActorProfile");
    m_threatActorProfileHasBeenSet = true;
  }
  return *this;
}

JsonValue ThreatAssessment::Jsonize() const {
  JsonValue payload;

  if (m_attackProgressionHasBeenSet) {
    Aws::Utils::Array<JsonValue> attackProgressionJsonList(m_attackProgression.size());
    for (unsigned attackProgressionIndex = 0; attackProgressionIndex < attackProgressionJsonList.GetLength(); ++attackProgressionIndex) {
      attackProgressionJsonList[attackProgressionIndex].AsObject(m_attackProgression[attackProgressionIndex].Jsonize());
    }
    payload.WithArray("attackProgression", std::move(attackProgressionJsonList));
  }

  if (m_threatActorProfileHasBeenSet) {
    payload.WithString("threatActorProfile", m_threatActorProfile);
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
