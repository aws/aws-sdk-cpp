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

#include <aws/autoscaling/model/MetricType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AutoScaling
  {
    namespace Model
    {
      namespace MetricTypeMapper
      {

        static const int ASGAverageCPUUtilization_HASH = HashingUtils::HashString("ASGAverageCPUUtilization");
        static const int ASGAverageNetworkIn_HASH = HashingUtils::HashString("ASGAverageNetworkIn");
        static const int ASGAverageNetworkOut_HASH = HashingUtils::HashString("ASGAverageNetworkOut");
        static const int ALBRequestCountPerTarget_HASH = HashingUtils::HashString("ALBRequestCountPerTarget");


        MetricType GetMetricTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASGAverageCPUUtilization_HASH)
          {
            return MetricType::ASGAverageCPUUtilization;
          }
          else if (hashCode == ASGAverageNetworkIn_HASH)
          {
            return MetricType::ASGAverageNetworkIn;
          }
          else if (hashCode == ASGAverageNetworkOut_HASH)
          {
            return MetricType::ASGAverageNetworkOut;
          }
          else if (hashCode == ALBRequestCountPerTarget_HASH)
          {
            return MetricType::ALBRequestCountPerTarget;
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
          case MetricType::ASGAverageCPUUtilization:
            return "ASGAverageCPUUtilization";
          case MetricType::ASGAverageNetworkIn:
            return "ASGAverageNetworkIn";
          case MetricType::ASGAverageNetworkOut:
            return "ASGAverageNetworkOut";
          case MetricType::ALBRequestCountPerTarget:
            return "ALBRequestCountPerTarget";
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
  } // namespace AutoScaling
} // namespace Aws
