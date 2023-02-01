/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ECSServiceMetricStatistic.h>
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
      namespace ECSServiceMetricStatisticMapper
      {

        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Average_HASH = HashingUtils::HashString("Average");


        ECSServiceMetricStatistic GetECSServiceMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximum_HASH)
          {
            return ECSServiceMetricStatistic::Maximum;
          }
          else if (hashCode == Average_HASH)
          {
            return ECSServiceMetricStatistic::Average;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ECSServiceMetricStatistic>(hashCode);
          }

          return ECSServiceMetricStatistic::NOT_SET;
        }

        Aws::String GetNameForECSServiceMetricStatistic(ECSServiceMetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case ECSServiceMetricStatistic::Maximum:
            return "Maximum";
          case ECSServiceMetricStatistic::Average:
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

      } // namespace ECSServiceMetricStatisticMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
