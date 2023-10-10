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

        static const int LowerBound_HASH = HashingUtils::HashString("LowerBound");
        static const int UpperBound_HASH = HashingUtils::HashString("UpperBound");
        static const int Expected_HASH = HashingUtils::HashString("Expected");


        LambdaFunctionMemoryMetricStatistic GetLambdaFunctionMemoryMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
