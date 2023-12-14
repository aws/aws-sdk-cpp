/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/GroupByAttributeName.h>
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
      namespace GroupByAttributeNameMapper
      {

        static const int PRODUCT_NAME_HASH = HashingUtils::HashString("PRODUCT_NAME");
        static const int BILLING_PERIOD_HASH = HashingUtils::HashString("BILLING_PERIOD");


        GroupByAttributeName GetGroupByAttributeNameForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRODUCT_NAME_HASH)
          {
            return GroupByAttributeName::PRODUCT_NAME;
          }
          else if (hashCode == BILLING_PERIOD_HASH)
          {
            return GroupByAttributeName::BILLING_PERIOD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GroupByAttributeName>(hashCode);
          }

          return GroupByAttributeName::NOT_SET;
        }

        Aws::String GetNameForGroupByAttributeName(GroupByAttributeName enumValue)
        {
          switch(enumValue)
          {
          case GroupByAttributeName::NOT_SET:
            return {};
          case GroupByAttributeName::PRODUCT_NAME:
            return "PRODUCT_NAME";
          case GroupByAttributeName::BILLING_PERIOD:
            return "BILLING_PERIOD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GroupByAttributeNameMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
