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
  enum class GatewayStatus
  {
    NOT_SET,
    CREATING,
    UPDATING,
    UPDATE_UNSUCCESSFUL,
    DELETING,
    READY,
    FAILED
  };

namespace GatewayStatusMapper
{
AWS_BEDROCKAGENTCORECONTROL_API GatewayStatus GetGatewayStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayStatus(GatewayStatus value);
} // namespace GatewayStatusMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
