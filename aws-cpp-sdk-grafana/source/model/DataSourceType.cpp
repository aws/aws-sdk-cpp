/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/grafana/model/DataSourceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedGrafana
  {
    namespace Model
    {
      namespace DataSourceTypeMapper
      {

        static const int AMAZON_OPENSEARCH_SERVICE_HASH = HashingUtils::HashString("AMAZON_OPENSEARCH_SERVICE");
        static const int CLOUDWATCH_HASH = HashingUtils::HashString("CLOUDWATCH");
        static const int PROMETHEUS_HASH = HashingUtils::HashString("PROMETHEUS");
        static const int XRAY_HASH = HashingUtils::HashString("XRAY");
        static const int TIMESTREAM_HASH = HashingUtils::HashString("TIMESTREAM");
        static const int SITEWISE_HASH = HashingUtils::HashString("SITEWISE");
        static const int ATHENA_HASH = HashingUtils::HashString("ATHENA");
        static const int REDSHIFT_HASH = HashingUtils::HashString("REDSHIFT");
        static const int TWINMAKER_HASH = HashingUtils::HashString("TWINMAKER");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AMAZON_OPENSEARCH_SERVICE_HASH)
          {
            return DataSourceType::AMAZON_OPENSEARCH_SERVICE;
          }
          else if (hashCode == CLOUDWATCH_HASH)
          {
            return DataSourceType::CLOUDWATCH;
          }
          else if (hashCode == PROMETHEUS_HASH)
          {
            return DataSourceType::PROMETHEUS;
          }
          else if (hashCode == XRAY_HASH)
          {
            return DataSourceType::XRAY;
          }
          else if (hashCode == TIMESTREAM_HASH)
          {
            return DataSourceType::TIMESTREAM;
          }
          else if (hashCode == SITEWISE_HASH)
          {
            return DataSourceType::SITEWISE;
          }
          else if (hashCode == ATHENA_HASH)
          {
            return DataSourceType::ATHENA;
          }
          else if (hashCode == REDSHIFT_HASH)
          {
            return DataSourceType::REDSHIFT;
          }
          else if (hashCode == TWINMAKER_HASH)
          {
            return DataSourceType::TWINMAKER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DataSourceType>(hashCode);
          }

          return DataSourceType::NOT_SET;
        }

        Aws::String GetNameForDataSourceType(DataSourceType enumValue)
        {
          switch(enumValue)
          {
          case DataSourceType::AMAZON_OPENSEARCH_SERVICE:
            return "AMAZON_OPENSEARCH_SERVICE";
          case DataSourceType::CLOUDWATCH:
            return "CLOUDWATCH";
          case DataSourceType::PROMETHEUS:
            return "PROMETHEUS";
          case DataSourceType::XRAY:
            return "XRAY";
          case DataSourceType::TIMESTREAM:
            return "TIMESTREAM";
          case DataSourceType::SITEWISE:
            return "SITEWISE";
          case DataSourceType::ATHENA:
            return "ATHENA";
          case DataSourceType::REDSHIFT:
            return "REDSHIFT";
          case DataSourceType::TWINMAKER:
            return "TWINMAKER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DataSourceTypeMapper
    } // namespace Model
  } // namespace ManagedGrafana
} // namespace Aws
