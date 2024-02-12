/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DataSourceLevelMetricsBehavior.h>
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
      namespace DataSourceLevelMetricsBehaviorMapper
      {

        static const int FULL_REQUEST_DATA_SOURCE_METRICS_HASH = HashingUtils::HashString("FULL_REQUEST_DATA_SOURCE_METRICS");
        static const int PER_DATA_SOURCE_METRICS_HASH = HashingUtils::HashString("PER_DATA_SOURCE_METRICS");


        DataSourceLevelMetricsBehavior GetDataSourceLevelMetricsBehaviorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FULL_REQUEST_DATA_SOURCE_METRICS_HASH)
          {
            return DataSourceLevelMetricsBehavior::FULL_REQUEST_DATA_SOURCE_METRICS;
          }
          else if (hashCode == PER_DATA_SOURCE_METRICS_HASH)
          {
            return DataSourceLevelMetricsBehavior::PER_DATA_SOURCE_METRICS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceLevelMetricsBehavior>(hashCode);
          }

          return DataSourceLevelMetricsBehavior::NOT_SET;
        }

        Aws::String GetNameForDataSourceLevelMetricsBehavior(DataSourceLevelMetricsBehavior enumValue)
        {
          switch(enumValue)
          {
          case DataSourceLevelMetricsBehavior::NOT_SET:
            return {};
          case DataSourceLevelMetricsBehavior::FULL_REQUEST_DATA_SOURCE_METRICS:
            return "FULL_REQUEST_DATA_SOURCE_METRICS";
          case DataSourceLevelMetricsBehavior::PER_DATA_SOURCE_METRICS:
            return "PER_DATA_SOURCE_METRICS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceLevelMetricsBehaviorMapper
    } // namespace Model
  } // namespace AppSync
} // namespace Aws
