/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-recommended-actions/model/Feature.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMRecommendedActions
  {
    namespace Model
    {
      namespace FeatureMapper
      {

        static const int ACCOUNT_HASH = HashingUtils::HashString("ACCOUNT");
        static const int BUDGETS_HASH = HashingUtils::HashString("BUDGETS");
        static const int COST_ANOMALY_DETECTION_HASH = HashingUtils::HashString("COST_ANOMALY_DETECTION");
        static const int COST_OPTIMIZATION_HUB_HASH = HashingUtils::HashString("COST_OPTIMIZATION_HUB");
        static const int FREE_TIER_HASH = HashingUtils::HashString("FREE_TIER");
        static const int IAM_HASH = HashingUtils::HashString("IAM");
        static const int PAYMENTS_HASH = HashingUtils::HashString("PAYMENTS");
        static const int RESERVATIONS_HASH = HashingUtils::HashString("RESERVATIONS");
        static const int SAVINGS_PLANS_HASH = HashingUtils::HashString("SAVINGS_PLANS");
        static const int TAX_SETTINGS_HASH = HashingUtils::HashString("TAX_SETTINGS");


        Feature GetFeatureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_HASH)
          {
            return Feature::ACCOUNT;
          }
          else if (hashCode == BUDGETS_HASH)
          {
            return Feature::BUDGETS;
          }
          else if (hashCode == COST_ANOMALY_DETECTION_HASH)
          {
            return Feature::COST_ANOMALY_DETECTION;
          }
          else if (hashCode == COST_OPTIMIZATION_HUB_HASH)
          {
            return Feature::COST_OPTIMIZATION_HUB;
          }
          else if (hashCode == FREE_TIER_HASH)
          {
            return Feature::FREE_TIER;
          }
          else if (hashCode == IAM_HASH)
          {
            return Feature::IAM;
          }
          else if (hashCode == PAYMENTS_HASH)
          {
            return Feature::PAYMENTS;
          }
          else if (hashCode == RESERVATIONS_HASH)
          {
            return Feature::RESERVATIONS;
          }
          else if (hashCode == SAVINGS_PLANS_HASH)
          {
            return Feature::SAVINGS_PLANS;
          }
          else if (hashCode == TAX_SETTINGS_HASH)
          {
            return Feature::TAX_SETTINGS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Feature>(hashCode);
          }

          return Feature::NOT_SET;
        }

        Aws::String GetNameForFeature(Feature enumValue)
        {
          switch(enumValue)
          {
          case Feature::NOT_SET:
            return {};
          case Feature::ACCOUNT:
            return "ACCOUNT";
          case Feature::BUDGETS:
            return "BUDGETS";
          case Feature::COST_ANOMALY_DETECTION:
            return "COST_ANOMALY_DETECTION";
          case Feature::COST_OPTIMIZATION_HUB:
            return "COST_OPTIMIZATION_HUB";
          case Feature::FREE_TIER:
            return "FREE_TIER";
          case Feature::IAM:
            return "IAM";
          case Feature::PAYMENTS:
            return "PAYMENTS";
          case Feature::RESERVATIONS:
            return "RESERVATIONS";
          case Feature::SAVINGS_PLANS:
            return "SAVINGS_PLANS";
          case Feature::TAX_SETTINGS:
            return "TAX_SETTINGS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureMapper
    } // namespace Model
  } // namespace BCMRecommendedActions
} // namespace Aws
