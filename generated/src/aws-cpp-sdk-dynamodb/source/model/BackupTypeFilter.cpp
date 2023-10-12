/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BackupTypeFilter.h>
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
      namespace BackupTypeFilterMapper
      {

        static constexpr uint32_t USER_HASH = ConstExprHashingUtils::HashString("USER");
        static constexpr uint32_t SYSTEM_HASH = ConstExprHashingUtils::HashString("SYSTEM");
        static constexpr uint32_t AWS_BACKUP_HASH = ConstExprHashingUtils::HashString("AWS_BACKUP");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        BackupTypeFilter GetBackupTypeFilterForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return BackupTypeFilter::USER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return BackupTypeFilter::SYSTEM;
          }
          else if (hashCode == AWS_BACKUP_HASH)
          {
            return BackupTypeFilter::AWS_BACKUP;
          }
          else if (hashCode == ALL_HASH)
          {
            return BackupTypeFilter::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupTypeFilter>(hashCode);
          }

          return BackupTypeFilter::NOT_SET;
        }

        Aws::String GetNameForBackupTypeFilter(BackupTypeFilter enumValue)
        {
          switch(enumValue)
          {
          case BackupTypeFilter::NOT_SET:
            return {};
          case BackupTypeFilter::USER:
            return "USER";
          case BackupTypeFilter::SYSTEM:
            return "SYSTEM";
          case BackupTypeFilter::AWS_BACKUP:
            return "AWS_BACKUP";
          case BackupTypeFilter::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupTypeFilterMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
