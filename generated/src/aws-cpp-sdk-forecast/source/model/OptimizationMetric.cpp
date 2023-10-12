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

        static constexpr uint32_t WAPE_HASH = ConstExprHashingUtils::HashString("WAPE");
        static constexpr uint32_t RMSE_HASH = ConstExprHashingUtils::HashString("RMSE");
        static constexpr uint32_t AverageWeightedQuantileLoss_HASH = ConstExprHashingUtils::HashString("AverageWeightedQuantileLoss");
        static constexpr uint32_t MASE_HASH = ConstExprHashingUtils::HashString("MASE");
        static constexpr uint32_t MAPE_HASH = ConstExprHashingUtils::HashString("MAPE");


        OptimizationMetric GetOptimizationMetricForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
