/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/BackupRetentionType.h>
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
      namespace BackupRetentionTypeMapper
      {

        static const int DAYS_HASH = HashingUtils::HashString("DAYS");


        BackupRetentionType GetBackupRetentionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DAYS_HASH)
          {
            return BackupRetentionType::DAYS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BackupRetentionType>(hashCode);
          }

          return BackupRetentionType::NOT_SET;
        }

        Aws::String GetNameForBackupRetentionType(BackupRetentionType enumValue)
        {
          switch(enumValue)
          {
          case BackupRetentionType::DAYS:
            return "DAYS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BackupRetentionTypeMapper
    } // namespace Model
  } // namespace CloudHSMV2
} // namespace Aws
