/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BackupStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DynamoDB
  {
    namespace Model
    {
      namespace BackupStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");


        BackupStatus GetBackupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return BackupStatus::CREATING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return BackupStatus::DELETED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return BackupStatus::AVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupStatus>(hashCode);
          }

          return BackupStatus::NOT_SET;
        }

        Aws::String GetNameForBackupStatus(BackupStatus enumValue)
        {
          switch(enumValue)
          {
          case BackupStatus::CREATING:
            return "CREATING";
          case BackupStatus::DELETED:
            return "DELETED";
          case BackupStatus::AVAILABLE:
            return "AVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupStatusMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
