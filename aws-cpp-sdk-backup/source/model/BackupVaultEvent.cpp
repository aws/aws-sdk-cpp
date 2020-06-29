/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupVaultEvent.h>
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
      namespace BackupVaultEventMapper
      {

        static const int BACKUP_JOB_STARTED_HASH = HashingUtils::HashString("BACKUP_JOB_STARTED");
        static const int BACKUP_JOB_COMPLETED_HASH = HashingUtils::HashString("BACKUP_JOB_COMPLETED");
        static const int BACKUP_JOB_SUCCESSFUL_HASH = HashingUtils::HashString("BACKUP_JOB_SUCCESSFUL");
        static const int BACKUP_JOB_FAILED_HASH = HashingUtils::HashString("BACKUP_JOB_FAILED");
        static const int BACKUP_JOB_EXPIRED_HASH = HashingUtils::HashString("BACKUP_JOB_EXPIRED");
        static const int RESTORE_JOB_STARTED_HASH = HashingUtils::HashString("RESTORE_JOB_STARTED");
        static const int RESTORE_JOB_COMPLETED_HASH = HashingUtils::HashString("RESTORE_JOB_COMPLETED");
        static const int RESTORE_JOB_SUCCESSFUL_HASH = HashingUtils::HashString("RESTORE_JOB_SUCCESSFUL");
        static const int RESTORE_JOB_FAILED_HASH = HashingUtils::HashString("RESTORE_JOB_FAILED");
        static const int COPY_JOB_STARTED_HASH = HashingUtils::HashString("COPY_JOB_STARTED");
        static const int COPY_JOB_SUCCESSFUL_HASH = HashingUtils::HashString("COPY_JOB_SUCCESSFUL");
        static const int COPY_JOB_FAILED_HASH = HashingUtils::HashString("COPY_JOB_FAILED");
        static const int RECOVERY_POINT_MODIFIED_HASH = HashingUtils::HashString("RECOVERY_POINT_MODIFIED");
        static const int BACKUP_PLAN_CREATED_HASH = HashingUtils::HashString("BACKUP_PLAN_CREATED");
        static const int BACKUP_PLAN_MODIFIED_HASH = HashingUtils::HashString("BACKUP_PLAN_MODIFIED");


        BackupVaultEvent GetBackupVaultEventForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BACKUP_JOB_STARTED_HASH)
          {
            return BackupVaultEvent::BACKUP_JOB_STARTED;
          }
          else if (hashCode == BACKUP_JOB_COMPLETED_HASH)
          {
            return BackupVaultEvent::BACKUP_JOB_COMPLETED;
          }
          else if (hashCode == BACKUP_JOB_SUCCESSFUL_HASH)
          {
            return BackupVaultEvent::BACKUP_JOB_SUCCESSFUL;
          }
          else if (hashCode == BACKUP_JOB_FAILED_HASH)
          {
            return BackupVaultEvent::BACKUP_JOB_FAILED;
          }
          else if (hashCode == BACKUP_JOB_EXPIRED_HASH)
          {
            return BackupVaultEvent::BACKUP_JOB_EXPIRED;
          }
          else if (hashCode == RESTORE_JOB_STARTED_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_STARTED;
          }
          else if (hashCode == RESTORE_JOB_COMPLETED_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_COMPLETED;
          }
          else if (hashCode == RESTORE_JOB_SUCCESSFUL_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_SUCCESSFUL;
          }
          else if (hashCode == RESTORE_JOB_FAILED_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_FAILED;
          }
          else if (hashCode == COPY_JOB_STARTED_HASH)
          {
            return BackupVaultEvent::COPY_JOB_STARTED;
          }
          else if (hashCode == COPY_JOB_SUCCESSFUL_HASH)
          {
            return BackupVaultEvent::COPY_JOB_SUCCESSFUL;
          }
          else if (hashCode == COPY_JOB_FAILED_HASH)
          {
            return BackupVaultEvent::COPY_JOB_FAILED;
          }
          else if (hashCode == RECOVERY_POINT_MODIFIED_HASH)
          {
            return BackupVaultEvent::RECOVERY_POINT_MODIFIED;
          }
          else if (hashCode == BACKUP_PLAN_CREATED_HASH)
          {
            return BackupVaultEvent::BACKUP_PLAN_CREATED;
          }
          else if (hashCode == BACKUP_PLAN_MODIFIED_HASH)
          {
            return BackupVaultEvent::BACKUP_PLAN_MODIFIED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupVaultEvent>(hashCode);
          }

          return BackupVaultEvent::NOT_SET;
        }

        Aws::String GetNameForBackupVaultEvent(BackupVaultEvent enumValue)
        {
          switch(enumValue)
          {
          case BackupVaultEvent::BACKUP_JOB_STARTED:
            return "BACKUP_JOB_STARTED";
          case BackupVaultEvent::BACKUP_JOB_COMPLETED:
            return "BACKUP_JOB_COMPLETED";
          case BackupVaultEvent::BACKUP_JOB_SUCCESSFUL:
            return "BACKUP_JOB_SUCCESSFUL";
          case BackupVaultEvent::BACKUP_JOB_FAILED:
            return "BACKUP_JOB_FAILED";
          case BackupVaultEvent::BACKUP_JOB_EXPIRED:
            return "BACKUP_JOB_EXPIRED";
          case BackupVaultEvent::RESTORE_JOB_STARTED:
            return "RESTORE_JOB_STARTED";
          case BackupVaultEvent::RESTORE_JOB_COMPLETED:
            return "RESTORE_JOB_COMPLETED";
          case BackupVaultEvent::RESTORE_JOB_SUCCESSFUL:
            return "RESTORE_JOB_SUCCESSFUL";
          case BackupVaultEvent::RESTORE_JOB_FAILED:
            return "RESTORE_JOB_FAILED";
          case BackupVaultEvent::COPY_JOB_STARTED:
            return "COPY_JOB_STARTED";
          case BackupVaultEvent::COPY_JOB_SUCCESSFUL:
            return "COPY_JOB_SUCCESSFUL";
          case BackupVaultEvent::COPY_JOB_FAILED:
            return "COPY_JOB_FAILED";
          case BackupVaultEvent::RECOVERY_POINT_MODIFIED:
            return "RECOVERY_POINT_MODIFIED";
          case BackupVaultEvent::BACKUP_PLAN_CREATED:
            return "BACKUP_PLAN_CREATED";
          case BackupVaultEvent::BACKUP_PLAN_MODIFIED:
            return "BACKUP_PLAN_MODIFIED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupVaultEventMapper
    } // namespace Model
  } // namespace Backup
} // namespace Aws
