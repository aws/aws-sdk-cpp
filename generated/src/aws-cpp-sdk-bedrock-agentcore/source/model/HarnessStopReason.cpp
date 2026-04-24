/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/HarnessStopReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {
namespace HarnessStopReasonMapper {

static const int end_turn_HASH = HashingUtils::HashString("end_turn");
static const int tool_use_HASH = HashingUtils::HashString("tool_use");
static const int tool_result_HASH = HashingUtils::HashString("tool_result");
static const int max_tokens_HASH = HashingUtils::HashString("max_tokens");
static const int stop_sequence_HASH = HashingUtils::HashString("stop_sequence");
static const int content_filtered_HASH = HashingUtils::HashString("content_filtered");
static const int malformed_model_output_HASH = HashingUtils::HashString("malformed_model_output");
static const int malformed_tool_use_HASH = HashingUtils::HashString("malformed_tool_use");
static const int interrupted_HASH = HashingUtils::HashString("interrupted");
static const int partial_turn_HASH = HashingUtils::HashString("partial_turn");
static const int model_context_window_exceeded_HASH = HashingUtils::HashString("model_context_window_exceeded");
static const int max_iterations_exceeded_HASH = HashingUtils::HashString("max_iterations_exceeded");
static const int max_output_tokens_exceeded_HASH = HashingUtils::HashString("max_output_tokens_exceeded");
static const int timeout_exceeded_HASH = HashingUtils::HashString("timeout_exceeded");

HarnessStopReason GetHarnessStopReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == end_turn_HASH) {
    return HarnessStopReason::end_turn;
  } else if (hashCode == tool_use_HASH) {
    return HarnessStopReason::tool_use;
  } else if (hashCode == tool_result_HASH) {
    return HarnessStopReason::tool_result;
  } else if (hashCode == max_tokens_HASH) {
    return HarnessStopReason::max_tokens;
  } else if (hashCode == stop_sequence_HASH) {
    return HarnessStopReason::stop_sequence;
  } else if (hashCode == content_filtered_HASH) {
    return HarnessStopReason::content_filtered;
  } else if (hashCode == malformed_model_output_HASH) {
    return HarnessStopReason::malformed_model_output;
  } else if (hashCode == malformed_tool_use_HASH) {
    return HarnessStopReason::malformed_tool_use;
  } else if (hashCode == interrupted_HASH) {
    return HarnessStopReason::interrupted;
  } else if (hashCode == partial_turn_HASH) {
    return HarnessStopReason::partial_turn;
  } else if (hashCode == model_context_window_exceeded_HASH) {
    return HarnessStopReason::model_context_window_exceeded;
  } else if (hashCode == max_iterations_exceeded_HASH) {
    return HarnessStopReason::max_iterations_exceeded;
  } else if (hashCode == max_output_tokens_exceeded_HASH) {
    return HarnessStopReason::max_output_tokens_exceeded;
  } else if (hashCode == timeout_exceeded_HASH) {
    return HarnessStopReason::timeout_exceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<HarnessStopReason>(hashCode);
  }

  return HarnessStopReason::NOT_SET;
}

Aws::String GetNameForHarnessStopReason(HarnessStopReason enumValue) {
  switch (enumValue) {
    case HarnessStopReason::NOT_SET:
      return {};
    case HarnessStopReason::end_turn:
      return "end_turn";
    case HarnessStopReason::tool_use:
      return "tool_use";
    case HarnessStopReason::tool_result:
      return "tool_result";
    case HarnessStopReason::max_tokens:
      return "max_tokens";
    case HarnessStopReason::stop_sequence:
      return "stop_sequence";
    case HarnessStopReason::content_filtered:
      return "content_filtered";
    case HarnessStopReason::malformed_model_output:
      return "malformed_model_output";
    case HarnessStopReason::malformed_tool_use:
      return "malformed_tool_use";
    case HarnessStopReason::interrupted:
      return "interrupted";
    case HarnessStopReason::partial_turn:
      return "partial_turn";
    case HarnessStopReason::model_context_window_exceeded:
      return "model_context_window_exceeded";
    case HarnessStopReason::max_iterations_exceeded:
      return "max_iterations_exceeded";
    case HarnessStopReason::max_output_tokens_exceeded:
      return "max_output_tokens_exceeded";
    case HarnessStopReason::timeout_exceeded:
      return "timeout_exceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace HarnessStopReasonMapper
}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
