/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Billing
  {
    namespace Model
    {
      namespace BillingViewTypeMapper
      {

        static const int PRIMARY_HASH = HashingUtils::HashString("PRIMARY");
        static const int BILLING_GROUP_HASH = HashingUtils::HashString("BILLING_GROUP");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");


        BillingViewType GetBillingViewTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRIMARY_HASH)
          {
            return BillingViewType::PRIMARY;
          }
          else if (hashCode == BILLING_GROUP_HASH)
          {
            return BillingViewType::BILLING_GROUP;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return BillingViewType::CUSTOM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingViewType>(hashCode);
          }

          return BillingViewType::NOT_SET;
        }

        Aws::String GetNameForBillingViewType(BillingViewType enumValue)
        {
          switch(enumValue)
          {
          case BillingViewType::NOT_SET:
            return {};
          case BillingViewType::PRIMARY:
            return "PRIMARY";
          case BillingViewType::BILLING_GROUP:
            return "BILLING_GROUP";
          case BillingViewType::CUSTOM:
            return "CUSTOM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingViewTypeMapper
    } // namespace Model
  } // namespace Billing
} // namespace Aws
