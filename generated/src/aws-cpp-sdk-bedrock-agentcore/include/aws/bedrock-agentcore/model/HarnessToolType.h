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
enum class HarnessToolType { NOT_SET, remote_mcp, agentcore_browser, agentcore_gateway, inline_function, agentcore_code_interpreter };

namespace HarnessToolTypeMapper {
AWS_BEDROCKAGENTCORE_API HarnessToolType GetHarnessToolTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessToolType(HarnessToolType value);
}  // namespace HarnessToolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
