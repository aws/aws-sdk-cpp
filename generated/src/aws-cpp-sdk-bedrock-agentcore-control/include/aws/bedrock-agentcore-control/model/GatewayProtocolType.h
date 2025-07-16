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
  enum class GatewayProtocolType
  {
    NOT_SET,
    MCP
  };

namespace GatewayProtocolTypeMapper
{
AWS_BEDROCKAGENTCORECONTROL_API GatewayProtocolType GetGatewayProtocolTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForGatewayProtocolType(GatewayProtocolType value);
} // namespace GatewayProtocolTypeMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
