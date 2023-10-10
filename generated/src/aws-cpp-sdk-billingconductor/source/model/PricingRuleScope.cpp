/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/PricingRuleScope.h>
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
      namespace PricingRuleScopeMapper
      {

        static const int GLOBAL_HASH = HashingUtils::HashString("GLOBAL");
        static const int SERVICE_HASH = HashingUtils::HashString("SERVICE");
        static const int BILLING_ENTITY_HASH = HashingUtils::HashString("BILLING_ENTITY");
        static const int SKU_HASH = HashingUtils::HashString("SKU");


        PricingRuleScope GetPricingRuleScopeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GLOBAL_HASH)
          {
            return PricingRuleScope::GLOBAL;
          }
          else if (hashCode == SERVICE_HASH)
          {
            return PricingRuleScope::SERVICE;
          }
          else if (hashCode == BILLING_ENTITY_HASH)
          {
            return PricingRuleScope::BILLING_ENTITY;
          }
          else if (hashCode == SKU_HASH)
          {
            return PricingRuleScope::SKU;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PricingRuleScope>(hashCode);
          }

          return PricingRuleScope::NOT_SET;
        }

        Aws::String GetNameForPricingRuleScope(PricingRuleScope enumValue)
        {
          switch(enumValue)
          {
          case PricingRuleScope::NOT_SET:
            return {};
          case PricingRuleScope::GLOBAL:
            return "GLOBAL";
          case PricingRuleScope::SERVICE:
            return "SERVICE";
          case PricingRuleScope::BILLING_ENTITY:
            return "BILLING_ENTITY";
          case PricingRuleScope::SKU:
            return "SKU";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PricingRuleScopeMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
