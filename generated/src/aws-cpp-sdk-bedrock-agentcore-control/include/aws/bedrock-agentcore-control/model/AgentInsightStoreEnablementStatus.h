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
enum class AgentInsightStoreEnablementStatus { NOT_SET, ENABLED, DISABLED };

namespace AgentInsightStoreEnablementStatusMapper {
AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreEnablementStatus GetAgentInsightStoreEnablementStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentInsightStoreEnablementStatus(AgentInsightStoreEnablementStatus value);
}  // namespace AgentInsightStoreEnablementStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
