/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cost-optimization-hub/model/SummaryMetrics.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostOptimizationHub
  {
    namespace Model
    {
      namespace SummaryMetricsMapper
      {

        static const int SavingsPercentage_HASH = HashingUtils::HashString("SavingsPercentage");


        SummaryMetrics GetSummaryMetricsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SavingsPercentage_HASH)
          {
            return SummaryMetrics::SavingsPercentage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SummaryMetrics>(hashCode);
          }

          return SummaryMetrics::NOT_SET;
        }

        Aws::String GetNameForSummaryMetrics(SummaryMetrics enumValue)
        {
          switch(enumValue)
          {
          case SummaryMetrics::NOT_SET:
            return {};
          case SummaryMetrics::SavingsPercentage:
            return "SavingsPercentage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SummaryMetricsMapper
    } // namespace Model
  } // namespace CostOptimizationHub
} // namespace Aws
