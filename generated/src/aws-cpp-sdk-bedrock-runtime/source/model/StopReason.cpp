/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/StopReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockRuntime
  {
    namespace Model
    {
      namespace StopReasonMapper
      {

        static const int end_turn_HASH = HashingUtils::HashString("end_turn");
        static const int tool_use_HASH = HashingUtils::HashString("tool_use");
        static const int max_tokens_HASH = HashingUtils::HashString("max_tokens");
        static const int stop_sequence_HASH = HashingUtils::HashString("stop_sequence");
        static const int guardrail_intervened_HASH = HashingUtils::HashString("guardrail_intervened");
        static const int content_filtered_HASH = HashingUtils::HashString("content_filtered");


        StopReason GetStopReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == end_turn_HASH)
          {
            return StopReason::end_turn;
          }
          else if (hashCode == tool_use_HASH)
          {
            return StopReason::tool_use;
          }
          else if (hashCode == max_tokens_HASH)
          {
            return StopReason::max_tokens;
          }
          else if (hashCode == stop_sequence_HASH)
          {
            return StopReason::stop_sequence;
          }
          else if (hashCode == guardrail_intervened_HASH)
          {
            return StopReason::guardrail_intervened;
          }
          else if (hashCode == content_filtered_HASH)
          {
            return StopReason::content_filtered;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StopReason>(hashCode);
          }

          return StopReason::NOT_SET;
        }

        Aws::String GetNameForStopReason(StopReason enumValue)
        {
          switch(enumValue)
          {
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
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StopReasonMapper
    } // namespace Model
  } // namespace BedrockRuntime
} // namespace Aws
