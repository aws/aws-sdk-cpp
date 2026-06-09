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
enum class HarnessOpenAiApiFormat { NOT_SET, chat_completions, responses };

namespace HarnessOpenAiApiFormatMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessOpenAiApiFormat GetHarnessOpenAiApiFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessOpenAiApiFormat(HarnessOpenAiApiFormat value);
}  // namespace HarnessOpenAiApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
