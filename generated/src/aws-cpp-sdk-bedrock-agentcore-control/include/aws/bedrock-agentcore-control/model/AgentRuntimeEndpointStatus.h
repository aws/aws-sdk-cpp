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
  enum class AgentRuntimeEndpointStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    UPDATING,
    UPDATE_FAILED,
    READY,
    DELETING
  };

namespace AgentRuntimeEndpointStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API AgentRuntimeEndpointStatus GetAgentRuntimeEndpointStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentRuntimeEndpointStatus(AgentRuntimeEndpointStatus value);
} // namespace AgentRuntimeEndpointStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
