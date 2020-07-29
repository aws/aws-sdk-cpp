/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/HttpEndpointS3BackupMode.h>
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
      namespace HttpEndpointS3BackupModeMapper
      {

        static const int FailedDataOnly_HASH = HashingUtils::HashString("FailedDataOnly");
        static const int AllData_HASH = HashingUtils::HashString("AllData");


        HttpEndpointS3BackupMode GetHttpEndpointS3BackupModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FailedDataOnly_HASH)
          {
            return HttpEndpointS3BackupMode::FailedDataOnly;
          }
          else if (hashCode == AllData_HASH)
          {
            return HttpEndpointS3BackupMode::AllData;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HttpEndpointS3BackupMode>(hashCode);
          }

          return HttpEndpointS3BackupMode::NOT_SET;
        }

        Aws::String GetNameForHttpEndpointS3BackupMode(HttpEndpointS3BackupMode enumValue)
        {
          switch(enumValue)
          {
          case HttpEndpointS3BackupMode::FailedDataOnly:
            return "FailedDataOnly";
          case HttpEndpointS3BackupMode::AllData:
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

      } // namespace HttpEndpointS3BackupModeMapper
    } // namespace Model
  } // namespace Firehose
} // namespace Aws
