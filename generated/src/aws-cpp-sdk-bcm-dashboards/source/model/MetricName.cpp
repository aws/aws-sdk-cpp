/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-dashboards/model/MetricName.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMDashboards
  {
    namespace Model
    {
      namespace MetricNameMapper
      {

        static const int AmortizedCost_HASH = HashingUtils::HashString("AmortizedCost");
        static const int BlendedCost_HASH = HashingUtils::HashString("BlendedCost");
        static const int NetAmortizedCost_HASH = HashingUtils::HashString("NetAmortizedCost");
        static const int NetUnblendedCost_HASH = HashingUtils::HashString("NetUnblendedCost");
        static const int NormalizedUsageAmount_HASH = HashingUtils::HashString("NormalizedUsageAmount");
        static const int UnblendedCost_HASH = HashingUtils::HashString("UnblendedCost");
        static const int UsageQuantity_HASH = HashingUtils::HashString("UsageQuantity");
        static const int SpendCoveredBySavingsPlans_HASH = HashingUtils::HashString("SpendCoveredBySavingsPlans");
        static const int Hour_HASH = HashingUtils::HashString("Hour");
        static const int Unit_HASH = HashingUtils::HashString("Unit");
        static const int Cost_HASH = HashingUtils::HashString("Cost");


        MetricName GetMetricNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AmortizedCost_HASH)
          {
            return MetricName::AmortizedCost;
          }
          else if (hashCode == BlendedCost_HASH)
          {
            return MetricName::BlendedCost;
          }
          else if (hashCode == NetAmortizedCost_HASH)
          {
            return MetricName::NetAmortizedCost;
          }
          else if (hashCode == NetUnblendedCost_HASH)
          {
            return MetricName::NetUnblendedCost;
          }
          else if (hashCode == NormalizedUsageAmount_HASH)
          {
            return MetricName::NormalizedUsageAmount;
          }
          else if (hashCode == UnblendedCost_HASH)
          {
            return MetricName::UnblendedCost;
          }
          else if (hashCode == UsageQuantity_HASH)
          {
            return MetricName::UsageQuantity;
          }
          else if (hashCode == SpendCoveredBySavingsPlans_HASH)
          {
            return MetricName::SpendCoveredBySavingsPlans;
          }
          else if (hashCode == Hour_HASH)
          {
            return MetricName::Hour;
          }
          else if (hashCode == Unit_HASH)
          {
            return MetricName::Unit;
          }
          else if (hashCode == Cost_HASH)
          {
            return MetricName::Cost;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MetricName>(hashCode);
          }

          return MetricName::NOT_SET;
        }

        Aws::String GetNameForMetricName(MetricName enumValue)
        {
          switch(enumValue)
          {
          case MetricName::NOT_SET:
            return {};
          case MetricName::AmortizedCost:
            return "AmortizedCost";
          case MetricName::BlendedCost:
            return "BlendedCost";
          case MetricName::NetAmortizedCost:
            return "NetAmortizedCost";
          case MetricName::NetUnblendedCost:
            return "NetUnblendedCost";
          case MetricName::NormalizedUsageAmount:
            return "NormalizedUsageAmount";
          case MetricName::UnblendedCost:
            return "UnblendedCost";
          case MetricName::UsageQuantity:
            return "UsageQuantity";
          case MetricName::SpendCoveredBySavingsPlans:
            return "SpendCoveredBySavingsPlans";
          case MetricName::Hour:
            return "Hour";
          case MetricName::Unit:
            return "Unit";
          case MetricName::Cost:
            return "Cost";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MetricNameMapper
    } // namespace Model
  } // namespace BCMDashboards
} // namespace Aws
