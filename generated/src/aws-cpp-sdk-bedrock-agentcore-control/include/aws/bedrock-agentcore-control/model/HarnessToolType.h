/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {
enum class HarnessToolType { NOT_SET, remote_mcp, agentcore_browser, agentcore_gateway, inline_function, agentcore_code_interpreter };

namespace HarnessToolTypeMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessToolType GetHarnessToolTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessToolType(HarnessToolType value);
}  // namespace HarnessToolTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
