/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceLevelMetricsConfig.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppSync
  {
    namespace Model
    {
      namespace DataSourceLevelMetricsConfigMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        DataSourceLevelMetricsConfig GetDataSourceLevelMetricsConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return DataSourceLevelMetricsConfig::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return DataSourceLevelMetricsConfig::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceLevelMetricsConfig>(hashCode);
          }

          return DataSourceLevelMetricsConfig::NOT_SET;
        }

        Aws::String GetNameForDataSourceLevelMetricsConfig(DataSourceLevelMetricsConfig enumValue)
        {
          switch(enumValue)
          {
          case DataSourceLevelMetricsConfig::NOT_SET:
            return {};
          case DataSourceLevelMetricsConfig::ENABLED:
            return "ENABLED";
          case DataSourceLevelMetricsConfig::DISABLED:
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

      } // namespace DataSourceLevelMetricsConfigMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
