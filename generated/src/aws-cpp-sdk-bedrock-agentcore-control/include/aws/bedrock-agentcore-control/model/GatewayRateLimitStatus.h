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
enum class GatewayRateLimitStatus { NOT_SET, CREATING, ACTIVE, UPDATING, DELETING };

namespace GatewayRateLimitStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API GatewayRateLimitStatus GetGatewayRateLimitStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayRateLimitStatus(GatewayRateLimitStatus value);
}  // namespace GatewayRateLimitStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
