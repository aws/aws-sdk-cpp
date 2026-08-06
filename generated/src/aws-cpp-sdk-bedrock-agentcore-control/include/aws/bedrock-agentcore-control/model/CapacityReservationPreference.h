/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class CapacityReservationPreference { NOT_SET, capacity_reservations_only, open, none };

namespace CapacityReservationPreferenceMapper {
AWS_BEDROCKAGENTCORECONTROL_API CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference value);
}  // namespace CapacityReservationPreferenceMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
