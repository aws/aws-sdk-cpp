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

        static constexpr uint32_t AUTOMATIC_HASH = ConstExprHashingUtils::HashString("AUTOMATIC");
        static constexpr uint32_t USER_INITIATED_HASH = ConstExprHashingUtils::HashString("USER_INITIATED");
        static constexpr uint32_t AWS_BACKUP_HASH = ConstExprHashingUtils::HashString("AWS_BACKUP");


        BackupType GetBackupTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case BackupType::NOT_SET:
            return {};
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
