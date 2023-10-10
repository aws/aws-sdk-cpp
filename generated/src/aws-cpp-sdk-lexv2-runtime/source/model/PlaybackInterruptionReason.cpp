/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-runtime/model/PlaybackInterruptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexRuntimeV2
  {
    namespace Model
    {
      namespace PlaybackInterruptionReasonMapper
      {

        static const int DTMF_START_DETECTED_HASH = HashingUtils::HashString("DTMF_START_DETECTED");
        static const int TEXT_DETECTED_HASH = HashingUtils::HashString("TEXT_DETECTED");
        static const int VOICE_START_DETECTED_HASH = HashingUtils::HashString("VOICE_START_DETECTED");


        PlaybackInterruptionReason GetPlaybackInterruptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DTMF_START_DETECTED_HASH)
          {
            return PlaybackInterruptionReason::DTMF_START_DETECTED;
          }
          else if (hashCode == TEXT_DETECTED_HASH)
          {
            return PlaybackInterruptionReason::TEXT_DETECTED;
          }
          else if (hashCode == VOICE_START_DETECTED_HASH)
          {
            return PlaybackInterruptionReason::VOICE_START_DETECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlaybackInterruptionReason>(hashCode);
          }

          return PlaybackInterruptionReason::NOT_SET;
        }

        Aws::String GetNameForPlaybackInterruptionReason(PlaybackInterruptionReason enumValue)
        {
          switch(enumValue)
          {
          case PlaybackInterruptionReason::NOT_SET:
            return {};
          case PlaybackInterruptionReason::DTMF_START_DETECTED:
            return "DTMF_START_DETECTED";
          case PlaybackInterruptionReason::TEXT_DETECTED:
            return "TEXT_DETECTED";
          case PlaybackInterruptionReason::VOICE_START_DETECTED:
            return "VOICE_START_DETECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlaybackInterruptionReasonMapper
    } // namespace Model
  } // namespace LexRuntimeV2
} // namespace Aws
