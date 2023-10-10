/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/OptimizationMetric.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ForecastService
  {
    namespace Model
    {
      namespace OptimizationMetricMapper
      {

        static const int WAPE_HASH = HashingUtils::HashString("WAPE");
        static const int RMSE_HASH = HashingUtils::HashString("RMSE");
        static const int AverageWeightedQuantileLoss_HASH = HashingUtils::HashString("AverageWeightedQuantileLoss");
        static const int MASE_HASH = HashingUtils::HashString("MASE");
        static const int MAPE_HASH = HashingUtils::HashString("MAPE");


        OptimizationMetric GetOptimizationMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WAPE_HASH)
          {
            return OptimizationMetric::WAPE;
          }
          else if (hashCode == RMSE_HASH)
          {
            return OptimizationMetric::RMSE;
          }
          else if (hashCode == AverageWeightedQuantileLoss_HASH)
          {
            return OptimizationMetric::AverageWeightedQuantileLoss;
          }
          else if (hashCode == MASE_HASH)
          {
            return OptimizationMetric::MASE;
          }
          else if (hashCode == MAPE_HASH)
          {
            return OptimizationMetric::MAPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OptimizationMetric>(hashCode);
          }

          return OptimizationMetric::NOT_SET;
        }

        Aws::String GetNameForOptimizationMetric(OptimizationMetric enumValue)
        {
          switch(enumValue)
          {
          case OptimizationMetric::NOT_SET:
            return {};
          case OptimizationMetric::WAPE:
            return "WAPE";
          case OptimizationMetric::RMSE:
            return "RMSE";
          case OptimizationMetric::AverageWeightedQuantileLoss:
            return "AverageWeightedQuantileLoss";
          case OptimizationMetric::MASE:
            return "MASE";
          case OptimizationMetric::MAPE:
            return "MAPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OptimizationMetricMapper
    } // namespace Model
  } // namespace ForecastService
} // namespace Aws
