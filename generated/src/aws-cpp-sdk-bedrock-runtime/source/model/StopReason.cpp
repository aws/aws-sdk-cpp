/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/StopReason.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

namespace Aws {
namespace BedrockRuntime {
namespace Model {
namespace StopReasonMapper {

static const int end_turn_HASH = HashingUtils::HashString("end_turn");
static const int tool_use_HASH = HashingUtils::HashString("tool_use");
static const int max_tokens_HASH = HashingUtils::HashString("max_tokens");
static const int stop_sequence_HASH = HashingUtils::HashString("stop_sequence");
static const int guardrail_intervened_HASH = HashingUtils::HashString("guardrail_intervened");
static const int content_filtered_HASH = HashingUtils::HashString("content_filtered");
static const int malformed_model_output_HASH = HashingUtils::HashString("malformed_model_output");
static const int malformed_tool_use_HASH = HashingUtils::HashString("malformed_tool_use");
static const int model_context_window_exceeded_HASH = HashingUtils::HashString("model_context_window_exceeded");

StopReason GetStopReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == end_turn_HASH) {
    return StopReason::end_turn;
  } else if (hashCode == tool_use_HASH) {
    return StopReason::tool_use;
  } else if (hashCode == max_tokens_HASH) {
    return StopReason::max_tokens;
  } else if (hashCode == stop_sequence_HASH) {
    return StopReason::stop_sequence;
  } else if (hashCode == guardrail_intervened_HASH) {
    return StopReason::guardrail_intervened;
  } else if (hashCode == content_filtered_HASH) {
    return StopReason::content_filtered;
  } else if (hashCode == malformed_model_output_HASH) {
    return StopReason::malformed_model_output;
  } else if (hashCode == malformed_tool_use_HASH) {
    return StopReason::malformed_tool_use;
  } else if (hashCode == model_context_window_exceeded_HASH) {
    return StopReason::model_context_window_exceeded;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<StopReason>(hashCode);
  }

  return StopReason::NOT_SET;
}

Aws::String GetNameForStopReason(StopReason enumValue) {
  switch (enumValue) {
    case StopReason::NOT_SET:
      return {};
    case StopReason::end_turn:
      return "end_turn";
    case StopReason::tool_use:
      return "tool_use";
    case StopReason::max_tokens:
      return "max_tokens";
    case StopReason::stop_sequence:
      return "stop_sequence";
    case StopReason::guardrail_intervened:
      return "guardrail_intervened";
    case StopReason::content_filtered:
      return "content_filtered";
    case StopReason::malformed_model_output:
      return "malformed_model_output";
    case StopReason::malformed_tool_use:
      return "malformed_tool_use";
    case StopReason::model_context_window_exceeded:
      return "model_context_window_exceeded";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace StopReasonMapper
}  // namespace Model
}  // namespace BedrockRuntime
}  // namespace Aws
