/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/PricingTier.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoTTwinMaker
  {
    namespace Model
    {
      namespace PricingTierMapper
      {

        static const int TIER_1_HASH = HashingUtils::HashString("TIER_1");
        static const int TIER_2_HASH = HashingUtils::HashString("TIER_2");
        static const int TIER_3_HASH = HashingUtils::HashString("TIER_3");
        static const int TIER_4_HASH = HashingUtils::HashString("TIER_4");


        PricingTier GetPricingTierForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TIER_1_HASH)
          {
            return PricingTier::TIER_1;
          }
          else if (hashCode == TIER_2_HASH)
          {
            return PricingTier::TIER_2;
          }
          else if (hashCode == TIER_3_HASH)
          {
            return PricingTier::TIER_3;
          }
          else if (hashCode == TIER_4_HASH)
          {
            return PricingTier::TIER_4;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingTier>(hashCode);
          }

          return PricingTier::NOT_SET;
        }

        Aws::String GetNameForPricingTier(PricingTier enumValue)
        {
          switch(enumValue)
          {
          case PricingTier::TIER_1:
            return "TIER_1";
          case PricingTier::TIER_2:
            return "TIER_2";
          case PricingTier::TIER_3:
            return "TIER_3";
          case PricingTier::TIER_4:
            return "TIER_4";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingTierMapper
    } // namespace Model
  } // namespace IoTTwinMaker
} // namespace Aws
