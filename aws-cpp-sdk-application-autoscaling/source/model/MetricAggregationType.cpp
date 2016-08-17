/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/application-autoscaling/model/MetricAggregationType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ApplicationAutoScaling
  {
    namespace Model
    {
      namespace MetricAggregationTypeMapper
      {

        static const int Average_HASH = HashingUtils::HashString("Average");
        static const int Minimum_HASH = HashingUtils::HashString("Minimum");
        static const int Maximum_HASH = HashingUtils::HashString("Maximum");


        MetricAggregationType GetMetricAggregationTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Average_HASH)
          {
            return MetricAggregationType::Average;
          }
          else if (hashCode == Minimum_HASH)
          {
            return MetricAggregationType::Minimum;
          }
          else if (hashCode == Maximum_HASH)
          {
            return MetricAggregationType::Maximum;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricAggregationType>(hashCode);
          }

          return MetricAggregationType::NOT_SET;
        }

        Aws::String GetNameForMetricAggregationType(MetricAggregationType enumValue)
        {
          switch(enumValue)
          {
          case MetricAggregationType::Average:
            return "Average";
          case MetricAggregationType::Minimum:
            return "Minimum";
          case MetricAggregationType::Maximum:
            return "Maximum";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace MetricAggregationTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
