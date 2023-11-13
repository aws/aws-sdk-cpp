/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cur/model/LastStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostandUsageReportService
  {
    namespace Model
    {
      namespace LastStatusMapper
      {

        static const int SUCCESS_HASH = HashingUtils::HashString("SUCCESS");
        static const int ERROR_PERMISSIONS_HASH = HashingUtils::HashString("ERROR_PERMISSIONS");
        static const int ERROR_NO_BUCKET_HASH = HashingUtils::HashString("ERROR_NO_BUCKET");


        LastStatus GetLastStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCESS_HASH)
          {
            return LastStatus::SUCCESS;
          }
          else if (hashCode == ERROR_PERMISSIONS_HASH)
          {
            return LastStatus::ERROR_PERMISSIONS;
          }
          else if (hashCode == ERROR_NO_BUCKET_HASH)
          {
            return LastStatus::ERROR_NO_BUCKET;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LastStatus>(hashCode);
          }

          return LastStatus::NOT_SET;
        }

        Aws::String GetNameForLastStatus(LastStatus enumValue)
        {
          switch(enumValue)
          {
          case LastStatus::NOT_SET:
            return {};
          case LastStatus::SUCCESS:
            return "SUCCESS";
          case LastStatus::ERROR_PERMISSIONS:
            return "ERROR_PERMISSIONS";
          case LastStatus::ERROR_NO_BUCKET:
            return "ERROR_NO_BUCKET";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LastStatusMapper
    } // namespace Model
  } // namespace CostandUsageReportService
} // namespace Aws
