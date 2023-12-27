/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{
  enum class AgentStatus
  {
    NOT_SET,
    CREATING,
    PREPARING,
    PREPARED,
    NOT_PREPARED,
    DELETING,
    FAILED,
    VERSIONING,
    UPDATING
  };

namespace AgentStatusMapper
{
AWS_BEDROCKAGENT_API AgentStatus GetAgentStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForAgentStatus(AgentStatus value);
} // namespace AgentStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
