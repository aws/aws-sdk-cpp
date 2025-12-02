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
enum class GatewayPolicyEngineMode { NOT_SET, LOG_ONLY, ENFORCE };

namespace GatewayPolicyEngineModeMapper {
AWS_BEDROCKAGENTCORECONTROL_API GatewayPolicyEngineMode GetGatewayPolicyEngineModeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayPolicyEngineMode(GatewayPolicyEngineMode value);
}  // namespace GatewayPolicyEngineModeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
