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
enum class HarnessStopReason {
  NOT_SET,
  end_turn,
  tool_use,
  tool_result,
  max_tokens,
  stop_sequence,
  content_filtered,
  malformed_model_output,
  malformed_tool_use,
  interrupted,
  partial_turn,
  model_context_window_exceeded,
  max_iterations_exceeded,
  max_output_tokens_exceeded,
  timeout_exceeded
};

namespace HarnessStopReasonMapper {
AWS_BEDROCKAGENTCORE_API HarnessStopReason GetHarnessStopReasonForName(const Aws::String& name);

AWS_BEDROCKAGENTCORE_API Aws::String GetNameForHarnessStopReason(HarnessStopReason value);
}  // namespace HarnessStopReasonMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
