/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/PricingRuleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BillingConductor
  {
    namespace Model
    {
      namespace PricingRuleTypeMapper
      {

        static constexpr uint32_t MARKUP_HASH = ConstExprHashingUtils::HashString("MARKUP");
        static constexpr uint32_t DISCOUNT_HASH = ConstExprHashingUtils::HashString("DISCOUNT");
        static constexpr uint32_t TIERING_HASH = ConstExprHashingUtils::HashString("TIERING");


        PricingRuleType GetPricingRuleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MARKUP_HASH)
          {
            return PricingRuleType::MARKUP;
          }
          else if (hashCode == DISCOUNT_HASH)
          {
            return PricingRuleType::DISCOUNT;
          }
          else if (hashCode == TIERING_HASH)
          {
            return PricingRuleType::TIERING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingRuleType>(hashCode);
          }

          return PricingRuleType::NOT_SET;
        }

        Aws::String GetNameForPricingRuleType(PricingRuleType enumValue)
        {
          switch(enumValue)
          {
          case PricingRuleType::NOT_SET:
            return {};
          case PricingRuleType::MARKUP:
            return "MARKUP";
          case PricingRuleType::DISCOUNT:
            return "DISCOUNT";
          case PricingRuleType::TIERING:
            return "TIERING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingRuleTypeMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
