/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/EventErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ivsrealtime
  {
    namespace Model
    {
      namespace EventErrorCodeMapper
      {

        static const int INSUFFICIENT_CAPABILITIES_HASH = HashingUtils::HashString("INSUFFICIENT_CAPABILITIES");
        static const int QUOTA_EXCEEDED_HASH = HashingUtils::HashString("QUOTA_EXCEEDED");
        static const int PUBLISHER_NOT_FOUND_HASH = HashingUtils::HashString("PUBLISHER_NOT_FOUND");
        static const int BITRATE_EXCEEDED_HASH = HashingUtils::HashString("BITRATE_EXCEEDED");
        static const int RESOLUTION_EXCEEDED_HASH = HashingUtils::HashString("RESOLUTION_EXCEEDED");
        static const int STREAM_DURATION_EXCEEDED_HASH = HashingUtils::HashString("STREAM_DURATION_EXCEEDED");
        static const int INVALID_AUDIO_CODEC_HASH = HashingUtils::HashString("INVALID_AUDIO_CODEC");
        static const int INVALID_VIDEO_CODEC_HASH = HashingUtils::HashString("INVALID_VIDEO_CODEC");
        static const int INVALID_PROTOCOL_HASH = HashingUtils::HashString("INVALID_PROTOCOL");
        static const int INVALID_STREAM_KEY_HASH = HashingUtils::HashString("INVALID_STREAM_KEY");
        static const int REUSE_OF_STREAM_KEY_HASH = HashingUtils::HashString("REUSE_OF_STREAM_KEY");
        static const int B_FRAME_PRESENT_HASH = HashingUtils::HashString("B_FRAME_PRESENT");
        static const int INVALID_INPUT_HASH = HashingUtils::HashString("INVALID_INPUT");
        static const int INTERNAL_SERVER_EXCEPTION_HASH = HashingUtils::HashString("INTERNAL_SERVER_EXCEPTION");


        EventErrorCode GetEventErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INSUFFICIENT_CAPABILITIES_HASH)
          {
            return EventErrorCode::INSUFFICIENT_CAPABILITIES;
          }
          else if (hashCode == QUOTA_EXCEEDED_HASH)
          {
            return EventErrorCode::QUOTA_EXCEEDED;
          }
          else if (hashCode == PUBLISHER_NOT_FOUND_HASH)
          {
            return EventErrorCode::PUBLISHER_NOT_FOUND;
          }
          else if (hashCode == BITRATE_EXCEEDED_HASH)
          {
            return EventErrorCode::BITRATE_EXCEEDED;
          }
          else if (hashCode == RESOLUTION_EXCEEDED_HASH)
          {
            return EventErrorCode::RESOLUTION_EXCEEDED;
          }
          else if (hashCode == STREAM_DURATION_EXCEEDED_HASH)
          {
            return EventErrorCode::STREAM_DURATION_EXCEEDED;
          }
          else if (hashCode == INVALID_AUDIO_CODEC_HASH)
          {
            return EventErrorCode::INVALID_AUDIO_CODEC;
          }
          else if (hashCode == INVALID_VIDEO_CODEC_HASH)
          {
            return EventErrorCode::INVALID_VIDEO_CODEC;
          }
          else if (hashCode == INVALID_PROTOCOL_HASH)
          {
            return EventErrorCode::INVALID_PROTOCOL;
          }
          else if (hashCode == INVALID_STREAM_KEY_HASH)
          {
            return EventErrorCode::INVALID_STREAM_KEY;
          }
          else if (hashCode == REUSE_OF_STREAM_KEY_HASH)
          {
            return EventErrorCode::REUSE_OF_STREAM_KEY;
          }
          else if (hashCode == B_FRAME_PRESENT_HASH)
          {
            return EventErrorCode::B_FRAME_PRESENT;
          }
          else if (hashCode == INVALID_INPUT_HASH)
          {
            return EventErrorCode::INVALID_INPUT;
          }
          else if (hashCode == INTERNAL_SERVER_EXCEPTION_HASH)
          {
            return EventErrorCode::INTERNAL_SERVER_EXCEPTION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EventErrorCode>(hashCode);
          }

          return EventErrorCode::NOT_SET;
        }

        Aws::String GetNameForEventErrorCode(EventErrorCode enumValue)
        {
          switch(enumValue)
          {
          case EventErrorCode::NOT_SET:
            return {};
          case EventErrorCode::INSUFFICIENT_CAPABILITIES:
            return "INSUFFICIENT_CAPABILITIES";
          case EventErrorCode::QUOTA_EXCEEDED:
            return "QUOTA_EXCEEDED";
          case EventErrorCode::PUBLISHER_NOT_FOUND:
            return "PUBLISHER_NOT_FOUND";
          case EventErrorCode::BITRATE_EXCEEDED:
            return "BITRATE_EXCEEDED";
          case EventErrorCode::RESOLUTION_EXCEEDED:
            return "RESOLUTION_EXCEEDED";
          case EventErrorCode::STREAM_DURATION_EXCEEDED:
            return "STREAM_DURATION_EXCEEDED";
          case EventErrorCode::INVALID_AUDIO_CODEC:
            return "INVALID_AUDIO_CODEC";
          case EventErrorCode::INVALID_VIDEO_CODEC:
            return "INVALID_VIDEO_CODEC";
          case EventErrorCode::INVALID_PROTOCOL:
            return "INVALID_PROTOCOL";
          case EventErrorCode::INVALID_STREAM_KEY:
            return "INVALID_STREAM_KEY";
          case EventErrorCode::REUSE_OF_STREAM_KEY:
            return "REUSE_OF_STREAM_KEY";
          case EventErrorCode::B_FRAME_PRESENT:
            return "B_FRAME_PRESENT";
          case EventErrorCode::INVALID_INPUT:
            return "INVALID_INPUT";
          case EventErrorCode::INTERNAL_SERVER_EXCEPTION:
            return "INTERNAL_SERVER_EXCEPTION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EventErrorCodeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
