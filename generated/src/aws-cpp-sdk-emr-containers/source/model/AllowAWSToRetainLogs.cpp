/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/AllowAWSToRetainLogs.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMRContainers
  {
    namespace Model
    {
      namespace AllowAWSToRetainLogsMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AllowAWSToRetainLogs GetAllowAWSToRetainLogsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AllowAWSToRetainLogs::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AllowAWSToRetainLogs::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AllowAWSToRetainLogs>(hashCode);
          }

          return AllowAWSToRetainLogs::NOT_SET;
        }

        Aws::String GetNameForAllowAWSToRetainLogs(AllowAWSToRetainLogs enumValue)
        {
          switch(enumValue)
          {
          case AllowAWSToRetainLogs::NOT_SET:
            return {};
          case AllowAWSToRetainLogs::ENABLED:
            return "ENABLED";
          case AllowAWSToRetainLogs::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AllowAWSToRetainLogsMapper
    } // namespace Model
  } // namespace EMRContainers
} // namespace Aws
