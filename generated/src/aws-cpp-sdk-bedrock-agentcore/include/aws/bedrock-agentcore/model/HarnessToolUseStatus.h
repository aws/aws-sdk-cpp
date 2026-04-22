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
enum class HarnessToolUseStatus { NOT_SET, success, error };

namespace HarnessToolUseStatusMapper {
AWS_BEDROCKAGENTCORE_API HarnessToolUseStatus GetHarnessToolUseStatusForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessToolUseStatus(HarnessToolUseStatus value);
}  // namespace HarnessToolUseStatusMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
