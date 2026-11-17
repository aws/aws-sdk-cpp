/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
enum class AgentInsightArchiveStatus { NOT_SET, ACTIVE, ARCHIVED };

namespace AgentInsightArchiveStatusMapper {
AWS_BEDROCKAGENTCORE_API AgentInsightArchiveStatus GetAgentInsightArchiveStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForAgentInsightArchiveStatus(AgentInsightArchiveStatus value);
}  // namespace AgentInsightArchiveStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
