/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Currency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace CurrencyMapper
      {

        static const int USD_HASH = HashingUtils::HashString("USD");
        static const int CNY_HASH = HashingUtils::HashString("CNY");


        Currency GetCurrencyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USD_HASH)
          {
            return Currency::USD;
          }
          else if (hashCode == CNY_HASH)
          {
            return Currency::CNY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Currency>(hashCode);
          }

          return Currency::NOT_SET;
        }

        Aws::String GetNameForCurrency(Currency enumValue)
        {
          switch(enumValue)
          {
          case Currency::NOT_SET:
            return {};
          case Currency::USD:
            return "USD";
          case Currency::CNY:
            return "CNY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CurrencyMapper
    } // namespace Model
  } // namespace ComputeOptimizer
} // namespace Aws
