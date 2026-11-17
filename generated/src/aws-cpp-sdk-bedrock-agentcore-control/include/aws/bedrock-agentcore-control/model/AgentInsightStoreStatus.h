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
enum class AgentInsightStoreStatus { NOT_SET, ACTIVE, UPDATING, INACTIVE, ERROR_ };

namespace AgentInsightStoreStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreStatus GetAgentInsightStoreStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentInsightStoreStatus(AgentInsightStoreStatus value);
}  // namespace AgentInsightStoreStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
