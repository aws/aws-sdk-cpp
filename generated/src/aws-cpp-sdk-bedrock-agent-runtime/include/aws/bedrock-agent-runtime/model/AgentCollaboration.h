/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{
  enum class AgentCollaboration
  {
    NOT_SET,
    SUPERVISOR,
    SUPERVISOR_ROUTER,
    DISABLED
  };

namespace AgentCollaborationMapper
{
AWS_BEDROCKAGENTRUNTIME_API AgentCollaboration GetAgentCollaborationForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForAgentCollaboration(AgentCollaboration value);
} // namespace AgentCollaborationMapper
} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
