/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {
enum class InputImageFormat { NOT_SET, png, jpeg, gif, webp };

namespace InputImageFormatMapper {
AWS_BEDROCKAGENTRUNTIME_API InputImageFormat GetInputImageFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTRUNTIME_API Aws::String GetNameForInputImageFormat(InputImageFormat value);
}  // namespace InputImageFormatMapper
}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
