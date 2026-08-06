/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CapacityReservationTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CapacityReservationTarget::CapacityReservationTarget(JsonView jsonValue) { *this = jsonValue; }

CapacityReservationTarget& CapacityReservationTarget::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("capacityReservationId")) {
    m_capacityReservationId = jsonValue.GetString("capacityReservationId");
    m_capacityReservationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("capacityReservationResourceGroupArn")) {
    m_capacityReservationResourceGroupArn = jsonValue.GetString("capacityReservationResourceGroupArn");
    m_capacityReservationResourceGroupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityReservationTarget::Jsonize() const {
  JsonValue payload;

  if (m_capacityReservationIdHasBeenSet) {
    payload.WithString("capacityReservationId", m_capacityReservationId);
  }

  if (m_capacityReservationResourceGroupArnHasBeenSet) {
    payload.WithString("capacityReservationResourceGroupArn", m_capacityReservationResourceGroupArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
