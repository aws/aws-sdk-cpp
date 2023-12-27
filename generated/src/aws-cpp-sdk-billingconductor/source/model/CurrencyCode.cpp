﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/CurrencyCode.h>
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
      namespace CurrencyCodeMapper
      {

        static const int USD_HASH = HashingUtils::HashString("USD");
        static const int CNY_HASH = HashingUtils::HashString("CNY");


        CurrencyCode GetCurrencyCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USD_HASH)
          {
            return CurrencyCode::USD;
          }
          else if (hashCode == CNY_HASH)
          {
            return CurrencyCode::CNY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrencyCode>(hashCode);
          }

          return CurrencyCode::NOT_SET;
        }

        Aws::String GetNameForCurrencyCode(CurrencyCode enumValue)
        {
          switch(enumValue)
          {
          case CurrencyCode::NOT_SET:
            return {};
          case CurrencyCode::USD:
            return "USD";
          case CurrencyCode::CNY:
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

      } // namespace CurrencyCodeMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
