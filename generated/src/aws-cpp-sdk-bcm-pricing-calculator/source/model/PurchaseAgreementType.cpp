/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/PurchaseAgreementType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BCMPricingCalculator
  {
    namespace Model
    {
      namespace PurchaseAgreementTypeMapper
      {

        static const int SAVINGS_PLANS_HASH = HashingUtils::HashString("SAVINGS_PLANS");
        static const int RESERVED_INSTANCE_HASH = HashingUtils::HashString("RESERVED_INSTANCE");


        PurchaseAgreementType GetPurchaseAgreementTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAVINGS_PLANS_HASH)
          {
            return PurchaseAgreementType::SAVINGS_PLANS;
          }
          else if (hashCode == RESERVED_INSTANCE_HASH)
          {
            return PurchaseAgreementType::RESERVED_INSTANCE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PurchaseAgreementType>(hashCode);
          }

          return PurchaseAgreementType::NOT_SET;
        }

        Aws::String GetNameForPurchaseAgreementType(PurchaseAgreementType enumValue)
        {
          switch(enumValue)
          {
          case PurchaseAgreementType::NOT_SET:
            return {};
          case PurchaseAgreementType::SAVINGS_PLANS:
            return "SAVINGS_PLANS";
          case PurchaseAgreementType::RESERVED_INSTANCE:
            return "RESERVED_INSTANCE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PurchaseAgreementTypeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
