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
  enum class AgentEndpointStatus
  {
    NOT_SET,
    CREATING,
    CREATE_FAILED,
    UPDATING,
    UPDATE_FAILED,
    READY,
    DELETING
  };

namespace AgentEndpointStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API AgentEndpointStatus GetAgentEndpointStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForAgentEndpointStatus(AgentEndpointStatus value);
} // namespace AgentEndpointStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
