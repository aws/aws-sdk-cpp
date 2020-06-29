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

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        BackupLifecycle GetBackupLifecycleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return BackupLifecycle::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return BackupLifecycle::CREATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BackupLifecycle::DELETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return BackupLifecycle::FAILED;
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
          case BackupLifecycle::AVAILABLE:
            return "AVAILABLE";
          case BackupLifecycle::CREATING:
            return "CREATING";
          case BackupLifecycle::DELETED:
            return "DELETED";
          case BackupLifecycle::FAILED:
            return "FAILED";
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
