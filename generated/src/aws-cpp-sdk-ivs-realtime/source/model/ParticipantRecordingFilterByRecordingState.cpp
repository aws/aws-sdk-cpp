/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantRecordingFilterByRecordingState.h>
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
      namespace ParticipantRecordingFilterByRecordingStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ParticipantRecordingFilterByRecordingState GetParticipantRecordingFilterByRecordingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return ParticipantRecordingFilterByRecordingState::STARTING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ParticipantRecordingFilterByRecordingState::ACTIVE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ParticipantRecordingFilterByRecordingState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ParticipantRecordingFilterByRecordingState::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ParticipantRecordingFilterByRecordingState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRecordingFilterByRecordingState>(hashCode);
          }

          return ParticipantRecordingFilterByRecordingState::NOT_SET;
        }

        Aws::String GetNameForParticipantRecordingFilterByRecordingState(ParticipantRecordingFilterByRecordingState enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRecordingFilterByRecordingState::NOT_SET:
            return {};
          case ParticipantRecordingFilterByRecordingState::STARTING:
            return "STARTING";
          case ParticipantRecordingFilterByRecordingState::ACTIVE:
            return "ACTIVE";
          case ParticipantRecordingFilterByRecordingState::STOPPING:
            return "STOPPING";
          case ParticipantRecordingFilterByRecordingState::STOPPED:
            return "STOPPED";
          case ParticipantRecordingFilterByRecordingState::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRecordingFilterByRecordingStateMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
