/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMemoryMetricStatistic.h>
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
      namespace LambdaFunctionMemoryMetricStatisticMapper
      {

        static constexpr uint32_t LowerBound_HASH = ConstExprHashingUtils::HashString("LowerBound");
        static constexpr uint32_t UpperBound_HASH = ConstExprHashingUtils::HashString("UpperBound");
        static constexpr uint32_t Expected_HASH = ConstExprHashingUtils::HashString("Expected");


        LambdaFunctionMemoryMetricStatistic GetLambdaFunctionMemoryMetricStatisticForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LowerBound_HASH)
          {
            return LambdaFunctionMemoryMetricStatistic::LowerBound;
          }
          else if (hashCode == UpperBound_HASH)
          {
            return LambdaFunctionMemoryMetricStatistic::UpperBound;
          }
          else if (hashCode == Expected_HASH)
          {
            return LambdaFunctionMemoryMetricStatistic::Expected;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionMemoryMetricStatistic>(hashCode);
          }

          return LambdaFunctionMemoryMetricStatistic::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionMemoryMetricStatistic(LambdaFunctionMemoryMetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionMemoryMetricStatistic::NOT_SET:
            return {};
          case LambdaFunctionMemoryMetricStatistic::LowerBound:
            return "LowerBound";
          case LambdaFunctionMemoryMetricStatistic::UpperBound:
            return "UpperBound";
          case LambdaFunctionMemoryMetricStatistic::Expected:
            return "Expected";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionMemoryMetricStatisticMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
