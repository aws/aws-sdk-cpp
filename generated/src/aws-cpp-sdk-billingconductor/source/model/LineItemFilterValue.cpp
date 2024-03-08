/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/LineItemFilterValue.h>
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
      namespace LineItemFilterValueMapper
      {

        static const int SAVINGS_PLAN_NEGATION_HASH = HashingUtils::HashString("SAVINGS_PLAN_NEGATION");


        LineItemFilterValue GetLineItemFilterValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SAVINGS_PLAN_NEGATION_HASH)
          {
            return LineItemFilterValue::SAVINGS_PLAN_NEGATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineItemFilterValue>(hashCode);
          }

          return LineItemFilterValue::NOT_SET;
        }

        Aws::String GetNameForLineItemFilterValue(LineItemFilterValue enumValue)
        {
          switch(enumValue)
          {
          case LineItemFilterValue::NOT_SET:
            return {};
          case LineItemFilterValue::SAVINGS_PLAN_NEGATION:
            return "SAVINGS_PLAN_NEGATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineItemFilterValueMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
