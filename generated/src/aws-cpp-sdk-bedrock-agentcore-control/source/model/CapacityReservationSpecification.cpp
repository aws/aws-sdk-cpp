/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityReservationSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CapacityReservationSpecification::CapacityReservationSpecification(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationSpecification& CapacityReservationSpecification::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityReservationPreference")) {
    m_capacityReservationPreference =
        CapacityReservationPreferenceMapper::GetCapacityReservationPreferenceForName(jsonValue.GetString("capacityReservationPreference"));
    m_capacityReservationPreferenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityReservationTarget")) {
    m_capacityReservationTarget = jsonValue.GetObject("capacityReservationTarget");
    m_capacityReservationTargetHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationSpecification::Jsonize() const {
  JsonValue payload;

  if (m_capacityReservationPreferenceHasBeenSet) {
    payload.WithString("capacityReservationPreference",
                       CapacityReservationPreferenceMapper::GetNameForCapacityReservationPreference(m_capacityReservationPreference));
  }

  if (m_capacityReservationTargetHasBeenSet) {
    payload.WithObject("capacityReservationTarget", m_capacityReservationTarget.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
