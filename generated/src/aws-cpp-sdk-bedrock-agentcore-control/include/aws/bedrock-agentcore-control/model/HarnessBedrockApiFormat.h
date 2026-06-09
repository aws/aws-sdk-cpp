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
enum class HarnessBedrockApiFormat { NOT_SET, converse_stream, responses, chat_completions };

namespace HarnessBedrockApiFormatMapper {
AWS_BEDROCKAGENTCORECONTROL_API HarnessBedrockApiFormat GetHarnessBedrockApiFormatForName(const Aws::String& name);

AWS_BEDROCKAGENTCORECONTROL_API Aws::String GetNameForHarnessBedrockApiFormat(HarnessBedrockApiFormat value);
}  // namespace HarnessBedrockApiFormatMapper
}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
