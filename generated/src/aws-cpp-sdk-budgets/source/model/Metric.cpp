/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/budgets/model/Metric.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Budgets
  {
    namespace Model
    {
      namespace MetricMapper
      {

        static const int BlendedCost_HASH = HashingUtils::HashString("BlendedCost");
        static const int UnblendedCost_HASH = HashingUtils::HashString("UnblendedCost");
        static const int AmortizedCost_HASH = HashingUtils::HashString("AmortizedCost");
        static const int NetUnblendedCost_HASH = HashingUtils::HashString("NetUnblendedCost");
        static const int NetAmortizedCost_HASH = HashingUtils::HashString("NetAmortizedCost");
        static const int UsageQuantity_HASH = HashingUtils::HashString("UsageQuantity");
        static const int NormalizedUsageAmount_HASH = HashingUtils::HashString("NormalizedUsageAmount");
        static const int Hours_HASH = HashingUtils::HashString("Hours");


        Metric GetMetricForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BlendedCost_HASH)
          {
            return Metric::BlendedCost;
          }
          else if (hashCode == UnblendedCost_HASH)
          {
            return Metric::UnblendedCost;
          }
          else if (hashCode == AmortizedCost_HASH)
          {
            return Metric::AmortizedCost;
          }
          else if (hashCode == NetUnblendedCost_HASH)
          {
            return Metric::NetUnblendedCost;
          }
          else if (hashCode == NetAmortizedCost_HASH)
          {
            return Metric::NetAmortizedCost;
          }
          else if (hashCode == UsageQuantity_HASH)
          {
            return Metric::UsageQuantity;
          }
          else if (hashCode == NormalizedUsageAmount_HASH)
          {
            return Metric::NormalizedUsageAmount;
          }
          else if (hashCode == Hours_HASH)
          {
            return Metric::Hours;
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
          case Metric::BlendedCost:
            return "BlendedCost";
          case Metric::UnblendedCost:
            return "UnblendedCost";
          case Metric::AmortizedCost:
            return "AmortizedCost";
          case Metric::NetUnblendedCost:
            return "NetUnblendedCost";
          case Metric::NetAmortizedCost:
            return "NetAmortizedCost";
          case Metric::UsageQuantity:
            return "UsageQuantity";
          case Metric::NormalizedUsageAmount:
            return "NormalizedUsageAmount";
          case Metric::Hours:
            return "Hours";
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
  } // namespace Budgets
} // namespace Aws
