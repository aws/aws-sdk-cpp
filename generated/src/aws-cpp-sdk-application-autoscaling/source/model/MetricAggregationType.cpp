/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

            return {};
          }
        }

      } // namespace MetricAggregationTypeMapper
    } // namespace Model
  } // namespace ApplicationAutoScaling
} // namespace Aws
