/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/DataSource.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GuardDuty
  {
    namespace Model
    {
      namespace DataSourceMapper
      {

        static const int FLOW_LOGS_HASH = HashingUtils::HashString("FLOW_LOGS");
        static const int CLOUD_TRAIL_HASH = HashingUtils::HashString("CLOUD_TRAIL");
        static const int DNS_LOGS_HASH = HashingUtils::HashString("DNS_LOGS");
        static const int S3_LOGS_HASH = HashingUtils::HashString("S3_LOGS");


        DataSource GetDataSourceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FLOW_LOGS_HASH)
          {
            return DataSource::FLOW_LOGS;
          }
          else if (hashCode == CLOUD_TRAIL_HASH)
          {
            return DataSource::CLOUD_TRAIL;
          }
          else if (hashCode == DNS_LOGS_HASH)
          {
            return DataSource::DNS_LOGS;
          }
          else if (hashCode == S3_LOGS_HASH)
          {
            return DataSource::S3_LOGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSource>(hashCode);
          }

          return DataSource::NOT_SET;
        }

        Aws::String GetNameForDataSource(DataSource enumValue)
        {
          switch(enumValue)
          {
          case DataSource::FLOW_LOGS:
            return "FLOW_LOGS";
          case DataSource::CLOUD_TRAIL:
            return "CLOUD_TRAIL";
          case DataSource::DNS_LOGS:
            return "DNS_LOGS";
          case DataSource::S3_LOGS:
            return "S3_LOGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceMapper
    } // namespace Model
  } // namespace GuardDuty
} // namespace Aws
