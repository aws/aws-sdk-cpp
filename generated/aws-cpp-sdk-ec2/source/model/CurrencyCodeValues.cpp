/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CurrencyCodeValues.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace CurrencyCodeValuesMapper
      {

        static const int USD_HASH = HashingUtils::HashString("USD");


        CurrencyCodeValues GetCurrencyCodeValuesForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USD_HASH)
          {
            return CurrencyCodeValues::USD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CurrencyCodeValues>(hashCode);
          }

          return CurrencyCodeValues::NOT_SET;
        }

        Aws::String GetNameForCurrencyCodeValues(CurrencyCodeValues enumValue)
        {
          switch(enumValue)
          {
          case CurrencyCodeValues::USD:
            return "USD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CurrencyCodeValuesMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
