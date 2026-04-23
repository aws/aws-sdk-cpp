/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
        static const int RESTORE_JOB_STARTED_HASH = HashingUtils::HashString("RESTORE_JOB_STARTED");
        static const int RESTORE_JOB_COMPLETED_HASH = HashingUtils::HashString("RESTORE_JOB_COMPLETED");
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
          else if (hashCode == RESTORE_JOB_STARTED_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_STARTED;
          }
          else if (hashCode == RESTORE_JOB_COMPLETED_HASH)
          {
            return BackupVaultEvent::RESTORE_JOB_COMPLETED;
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
          case BackupVaultEvent::RESTORE_JOB_STARTED:
            return "RESTORE_JOB_STARTED";
          case BackupVaultEvent::RESTORE_JOB_COMPLETED:
            return "RESTORE_JOB_COMPLETED";
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
