/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/SyncStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace KinesisVideo
  {
    namespace Model
    {
      namespace SyncStatusMapper
      {

        static const int SYNCING_HASH = HashingUtils::HashString("SYNCING");
        static const int ACKNOWLEDGED_HASH = HashingUtils::HashString("ACKNOWLEDGED");
        static const int IN_SYNC_HASH = HashingUtils::HashString("IN_SYNC");
        static const int SYNC_FAILED_HASH = HashingUtils::HashString("SYNC_FAILED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        SyncStatus GetSyncStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SYNCING_HASH)
          {
            return SyncStatus::SYNCING;
          }
          else if (hashCode == ACKNOWLEDGED_HASH)
          {
            return SyncStatus::ACKNOWLEDGED;
          }
          else if (hashCode == IN_SYNC_HASH)
          {
            return SyncStatus::IN_SYNC;
          }
          else if (hashCode == SYNC_FAILED_HASH)
          {
            return SyncStatus::SYNC_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return SyncStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return SyncStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncStatus>(hashCode);
          }

          return SyncStatus::NOT_SET;
        }

        Aws::String GetNameForSyncStatus(SyncStatus enumValue)
        {
          switch(enumValue)
          {
          case SyncStatus::SYNCING:
            return "SYNCING";
          case SyncStatus::ACKNOWLEDGED:
            return "ACKNOWLEDGED";
          case SyncStatus::IN_SYNC:
            return "IN_SYNC";
          case SyncStatus::SYNC_FAILED:
            return "SYNC_FAILED";
          case SyncStatus::DELETING:
            return "DELETING";
          case SyncStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncStatusMapper
    } // namespace Model
  } // namespace KinesisVideo
} // namespace Aws
