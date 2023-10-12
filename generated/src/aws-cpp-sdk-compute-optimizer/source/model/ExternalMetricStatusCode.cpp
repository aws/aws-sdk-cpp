/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ExternalMetricStatusCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace ExternalMetricStatusCodeMapper
      {

        static constexpr uint32_t NO_EXTERNAL_METRIC_SET_HASH = ConstExprHashingUtils::HashString("NO_EXTERNAL_METRIC_SET");
        static constexpr uint32_t INTEGRATION_SUCCESS_HASH = ConstExprHashingUtils::HashString("INTEGRATION_SUCCESS");
        static constexpr uint32_t DATADOG_INTEGRATION_ERROR_HASH = ConstExprHashingUtils::HashString("DATADOG_INTEGRATION_ERROR");
        static constexpr uint32_t DYNATRACE_INTEGRATION_ERROR_HASH = ConstExprHashingUtils::HashString("DYNATRACE_INTEGRATION_ERROR");
        static constexpr uint32_t NEWRELIC_INTEGRATION_ERROR_HASH = ConstExprHashingUtils::HashString("NEWRELIC_INTEGRATION_ERROR");
        static constexpr uint32_t INSTANA_INTEGRATION_ERROR_HASH = ConstExprHashingUtils::HashString("INSTANA_INTEGRATION_ERROR");
        static constexpr uint32_t INSUFFICIENT_DATADOG_METRICS_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_DATADOG_METRICS");
        static constexpr uint32_t INSUFFICIENT_DYNATRACE_METRICS_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_DYNATRACE_METRICS");
        static constexpr uint32_t INSUFFICIENT_NEWRELIC_METRICS_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_NEWRELIC_METRICS");
        static constexpr uint32_t INSUFFICIENT_INSTANA_METRICS_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_INSTANA_METRICS");


        ExternalMetricStatusCode GetExternalMetricStatusCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_EXTERNAL_METRIC_SET_HASH)
          {
            return ExternalMetricStatusCode::NO_EXTERNAL_METRIC_SET;
          }
          else if (hashCode == INTEGRATION_SUCCESS_HASH)
          {
            return ExternalMetricStatusCode::INTEGRATION_SUCCESS;
          }
          else if (hashCode == DATADOG_INTEGRATION_ERROR_HASH)
          {
            return ExternalMetricStatusCode::DATADOG_INTEGRATION_ERROR;
          }
          else if (hashCode == DYNATRACE_INTEGRATION_ERROR_HASH)
          {
            return ExternalMetricStatusCode::DYNATRACE_INTEGRATION_ERROR;
          }
          else if (hashCode == NEWRELIC_INTEGRATION_ERROR_HASH)
          {
            return ExternalMetricStatusCode::NEWRELIC_INTEGRATION_ERROR;
          }
          else if (hashCode == INSTANA_INTEGRATION_ERROR_HASH)
          {
            return ExternalMetricStatusCode::INSTANA_INTEGRATION_ERROR;
          }
          else if (hashCode == INSUFFICIENT_DATADOG_METRICS_HASH)
          {
            return ExternalMetricStatusCode::INSUFFICIENT_DATADOG_METRICS;
          }
          else if (hashCode == INSUFFICIENT_DYNATRACE_METRICS_HASH)
          {
            return ExternalMetricStatusCode::INSUFFICIENT_DYNATRACE_METRICS;
          }
          else if (hashCode == INSUFFICIENT_NEWRELIC_METRICS_HASH)
          {
            return ExternalMetricStatusCode::INSUFFICIENT_NEWRELIC_METRICS;
          }
          else if (hashCode == INSUFFICIENT_INSTANA_METRICS_HASH)
          {
            return ExternalMetricStatusCode::INSUFFICIENT_INSTANA_METRICS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExternalMetricStatusCode>(hashCode);
          }

          return ExternalMetricStatusCode::NOT_SET;
        }

        Aws::String GetNameForExternalMetricStatusCode(ExternalMetricStatusCode enumValue)
        {
          switch(enumValue)
          {
          case ExternalMetricStatusCode::NOT_SET:
            return {};
          case ExternalMetricStatusCode::NO_EXTERNAL_METRIC_SET:
            return "NO_EXTERNAL_METRIC_SET";
          case ExternalMetricStatusCode::INTEGRATION_SUCCESS:
            return "INTEGRATION_SUCCESS";
          case ExternalMetricStatusCode::DATADOG_INTEGRATION_ERROR:
            return "DATADOG_INTEGRATION_ERROR";
          case ExternalMetricStatusCode::DYNATRACE_INTEGRATION_ERROR:
            return "DYNATRACE_INTEGRATION_ERROR";
          case ExternalMetricStatusCode::NEWRELIC_INTEGRATION_ERROR:
            return "NEWRELIC_INTEGRATION_ERROR";
          case ExternalMetricStatusCode::INSTANA_INTEGRATION_ERROR:
            return "INSTANA_INTEGRATION_ERROR";
          case ExternalMetricStatusCode::INSUFFICIENT_DATADOG_METRICS:
            return "INSUFFICIENT_DATADOG_METRICS";
          case ExternalMetricStatusCode::INSUFFICIENT_DYNATRACE_METRICS:
            return "INSUFFICIENT_DYNATRACE_METRICS";
          case ExternalMetricStatusCode::INSUFFICIENT_NEWRELIC_METRICS:
            return "INSUFFICIENT_NEWRELIC_METRICS";
          case ExternalMetricStatusCode::INSUFFICIENT_INSTANA_METRICS:
            return "INSUFFICIENT_INSTANA_METRICS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExternalMetricStatusCodeMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
