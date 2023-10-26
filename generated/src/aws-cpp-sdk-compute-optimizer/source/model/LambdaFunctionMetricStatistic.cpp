/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/LambdaFunctionMetricStatistic.h>
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
      namespace LambdaFunctionMetricStatisticMapper
      {

        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Average_HASH = HashingUtils::HashString("Average");


        LambdaFunctionMetricStatistic GetLambdaFunctionMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximum_HASH)
          {
            return LambdaFunctionMetricStatistic::Maximum;
          }
          else if (hashCode == Average_HASH)
          {
            return LambdaFunctionMetricStatistic::Average;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LambdaFunctionMetricStatistic>(hashCode);
          }

          return LambdaFunctionMetricStatistic::NOT_SET;
        }

        Aws::String GetNameForLambdaFunctionMetricStatistic(LambdaFunctionMetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case LambdaFunctionMetricStatistic::NOT_SET:
            return {};
          case LambdaFunctionMetricStatistic::Maximum:
            return "Maximum";
          case LambdaFunctionMetricStatistic::Average:
            return "Average";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LambdaFunctionMetricStatisticMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
