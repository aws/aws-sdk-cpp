/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupJobState.h>
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
      namespace BackupJobStateMapper
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


        BackupJobState GetBackupJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return BackupJobState::CREATED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return BackupJobState::PENDING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return BackupJobState::RUNNING;
          }
          else if (hashCode == ABORTING_HASH)
          {
            return BackupJobState::ABORTING;
          }
          else if (hashCode == ABORTED_HASH)
          {
            return BackupJobState::ABORTED;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return BackupJobState::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupJobState::FAILED;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return BackupJobState::EXPIRED;
          }
          else if (hashCode == PARTIAL_HASH)
          {
            return BackupJobState::PARTIAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupJobState>(hashCode);
          }

          return BackupJobState::NOT_SET;
        }

        Aws::String GetNameForBackupJobState(BackupJobState enumValue)
        {
          switch(enumValue)
          {
          case BackupJobState::CREATED:
            return "CREATED";
          case BackupJobState::PENDING:
            return "PENDING";
          case BackupJobState::RUNNING:
            return "RUNNING";
          case BackupJobState::ABORTING:
            return "ABORTING";
          case BackupJobState::ABORTED:
            return "ABORTED";
          case BackupJobState::COMPLETED:
            return "COMPLETED";
          case BackupJobState::FAILED:
            return "FAILED";
          case BackupJobState::EXPIRED:
            return "EXPIRED";
          case BackupJobState::PARTIAL:
            return "PARTIAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupJobStateMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
