/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/BackupLifecycle.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FSx
  {
    namespace Model
    {
      namespace BackupLifecycleMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t TRANSFERRING_HASH = ConstExprHashingUtils::HashString("TRANSFERRING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t COPYING_HASH = ConstExprHashingUtils::HashString("COPYING");


        BackupLifecycle GetBackupLifecycleForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return BackupLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return BackupLifecycle::CREATING;
          }
          else if (hashCode == TRANSFERRING_HASH)
          {
            return BackupLifecycle::TRANSFERRING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BackupLifecycle::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupLifecycle::FAILED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return BackupLifecycle::PENDING;
          }
          else if (hashCode == COPYING_HASH)
          {
            return BackupLifecycle::COPYING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupLifecycle>(hashCode);
          }

          return BackupLifecycle::NOT_SET;
        }

        Aws::String GetNameForBackupLifecycle(BackupLifecycle enumValue)
        {
          switch(enumValue)
          {
          case BackupLifecycle::NOT_SET:
            return {};
          case BackupLifecycle::AVAILABLE:
            return "AVAILABLE";
          case BackupLifecycle::CREATING:
            return "CREATING";
          case BackupLifecycle::TRANSFERRING:
            return "TRANSFERRING";
          case BackupLifecycle::DELETED:
            return "DELETED";
          case BackupLifecycle::FAILED:
            return "FAILED";
          case BackupLifecycle::PENDING:
            return "PENDING";
          case BackupLifecycle::COPYING:
            return "COPYING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupLifecycleMapper
    } // namespace Model
  } // namespace FSx
} // namespace Aws
