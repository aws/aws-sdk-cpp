/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace drs
  {
    namespace Model
    {
      namespace RecoveryInstanceDataReplicationStateMapper
      {

        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int INITIATING_HASH = HashingUtils::HashString("INITIATING");
        static const int INITIAL_SYNC_HASH = HashingUtils::HashString("INITIAL_SYNC");
        static const int BACKLOG_HASH = HashingUtils::HashString("BACKLOG");
        static const int CREATING_SNAPSHOT_HASH = HashingUtils::HashString("CREATING_SNAPSHOT");
        static const int CONTINUOUS_HASH = HashingUtils::HashString("CONTINUOUS");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int RESCAN_HASH = HashingUtils::HashString("RESCAN");
        static const int STALLED_HASH = HashingUtils::HashString("STALLED");
        static const int DISCONNECTED_HASH = HashingUtils::HashString("DISCONNECTED");
        static const int REPLICATION_STATE_NOT_AVAILABLE_HASH = HashingUtils::HashString("REPLICATION_STATE_NOT_AVAILABLE");
        static const int NOT_STARTED_HASH = HashingUtils::HashString("NOT_STARTED");


        RecoveryInstanceDataReplicationState GetRecoveryInstanceDataReplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return RecoveryInstanceDataReplicationState::STOPPED;
          }
          else if (hashCode == INITIATING_HASH)
          {
            return RecoveryInstanceDataReplicationState::INITIATING;
          }
          else if (hashCode == INITIAL_SYNC_HASH)
          {
            return RecoveryInstanceDataReplicationState::INITIAL_SYNC;
          }
          else if (hashCode == BACKLOG_HASH)
          {
            return RecoveryInstanceDataReplicationState::BACKLOG;
          }
          else if (hashCode == CREATING_SNAPSHOT_HASH)
          {
            return RecoveryInstanceDataReplicationState::CREATING_SNAPSHOT;
          }
          else if (hashCode == CONTINUOUS_HASH)
          {
            return RecoveryInstanceDataReplicationState::CONTINUOUS;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return RecoveryInstanceDataReplicationState::PAUSED;
          }
          else if (hashCode == RESCAN_HASH)
          {
            return RecoveryInstanceDataReplicationState::RESCAN;
          }
          else if (hashCode == STALLED_HASH)
          {
            return RecoveryInstanceDataReplicationState::STALLED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return RecoveryInstanceDataReplicationState::DISCONNECTED;
          }
          else if (hashCode == REPLICATION_STATE_NOT_AVAILABLE_HASH)
          {
            return RecoveryInstanceDataReplicationState::REPLICATION_STATE_NOT_AVAILABLE;
          }
          else if (hashCode == NOT_STARTED_HASH)
          {
            return RecoveryInstanceDataReplicationState::NOT_STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RecoveryInstanceDataReplicationState>(hashCode);
          }

          return RecoveryInstanceDataReplicationState::NOT_SET;
        }

        Aws::String GetNameForRecoveryInstanceDataReplicationState(RecoveryInstanceDataReplicationState enumValue)
        {
          switch(enumValue)
          {
          case RecoveryInstanceDataReplicationState::STOPPED:
            return "STOPPED";
          case RecoveryInstanceDataReplicationState::INITIATING:
            return "INITIATING";
          case RecoveryInstanceDataReplicationState::INITIAL_SYNC:
            return "INITIAL_SYNC";
          case RecoveryInstanceDataReplicationState::BACKLOG:
            return "BACKLOG";
          case RecoveryInstanceDataReplicationState::CREATING_SNAPSHOT:
            return "CREATING_SNAPSHOT";
          case RecoveryInstanceDataReplicationState::CONTINUOUS:
            return "CONTINUOUS";
          case RecoveryInstanceDataReplicationState::PAUSED:
            return "PAUSED";
          case RecoveryInstanceDataReplicationState::RESCAN:
            return "RESCAN";
          case RecoveryInstanceDataReplicationState::STALLED:
            return "STALLED";
          case RecoveryInstanceDataReplicationState::DISCONNECTED:
            return "DISCONNECTED";
          case RecoveryInstanceDataReplicationState::REPLICATION_STATE_NOT_AVAILABLE:
            return "REPLICATION_STATE_NOT_AVAILABLE";
          case RecoveryInstanceDataReplicationState::NOT_STARTED:
            return "NOT_STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RecoveryInstanceDataReplicationStateMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
