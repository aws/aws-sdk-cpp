/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {
enum class InboundTokenClaimValueType { NOT_SET, STRING, STRING_ARRAY };

namespace InboundTokenClaimValueTypeMapper {
AWS_AGENTREGISTRYCONTROL_API InboundTokenClaimValueType GetInboundTokenClaimValueTypeForName(const Aws::String& name);

AWS_AGENTREGISTRYCONTROL_API Aws::String GetNameForInboundTokenClaimValueType(InboundTokenClaimValueType value);
}  // namespace InboundTokenClaimValueTypeMapper
}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
