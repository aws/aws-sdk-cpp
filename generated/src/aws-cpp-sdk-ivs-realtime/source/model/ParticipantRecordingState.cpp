/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/ParticipantRecordingState.h>
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
      namespace ParticipantRecordingStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ParticipantRecordingState GetParticipantRecordingStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return ParticipantRecordingState::STARTING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ParticipantRecordingState::ACTIVE;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return ParticipantRecordingState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ParticipantRecordingState::STOPPED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ParticipantRecordingState::FAILED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ParticipantRecordingState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ParticipantRecordingState>(hashCode);
          }

          return ParticipantRecordingState::NOT_SET;
        }

        Aws::String GetNameForParticipantRecordingState(ParticipantRecordingState enumValue)
        {
          switch(enumValue)
          {
          case ParticipantRecordingState::NOT_SET:
            return {};
          case ParticipantRecordingState::STARTING:
            return "STARTING";
          case ParticipantRecordingState::ACTIVE:
            return "ACTIVE";
          case ParticipantRecordingState::STOPPING:
            return "STOPPING";
          case ParticipantRecordingState::STOPPED:
            return "STOPPED";
          case ParticipantRecordingState::FAILED:
            return "FAILED";
          case ParticipantRecordingState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ParticipantRecordingStateMapper
    } // namespace Model
  } // namespace ivsrealtime
} // namespace Aws
