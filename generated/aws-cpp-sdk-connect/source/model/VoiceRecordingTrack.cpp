/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoiceRecordingTrack.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace VoiceRecordingTrackMapper
      {

        static const int FROM_AGENT_HASH = HashingUtils::HashString("FROM_AGENT");
        static const int TO_AGENT_HASH = HashingUtils::HashString("TO_AGENT");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        VoiceRecordingTrack GetVoiceRecordingTrackForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FROM_AGENT_HASH)
          {
            return VoiceRecordingTrack::FROM_AGENT;
          }
          else if (hashCode == TO_AGENT_HASH)
          {
            return VoiceRecordingTrack::TO_AGENT;
          }
          else if (hashCode == ALL_HASH)
          {
            return VoiceRecordingTrack::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VoiceRecordingTrack>(hashCode);
          }

          return VoiceRecordingTrack::NOT_SET;
        }

        Aws::String GetNameForVoiceRecordingTrack(VoiceRecordingTrack enumValue)
        {
          switch(enumValue)
          {
          case VoiceRecordingTrack::FROM_AGENT:
            return "FROM_AGENT";
          case VoiceRecordingTrack::TO_AGENT:
            return "TO_AGENT";
          case VoiceRecordingTrack::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VoiceRecordingTrackMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
