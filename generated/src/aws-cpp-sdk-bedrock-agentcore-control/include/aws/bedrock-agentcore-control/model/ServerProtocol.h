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
  enum class ServerProtocol
  {
    NOT_SET,
    MCP,
    HTTP
  };

namespace ServerProtocolMapper
{
AWS_BEDROCKAGENTCORECONTROL_API ServerProtocol GetServerProtocolForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForServerProtocol(ServerProtocol value);
} // namespace ServerProtocolMapper
} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
