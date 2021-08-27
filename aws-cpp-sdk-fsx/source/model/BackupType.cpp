/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/BackupType.h>
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
      namespace BackupTypeMapper
      {

        static const int AUTOMATIC_HASH = HashingUtils::HashString("AUTOMATIC");
        static const int USER_INITIATED_HASH = HashingUtils::HashString("USER_INITIATED");
        static const int AWS_BACKUP_HASH = HashingUtils::HashString("AWS_BACKUP");


        BackupType GetBackupTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTOMATIC_HASH)
          {
            return BackupType::AUTOMATIC;
          }
          else if (hashCode == USER_INITIATED_HASH)
          {
            return BackupType::USER_INITIATED;
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
          case BackupType::AUTOMATIC:
            return "AUTOMATIC";
          case BackupType::USER_INITIATED:
            return "USER_INITIATED";
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
  } // namespace FSx
} // namespace Aws
