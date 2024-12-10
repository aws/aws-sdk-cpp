/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantRecordingMediaType.h>
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
      namespace ParticipantRecordingMediaTypeMapper
      {

        static const int AUDIO_VIDEO_HASH = HashingUtils::HashString("AUDIO_VIDEO");
        static const int AUDIO_ONLY_HASH = HashingUtils::HashString("AUDIO_ONLY");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        ParticipantRecordingMediaType GetParticipantRecordingMediaTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUDIO_VIDEO_HASH)
          {
            return ParticipantRecordingMediaType::AUDIO_VIDEO;
          }
          else if (hashCode == AUDIO_ONLY_HASH)
          {
            return ParticipantRecordingMediaType::AUDIO_ONLY;
          }
          else if (hashCode == NONE_HASH)
          {
            return ParticipantRecordingMediaType::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRecordingMediaType>(hashCode);
          }

          return ParticipantRecordingMediaType::NOT_SET;
        }

        Aws::String GetNameForParticipantRecordingMediaType(ParticipantRecordingMediaType enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRecordingMediaType::NOT_SET:
            return {};
          case ParticipantRecordingMediaType::AUDIO_VIDEO:
            return "AUDIO_VIDEO";
          case ParticipantRecordingMediaType::AUDIO_ONLY:
            return "AUDIO_ONLY";
          case ParticipantRecordingMediaType::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRecordingMediaTypeMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
