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

        static constexpr uint32_t TIER_1_HASH = ConstExprHashingUtils::HashString("TIER_1");
        static constexpr uint32_t TIER_2_HASH = ConstExprHashingUtils::HashString("TIER_2");
        static constexpr uint32_t TIER_3_HASH = ConstExprHashingUtils::HashString("TIER_3");
        static constexpr uint32_t TIER_4_HASH = ConstExprHashingUtils::HashString("TIER_4");


        PricingTier GetPricingTierForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case PricingTier::NOT_SET:
            return {};
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
