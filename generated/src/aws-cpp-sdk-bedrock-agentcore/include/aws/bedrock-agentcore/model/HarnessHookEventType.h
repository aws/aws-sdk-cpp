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
enum class HarnessHookEventType { NOT_SET, before_tool_call, after_tool_call, before_invocation, after_invocation };

namespace HarnessHookEventTypeMapper {
AWS_BEDROCKAGENTCORE_API HarnessHookEventType GetHarnessHookEventTypeForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessHookEventType(HarnessHookEventType value);
}  // namespace HarnessHookEventTypeMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
