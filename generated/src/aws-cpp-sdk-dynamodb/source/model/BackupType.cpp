/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/BackupType.h>
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
      namespace BackupTypeMapper
      {

        static const int USER_HASH = HashingUtils::HashString("USER");
        static const int SYSTEM_HASH = HashingUtils::HashString("SYSTEM");
        static const int AWS_BACKUP_HASH = HashingUtils::HashString("AWS_BACKUP");


        BackupType GetBackupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_HASH)
          {
            return BackupType::USER;
          }
          else if (hashCode == SYSTEM_HASH)
          {
            return BackupType::SYSTEM;
          }
          else if (hashCode == AWS_BACKUP_HASH)
          {
            return BackupType::AWS_BACKUP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupType>(hashCode);
          }

          return BackupType::NOT_SET;
        }

        Aws::String GetNameForBackupType(BackupType enumValue)
        {
          switch(enumValue)
          {
          case BackupType::USER:
            return "USER";
          case BackupType::SYSTEM:
            return "SYSTEM";
          case BackupType::AWS_BACKUP:
            return "AWS_BACKUP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupTypeMapper
    } // namespace Model
  } // namespace DynamoDB
} // namespace Aws
