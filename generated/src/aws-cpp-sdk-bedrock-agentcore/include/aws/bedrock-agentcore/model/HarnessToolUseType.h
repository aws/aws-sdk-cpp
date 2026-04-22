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
enum class HarnessToolUseType { NOT_SET, tool_use, server_tool_use, mcp_tool_use };

namespace HarnessToolUseTypeMapper {
AWS_BEDROCKAGENTCORE_API HarnessToolUseType GetHarnessToolUseTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessToolUseType(HarnessToolUseType value);
}  // namespace HarnessToolUseTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
