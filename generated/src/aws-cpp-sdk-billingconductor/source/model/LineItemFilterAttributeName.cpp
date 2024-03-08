/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/LineItemFilterAttributeName.h>
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
      namespace LineItemFilterAttributeNameMapper
      {

        static const int LINE_ITEM_TYPE_HASH = HashingUtils::HashString("LINE_ITEM_TYPE");


        LineItemFilterAttributeName GetLineItemFilterAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LINE_ITEM_TYPE_HASH)
          {
            return LineItemFilterAttributeName::LINE_ITEM_TYPE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LineItemFilterAttributeName>(hashCode);
          }

          return LineItemFilterAttributeName::NOT_SET;
        }

        Aws::String GetNameForLineItemFilterAttributeName(LineItemFilterAttributeName enumValue)
        {
          switch(enumValue)
          {
          case LineItemFilterAttributeName::NOT_SET:
            return {};
          case LineItemFilterAttributeName::LINE_ITEM_TYPE:
            return "LINE_ITEM_TYPE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LineItemFilterAttributeNameMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
