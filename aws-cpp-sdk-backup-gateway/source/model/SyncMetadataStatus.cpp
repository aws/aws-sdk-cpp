/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup-gateway/model/SyncMetadataStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BackupGateway
  {
    namespace Model
    {
      namespace SyncMetadataStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIALLY_FAILED_HASH = HashingUtils::HashString("PARTIALLY_FAILED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");


        SyncMetadataStatus GetSyncMetadataStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return SyncMetadataStatus::CREATED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return SyncMetadataStatus::RUNNING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return SyncMetadataStatus::FAILED;
          }
          else if (hashCode == PARTIALLY_FAILED_HASH)
          {
            return SyncMetadataStatus::PARTIALLY_FAILED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return SyncMetadataStatus::SUCCEEDED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SyncMetadataStatus>(hashCode);
          }

          return SyncMetadataStatus::NOT_SET;
        }

        Aws::String GetNameForSyncMetadataStatus(SyncMetadataStatus enumValue)
        {
          switch(enumValue)
          {
          case SyncMetadataStatus::CREATED:
            return "CREATED";
          case SyncMetadataStatus::RUNNING:
            return "RUNNING";
          case SyncMetadataStatus::FAILED:
            return "FAILED";
          case SyncMetadataStatus::PARTIALLY_FAILED:
            return "PARTIALLY_FAILED";
          case SyncMetadataStatus::SUCCEEDED:
            return "SUCCEEDED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SyncMetadataStatusMapper
    } // namespace Model
  } // namespace BackupGateway
} // namespace Aws
