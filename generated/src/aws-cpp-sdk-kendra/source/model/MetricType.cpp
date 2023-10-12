/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/MetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace MetricTypeMapper
      {

        static constexpr uint32_t QUERIES_BY_COUNT_HASH = ConstExprHashingUtils::HashString("QUERIES_BY_COUNT");
        static constexpr uint32_t QUERIES_BY_ZERO_CLICK_RATE_HASH = ConstExprHashingUtils::HashString("QUERIES_BY_ZERO_CLICK_RATE");
        static constexpr uint32_t QUERIES_BY_ZERO_RESULT_RATE_HASH = ConstExprHashingUtils::HashString("QUERIES_BY_ZERO_RESULT_RATE");
        static constexpr uint32_t DOCS_BY_CLICK_COUNT_HASH = ConstExprHashingUtils::HashString("DOCS_BY_CLICK_COUNT");
        static constexpr uint32_t AGG_QUERY_DOC_METRICS_HASH = ConstExprHashingUtils::HashString("AGG_QUERY_DOC_METRICS");
        static constexpr uint32_t TREND_QUERY_DOC_METRICS_HASH = ConstExprHashingUtils::HashString("TREND_QUERY_DOC_METRICS");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUERIES_BY_COUNT_HASH)
          {
            return MetricType::QUERIES_BY_COUNT;
          }
          else if (hashCode == QUERIES_BY_ZERO_CLICK_RATE_HASH)
          {
            return MetricType::QUERIES_BY_ZERO_CLICK_RATE;
          }
          else if (hashCode == QUERIES_BY_ZERO_RESULT_RATE_HASH)
          {
            return MetricType::QUERIES_BY_ZERO_RESULT_RATE;
          }
          else if (hashCode == DOCS_BY_CLICK_COUNT_HASH)
          {
            return MetricType::DOCS_BY_CLICK_COUNT;
          }
          else if (hashCode == AGG_QUERY_DOC_METRICS_HASH)
          {
            return MetricType::AGG_QUERY_DOC_METRICS;
          }
          else if (hashCode == TREND_QUERY_DOC_METRICS_HASH)
          {
            return MetricType::TREND_QUERY_DOC_METRICS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricType>(hashCode);
          }

          return MetricType::NOT_SET;
        }

        Aws::String GetNameForMetricType(MetricType enumValue)
        {
          switch(enumValue)
          {
          case MetricType::NOT_SET:
            return {};
          case MetricType::QUERIES_BY_COUNT:
            return "QUERIES_BY_COUNT";
          case MetricType::QUERIES_BY_ZERO_CLICK_RATE:
            return "QUERIES_BY_ZERO_CLICK_RATE";
          case MetricType::QUERIES_BY_ZERO_RESULT_RATE:
            return "QUERIES_BY_ZERO_RESULT_RATE";
          case MetricType::DOCS_BY_CLICK_COUNT:
            return "DOCS_BY_CLICK_COUNT";
          case MetricType::AGG_QUERY_DOC_METRICS:
            return "AGG_QUERY_DOC_METRICS";
          case MetricType::TREND_QUERY_DOC_METRICS:
            return "TREND_QUERY_DOC_METRICS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricTypeMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
