/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/DataReplicationState.h>
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
      namespace DataReplicationStateMapper
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


        DataReplicationState GetDataReplicationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STOPPED_HASH)
          {
            return DataReplicationState::STOPPED;
          }
          else if (hashCode == INITIATING_HASH)
          {
            return DataReplicationState::INITIATING;
          }
          else if (hashCode == INITIAL_SYNC_HASH)
          {
            return DataReplicationState::INITIAL_SYNC;
          }
          else if (hashCode == BACKLOG_HASH)
          {
            return DataReplicationState::BACKLOG;
          }
          else if (hashCode == CREATING_SNAPSHOT_HASH)
          {
            return DataReplicationState::CREATING_SNAPSHOT;
          }
          else if (hashCode == CONTINUOUS_HASH)
          {
            return DataReplicationState::CONTINUOUS;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return DataReplicationState::PAUSED;
          }
          else if (hashCode == RESCAN_HASH)
          {
            return DataReplicationState::RESCAN;
          }
          else if (hashCode == STALLED_HASH)
          {
            return DataReplicationState::STALLED;
          }
          else if (hashCode == DISCONNECTED_HASH)
          {
            return DataReplicationState::DISCONNECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataReplicationState>(hashCode);
          }

          return DataReplicationState::NOT_SET;
        }

        Aws::String GetNameForDataReplicationState(DataReplicationState enumValue)
        {
          switch(enumValue)
          {
          case DataReplicationState::NOT_SET:
            return {};
          case DataReplicationState::STOPPED:
            return "STOPPED";
          case DataReplicationState::INITIATING:
            return "INITIATING";
          case DataReplicationState::INITIAL_SYNC:
            return "INITIAL_SYNC";
          case DataReplicationState::BACKLOG:
            return "BACKLOG";
          case DataReplicationState::CREATING_SNAPSHOT:
            return "CREATING_SNAPSHOT";
          case DataReplicationState::CONTINUOUS:
            return "CONTINUOUS";
          case DataReplicationState::PAUSED:
            return "PAUSED";
          case DataReplicationState::RESCAN:
            return "RESCAN";
          case DataReplicationState::STALLED:
            return "STALLED";
          case DataReplicationState::DISCONNECTED:
            return "DISCONNECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataReplicationStateMapper
    } // namespace Model
  } // namespace drs
} // namespace Aws
