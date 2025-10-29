/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockRuntime {
namespace Model {
enum class ToolUseType { NOT_SET, server_tool_use };

namespace ToolUseTypeMapper {
AWS_BEDROCKRUNTIME_API ToolUseType GetToolUseTypeForName(const Aws::String& name);

AWS_BEDROCKRUNTIME_API Aws::String GetNameForToolUseType(ToolUseType value);
}  // namespace ToolUseTypeMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
