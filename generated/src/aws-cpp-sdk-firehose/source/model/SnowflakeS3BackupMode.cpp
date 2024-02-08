/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SnowflakeS3BackupMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Firehose
  {
    namespace Model
    {
      namespace SnowflakeS3BackupModeMapper
      {

        static const int FailedDataOnly_HASH = HashingUtils::HashString("FailedDataOnly");
        static const int AllData_HASH = HashingUtils::HashString("AllData");


        SnowflakeS3BackupMode GetSnowflakeS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDataOnly_HASH)
          {
            return SnowflakeS3BackupMode::FailedDataOnly;
          }
          else if (hashCode == AllData_HASH)
          {
            return SnowflakeS3BackupMode::AllData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowflakeS3BackupMode>(hashCode);
          }

          return SnowflakeS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForSnowflakeS3BackupMode(SnowflakeS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case SnowflakeS3BackupMode::NOT_SET:
            return {};
          case SnowflakeS3BackupMode::FailedDataOnly:
            return "FailedDataOnly";
          case SnowflakeS3BackupMode::AllData:
            return "AllData";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowflakeS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
