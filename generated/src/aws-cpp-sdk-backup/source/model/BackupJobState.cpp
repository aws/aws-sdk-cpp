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

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t ABORTING_HASH = ConstExprHashingUtils::HashString("ABORTING");
        static constexpr uint32_t ABORTED_HASH = ConstExprHashingUtils::HashString("ABORTED");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t EXPIRED_HASH = ConstExprHashingUtils::HashString("EXPIRED");
        static constexpr uint32_t PARTIAL_HASH = ConstExprHashingUtils::HashString("PARTIAL");


        BackupJobState GetBackupJobStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BackupJobState::NOT_SET:
            return {};
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
