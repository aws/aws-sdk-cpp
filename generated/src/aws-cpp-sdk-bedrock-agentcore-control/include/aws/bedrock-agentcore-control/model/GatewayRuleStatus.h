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
enum class GatewayRuleStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING };

namespace GatewayRuleStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API GatewayRuleStatus GetGatewayRuleStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayRuleStatus(GatewayRuleStatus value);
}  // namespace GatewayRuleStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
