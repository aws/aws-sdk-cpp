/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/Metric.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace MetricMapper
      {

        static constexpr uint32_t BLENDED_COST_HASH = ConstExprHashingUtils::HashString("BLENDED_COST");
        static constexpr uint32_t UNBLENDED_COST_HASH = ConstExprHashingUtils::HashString("UNBLENDED_COST");
        static constexpr uint32_t AMORTIZED_COST_HASH = ConstExprHashingUtils::HashString("AMORTIZED_COST");
        static constexpr uint32_t NET_UNBLENDED_COST_HASH = ConstExprHashingUtils::HashString("NET_UNBLENDED_COST");
        static constexpr uint32_t NET_AMORTIZED_COST_HASH = ConstExprHashingUtils::HashString("NET_AMORTIZED_COST");
        static constexpr uint32_t USAGE_QUANTITY_HASH = ConstExprHashingUtils::HashString("USAGE_QUANTITY");
        static constexpr uint32_t NORMALIZED_USAGE_AMOUNT_HASH = ConstExprHashingUtils::HashString("NORMALIZED_USAGE_AMOUNT");


        Metric GetMetricForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BLENDED_COST_HASH)
          {
            return Metric::BLENDED_COST;
          }
          else if (hashCode == UNBLENDED_COST_HASH)
          {
            return Metric::UNBLENDED_COST;
          }
          else if (hashCode == AMORTIZED_COST_HASH)
          {
            return Metric::AMORTIZED_COST;
          }
          else if (hashCode == NET_UNBLENDED_COST_HASH)
          {
            return Metric::NET_UNBLENDED_COST;
          }
          else if (hashCode == NET_AMORTIZED_COST_HASH)
          {
            return Metric::NET_AMORTIZED_COST;
          }
          else if (hashCode == USAGE_QUANTITY_HASH)
          {
            return Metric::USAGE_QUANTITY;
          }
          else if (hashCode == NORMALIZED_USAGE_AMOUNT_HASH)
          {
            return Metric::NORMALIZED_USAGE_AMOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Metric>(hashCode);
          }

          return Metric::NOT_SET;
        }

        Aws::String GetNameForMetric(Metric enumValue)
        {
          switch(enumValue)
          {
          case Metric::NOT_SET:
            return {};
          case Metric::BLENDED_COST:
            return "BLENDED_COST";
          case Metric::UNBLENDED_COST:
            return "UNBLENDED_COST";
          case Metric::AMORTIZED_COST:
            return "AMORTIZED_COST";
          case Metric::NET_UNBLENDED_COST:
            return "NET_UNBLENDED_COST";
          case Metric::NET_AMORTIZED_COST:
            return "NET_AMORTIZED_COST";
          case Metric::USAGE_QUANTITY:
            return "USAGE_QUANTITY";
          case Metric::NORMALIZED_USAGE_AMOUNT:
            return "NORMALIZED_USAGE_AMOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
