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

        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t INITIATING_HASH = ConstExprHashingUtils::HashString("INITIATING");
        static constexpr uint32_t INITIAL_SYNC_HASH = ConstExprHashingUtils::HashString("INITIAL_SYNC");
        static constexpr uint32_t BACKLOG_HASH = ConstExprHashingUtils::HashString("BACKLOG");
        static constexpr uint32_t CREATING_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("CREATING_SNAPSHOT");
        static constexpr uint32_t CONTINUOUS_HASH = ConstExprHashingUtils::HashString("CONTINUOUS");
        static constexpr uint32_t PAUSED_HASH = ConstExprHashingUtils::HashString("PAUSED");
        static constexpr uint32_t RESCAN_HASH = ConstExprHashingUtils::HashString("RESCAN");
        static constexpr uint32_t STALLED_HASH = ConstExprHashingUtils::HashString("STALLED");
        static constexpr uint32_t DISCONNECTED_HASH = ConstExprHashingUtils::HashString("DISCONNECTED");
        static constexpr uint32_t REPLICATION_STATE_NOT_AVAILABLE_HASH = ConstExprHashingUtils::HashString("REPLICATION_STATE_NOT_AVAILABLE");
        static constexpr uint32_t NOT_STARTED_HASH = ConstExprHashingUtils::HashString("NOT_STARTED");


        RecoveryInstanceDataReplicationState GetRecoveryInstanceDataReplicationStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RecoveryInstanceDataReplicationState::NOT_SET:
            return {};
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
