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
  enum class AgentAliasStatus
  {
    NOT_SET,
    CREATING,
    PREPARED,
    FAILED,
    UPDATING,
    DELETING
  };

namespace AgentAliasStatusMapper
{
AWS_BEDROCKAGENT_API AgentAliasStatus GetAgentAliasStatusForName(const Aws::String& name);

AWS_BEDROCKAGENT_API Aws::String GetNameForAgentAliasStatus(AgentAliasStatus value);
} // namespace AgentAliasStatusMapper
} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
