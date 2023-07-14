/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/PaymentOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace PaymentOptionMapper
      {

        static const int NO_UPFRONT_HASH = HashingUtils::HashString("NO_UPFRONT");
        static const int PARTIAL_UPFRONT_HASH = HashingUtils::HashString("PARTIAL_UPFRONT");
        static const int ALL_UPFRONT_HASH = HashingUtils::HashString("ALL_UPFRONT");
        static const int LIGHT_UTILIZATION_HASH = HashingUtils::HashString("LIGHT_UTILIZATION");
        static const int MEDIUM_UTILIZATION_HASH = HashingUtils::HashString("MEDIUM_UTILIZATION");
        static const int HEAVY_UTILIZATION_HASH = HashingUtils::HashString("HEAVY_UTILIZATION");


        PaymentOption GetPaymentOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_UPFRONT_HASH)
          {
            return PaymentOption::NO_UPFRONT;
          }
          else if (hashCode == PARTIAL_UPFRONT_HASH)
          {
            return PaymentOption::PARTIAL_UPFRONT;
          }
          else if (hashCode == ALL_UPFRONT_HASH)
          {
            return PaymentOption::ALL_UPFRONT;
          }
          else if (hashCode == LIGHT_UTILIZATION_HASH)
          {
            return PaymentOption::LIGHT_UTILIZATION;
          }
          else if (hashCode == MEDIUM_UTILIZATION_HASH)
          {
            return PaymentOption::MEDIUM_UTILIZATION;
          }
          else if (hashCode == HEAVY_UTILIZATION_HASH)
          {
            return PaymentOption::HEAVY_UTILIZATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentOption>(hashCode);
          }

          return PaymentOption::NOT_SET;
        }

        Aws::String GetNameForPaymentOption(PaymentOption enumValue)
        {
          switch(enumValue)
          {
          case PaymentOption::NO_UPFRONT:
            return "NO_UPFRONT";
          case PaymentOption::PARTIAL_UPFRONT:
            return "PARTIAL_UPFRONT";
          case PaymentOption::ALL_UPFRONT:
            return "ALL_UPFRONT";
          case PaymentOption::LIGHT_UTILIZATION:
            return "LIGHT_UTILIZATION";
          case PaymentOption::MEDIUM_UTILIZATION:
            return "MEDIUM_UTILIZATION";
          case PaymentOption::HEAVY_UTILIZATION:
            return "HEAVY_UTILIZATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentOptionMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
