/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/AnalyticsMetricStatistic.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace AnalyticsMetricStatisticMapper
      {

        static const int Sum_HASH = HashingUtils::HashString("Sum");
        static const int Avg_HASH = HashingUtils::HashString("Avg");
        static const int Max_HASH = HashingUtils::HashString("Max");


        AnalyticsMetricStatistic GetAnalyticsMetricStatisticForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Sum_HASH)
          {
            return AnalyticsMetricStatistic::Sum;
          }
          else if (hashCode == Avg_HASH)
          {
            return AnalyticsMetricStatistic::Avg;
          }
          else if (hashCode == Max_HASH)
          {
            return AnalyticsMetricStatistic::Max;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AnalyticsMetricStatistic>(hashCode);
          }

          return AnalyticsMetricStatistic::NOT_SET;
        }

        Aws::String GetNameForAnalyticsMetricStatistic(AnalyticsMetricStatistic enumValue)
        {
          switch(enumValue)
          {
          case AnalyticsMetricStatistic::NOT_SET:
            return {};
          case AnalyticsMetricStatistic::Sum:
            return "Sum";
          case AnalyticsMetricStatistic::Avg:
            return "Avg";
          case AnalyticsMetricStatistic::Max:
            return "Max";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AnalyticsMetricStatisticMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
