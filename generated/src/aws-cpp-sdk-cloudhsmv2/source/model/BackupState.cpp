/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/BackupState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudHSMV2
  {
    namespace Model
    {
      namespace BackupStateMapper
      {

        static const int CREATE_IN_PROGRESS_HASH = HashingUtils::HashString("CREATE_IN_PROGRESS");
        static const int READY_HASH = HashingUtils::HashString("READY");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int PENDING_DELETION_HASH = HashingUtils::HashString("PENDING_DELETION");


        BackupState GetBackupStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATE_IN_PROGRESS_HASH)
          {
            return BackupState::CREATE_IN_PROGRESS;
          }
          else if (hashCode == READY_HASH)
          {
            return BackupState::READY;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BackupState::DELETED;
          }
          else if (hashCode == PENDING_DELETION_HASH)
          {
            return BackupState::PENDING_DELETION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupState>(hashCode);
          }

          return BackupState::NOT_SET;
        }

        Aws::String GetNameForBackupState(BackupState enumValue)
        {
          switch(enumValue)
          {
          case BackupState::CREATE_IN_PROGRESS:
            return "CREATE_IN_PROGRESS";
          case BackupState::READY:
            return "READY";
          case BackupState::DELETED:
            return "DELETED";
          case BackupState::PENDING_DELETION:
            return "PENDING_DELETION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupStateMapper
    } // namespace Model
  } // namespace CloudHSMV2
} // namespace Aws
