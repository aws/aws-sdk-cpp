/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-pricing-calculator/model/RateType.h>
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
      namespace RateTypeMapper
      {

        static const int BEFORE_DISCOUNTS_HASH = HashingUtils::HashString("BEFORE_DISCOUNTS");
        static const int AFTER_DISCOUNTS_HASH = HashingUtils::HashString("AFTER_DISCOUNTS");
        static const int AFTER_DISCOUNTS_AND_COMMITMENTS_HASH = HashingUtils::HashString("AFTER_DISCOUNTS_AND_COMMITMENTS");


        RateType GetRateTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEFORE_DISCOUNTS_HASH)
          {
            return RateType::BEFORE_DISCOUNTS;
          }
          else if (hashCode == AFTER_DISCOUNTS_HASH)
          {
            return RateType::AFTER_DISCOUNTS;
          }
          else if (hashCode == AFTER_DISCOUNTS_AND_COMMITMENTS_HASH)
          {
            return RateType::AFTER_DISCOUNTS_AND_COMMITMENTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RateType>(hashCode);
          }

          return RateType::NOT_SET;
        }

        Aws::String GetNameForRateType(RateType enumValue)
        {
          switch(enumValue)
          {
          case RateType::NOT_SET:
            return {};
          case RateType::BEFORE_DISCOUNTS:
            return "BEFORE_DISCOUNTS";
          case RateType::AFTER_DISCOUNTS:
            return "AFTER_DISCOUNTS";
          case RateType::AFTER_DISCOUNTS_AND_COMMITMENTS:
            return "AFTER_DISCOUNTS_AND_COMMITMENTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RateTypeMapper
    } // namespace Model
  } // namespace BCMPricingCalculator
} // namespace Aws
