﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PaymentTerm.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace PaymentTermMapper
      {

        static const int THREE_YEARS_HASH = HashingUtils::HashString("THREE_YEARS");


        PaymentTerm GetPaymentTermForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == THREE_YEARS_HASH)
          {
            return PaymentTerm::THREE_YEARS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PaymentTerm>(hashCode);
          }

          return PaymentTerm::NOT_SET;
        }

        Aws::String GetNameForPaymentTerm(PaymentTerm enumValue)
        {
          switch(enumValue)
          {
          case PaymentTerm::THREE_YEARS:
            return "THREE_YEARS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PaymentTermMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
