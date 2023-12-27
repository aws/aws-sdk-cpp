/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Backup
  {
    namespace Model
    {
      namespace BackupJobStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int ABORTING_HASH = HashingUtils::HashString("ABORTING");
        static const int ABORTED_HASH = HashingUtils::HashString("ABORTED");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int PARTIAL_HASH = HashingUtils::HashString("PARTIAL");
        static const int AGGREGATE_ALL_HASH = HashingUtils::HashString("AGGREGATE_ALL");
        static const int ANY_HASH = HashingUtils::HashString("ANY");


        BackupJobStatus GetBackupJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return BackupJobStatus::CREATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return BackupJobStatus::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return BackupJobStatus::RUNNING;
          }
          else if (hashCode == ABORTING_HASH)
          {
            return BackupJobStatus::ABORTING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return BackupJobStatus::ABORTED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return BackupJobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupJobStatus::FAILED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return BackupJobStatus::EXPIRED;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return BackupJobStatus::PARTIAL;
          }
          else if (hashCode == AGGREGATE_ALL_HASH)
          {
            return BackupJobStatus::AGGREGATE_ALL;
          }
          else if (hashCode == ANY_HASH)
          {
            return BackupJobStatus::ANY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupJobStatus>(hashCode);
          }

          return BackupJobStatus::NOT_SET;
        }

        Aws::String GetNameForBackupJobStatus(BackupJobStatus enumValue)
        {
          switch(enumValue)
          {
          case BackupJobStatus::NOT_SET:
            return {};
          case BackupJobStatus::CREATED:
            return "CREATED";
          case BackupJobStatus::PENDING:
            return "PENDING";
          case BackupJobStatus::RUNNING:
            return "RUNNING";
          case BackupJobStatus::ABORTING:
            return "ABORTING";
          case BackupJobStatus::ABORTED:
            return "ABORTED";
          case BackupJobStatus::COMPLETED:
            return "COMPLETED";
          case BackupJobStatus::FAILED:
            return "FAILED";
          case BackupJobStatus::EXPIRED:
            return "EXPIRED";
          case BackupJobStatus::PARTIAL:
            return "PARTIAL";
          case BackupJobStatus::AGGREGATE_ALL:
            return "AGGREGATE_ALL";
          case BackupJobStatus::ANY:
            return "ANY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupJobStatusMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
