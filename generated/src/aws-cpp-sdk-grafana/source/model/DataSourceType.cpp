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

        static constexpr uint32_t AMAZON_OPENSEARCH_SERVICE_HASH = ConstExprHashingUtils::HashString("AMAZON_OPENSEARCH_SERVICE");
        static constexpr uint32_t CLOUDWATCH_HASH = ConstExprHashingUtils::HashString("CLOUDWATCH");
        static constexpr uint32_t PROMETHEUS_HASH = ConstExprHashingUtils::HashString("PROMETHEUS");
        static constexpr uint32_t XRAY_HASH = ConstExprHashingUtils::HashString("XRAY");
        static constexpr uint32_t TIMESTREAM_HASH = ConstExprHashingUtils::HashString("TIMESTREAM");
        static constexpr uint32_t SITEWISE_HASH = ConstExprHashingUtils::HashString("SITEWISE");
        static constexpr uint32_t ATHENA_HASH = ConstExprHashingUtils::HashString("ATHENA");
        static constexpr uint32_t REDSHIFT_HASH = ConstExprHashingUtils::HashString("REDSHIFT");
        static constexpr uint32_t TWINMAKER_HASH = ConstExprHashingUtils::HashString("TWINMAKER");


        DataSourceType GetDataSourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case DataSourceType::NOT_SET:
            return {};
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
