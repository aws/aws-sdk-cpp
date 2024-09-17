/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/IcebergS3BackupMode.h>
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
      namespace IcebergS3BackupModeMapper
      {

        static const int FailedDataOnly_HASH = HashingUtils::HashString("FailedDataOnly");
        static const int AllData_HASH = HashingUtils::HashString("AllData");


        IcebergS3BackupMode GetIcebergS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDataOnly_HASH)
          {
            return IcebergS3BackupMode::FailedDataOnly;
          }
          else if (hashCode == AllData_HASH)
          {
            return IcebergS3BackupMode::AllData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IcebergS3BackupMode>(hashCode);
          }

          return IcebergS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForIcebergS3BackupMode(IcebergS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case IcebergS3BackupMode::NOT_SET:
            return {};
          case IcebergS3BackupMode::FailedDataOnly:
            return "FailedDataOnly";
          case IcebergS3BackupMode::AllData:
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

      } // namespace IcebergS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
