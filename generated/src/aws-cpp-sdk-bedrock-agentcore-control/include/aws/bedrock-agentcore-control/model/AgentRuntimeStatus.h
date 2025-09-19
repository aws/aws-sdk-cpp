/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{
  enum class AgentRuntimeStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    UPDATING,
    UPDATE_FAILED,
    READY,
    DELETING
  };

namespace AgentRuntimeStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeStatus GetAgentRuntimeStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentRuntimeStatus(AgentRuntimeStatus value);
} // namespace AgentRuntimeStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
