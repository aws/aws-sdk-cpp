/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/compute-optimizer/model/MetricStatistic.h>
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
      namespace MetricStatisticMapper
      {

        static const int Maximum_HASH = HashingUtils::HashString("Maximum");
        static const int Average_HASH = HashingUtils::HashString("Average");


        MetricStatistic GetMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Maximum_HASH)
          {
            return MetricStatistic::Maximum;
          }
          else if (hashCode == Average_HASH)
          {
            return MetricStatistic::Average;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricStatistic>(hashCode);
          }

          return MetricStatistic::NOT_SET;
        }

        Aws::String GetNameForMetricStatistic(MetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case MetricStatistic::Maximum:
            return "Maximum";
          case MetricStatistic::Average:
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

      } // namespace MetricStatisticMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
