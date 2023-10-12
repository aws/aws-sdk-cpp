/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/MarketplaceSubscriptionOnboardingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FMS
  {
    namespace Model
    {
      namespace MarketplaceSubscriptionOnboardingStatusMapper
      {

        static constexpr uint32_t NO_SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("NO_SUBSCRIPTION");
        static constexpr uint32_t NOT_COMPLETE_HASH = ConstExprHashingUtils::HashString("NOT_COMPLETE");
        static constexpr uint32_t COMPLETE_HASH = ConstExprHashingUtils::HashString("COMPLETE");


        MarketplaceSubscriptionOnboardingStatus GetMarketplaceSubscriptionOnboardingStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_SUBSCRIPTION_HASH)
          {
            return MarketplaceSubscriptionOnboardingStatus::NO_SUBSCRIPTION;
          }
          else if (hashCode == NOT_COMPLETE_HASH)
          {
            return MarketplaceSubscriptionOnboardingStatus::NOT_COMPLETE;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return MarketplaceSubscriptionOnboardingStatus::COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketplaceSubscriptionOnboardingStatus>(hashCode);
          }

          return MarketplaceSubscriptionOnboardingStatus::NOT_SET;
        }

        Aws::String GetNameForMarketplaceSubscriptionOnboardingStatus(MarketplaceSubscriptionOnboardingStatus enumValue)
        {
          switch(enumValue)
          {
          case MarketplaceSubscriptionOnboardingStatus::NOT_SET:
            return {};
          case MarketplaceSubscriptionOnboardingStatus::NO_SUBSCRIPTION:
            return "NO_SUBSCRIPTION";
          case MarketplaceSubscriptionOnboardingStatus::NOT_COMPLETE:
            return "NOT_COMPLETE";
          case MarketplaceSubscriptionOnboardingStatus::COMPLETE:
            return "COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MarketplaceSubscriptionOnboardingStatusMapper
    } // namespace Model
  } // namespace FMS
} // namespace Aws
