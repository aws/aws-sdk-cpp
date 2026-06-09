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
enum class HarnessOpenAiApiFormat { NOT_SET, chat_completions, responses };

namespace HarnessOpenAiApiFormatMapper {
AWS_BEDROCKAGENTCORE_API HarnessOpenAiApiFormat GetHarnessOpenAiApiFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessOpenAiApiFormat(HarnessOpenAiApiFormat value);
}  // namespace HarnessOpenAiApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
