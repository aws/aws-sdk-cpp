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
enum class HarnessBedrockApiFormat { NOT_SET, converse_stream, responses, chat_completions };

namespace HarnessBedrockApiFormatMapper {
AWS_BEDROCKAGENTCORE_API HarnessBedrockApiFormat GetHarnessBedrockApiFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessBedrockApiFormat(HarnessBedrockApiFormat value);
}  // namespace HarnessBedrockApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
