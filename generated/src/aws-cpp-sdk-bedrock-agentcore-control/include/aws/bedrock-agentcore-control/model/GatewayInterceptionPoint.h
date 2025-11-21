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
enum class GatewayInterceptionPoint { NOT_SET, REQUEST, RESPONSE };

namespace GatewayInterceptionPointMapper {
AWS_BEDROCKAGENTCORECONTROL_API GatewayInterceptionPoint GetGatewayInterceptionPointForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayInterceptionPoint(GatewayInterceptionPoint value);
}  // namespace GatewayInterceptionPointMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
