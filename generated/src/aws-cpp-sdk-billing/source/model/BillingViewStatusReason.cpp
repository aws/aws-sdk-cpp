/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewStatusReason.h>
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
      namespace BillingViewStatusReasonMapper
      {

        static const int SOURCE_VIEW_UNHEALTHY_HASH = HashingUtils::HashString("SOURCE_VIEW_UNHEALTHY");
        static const int SOURCE_VIEW_UPDATING_HASH = HashingUtils::HashString("SOURCE_VIEW_UPDATING");
        static const int SOURCE_VIEW_ACCESS_DENIED_HASH = HashingUtils::HashString("SOURCE_VIEW_ACCESS_DENIED");
        static const int SOURCE_VIEW_NOT_FOUND_HASH = HashingUtils::HashString("SOURCE_VIEW_NOT_FOUND");
        static const int CYCLIC_DEPENDENCY_HASH = HashingUtils::HashString("CYCLIC_DEPENDENCY");
        static const int SOURCE_VIEW_DEPTH_EXCEEDED_HASH = HashingUtils::HashString("SOURCE_VIEW_DEPTH_EXCEEDED");
        static const int AGGREGATE_SOURCE_HASH = HashingUtils::HashString("AGGREGATE_SOURCE");
        static const int VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT_HASH = HashingUtils::HashString("VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT");


        BillingViewStatusReason GetBillingViewStatusReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SOURCE_VIEW_UNHEALTHY_HASH)
          {
            return BillingViewStatusReason::SOURCE_VIEW_UNHEALTHY;
          }
          else if (hashCode == SOURCE_VIEW_UPDATING_HASH)
          {
            return BillingViewStatusReason::SOURCE_VIEW_UPDATING;
          }
          else if (hashCode == SOURCE_VIEW_ACCESS_DENIED_HASH)
          {
            return BillingViewStatusReason::SOURCE_VIEW_ACCESS_DENIED;
          }
          else if (hashCode == SOURCE_VIEW_NOT_FOUND_HASH)
          {
            return BillingViewStatusReason::SOURCE_VIEW_NOT_FOUND;
          }
          else if (hashCode == CYCLIC_DEPENDENCY_HASH)
          {
            return BillingViewStatusReason::CYCLIC_DEPENDENCY;
          }
          else if (hashCode == SOURCE_VIEW_DEPTH_EXCEEDED_HASH)
          {
            return BillingViewStatusReason::SOURCE_VIEW_DEPTH_EXCEEDED;
          }
          else if (hashCode == AGGREGATE_SOURCE_HASH)
          {
            return BillingViewStatusReason::AGGREGATE_SOURCE;
          }
          else if (hashCode == VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT_HASH)
          {
            return BillingViewStatusReason::VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingViewStatusReason>(hashCode);
          }

          return BillingViewStatusReason::NOT_SET;
        }

        Aws::String GetNameForBillingViewStatusReason(BillingViewStatusReason enumValue)
        {
          switch(enumValue)
          {
          case BillingViewStatusReason::NOT_SET:
            return {};
          case BillingViewStatusReason::SOURCE_VIEW_UNHEALTHY:
            return "SOURCE_VIEW_UNHEALTHY";
          case BillingViewStatusReason::SOURCE_VIEW_UPDATING:
            return "SOURCE_VIEW_UPDATING";
          case BillingViewStatusReason::SOURCE_VIEW_ACCESS_DENIED:
            return "SOURCE_VIEW_ACCESS_DENIED";
          case BillingViewStatusReason::SOURCE_VIEW_NOT_FOUND:
            return "SOURCE_VIEW_NOT_FOUND";
          case BillingViewStatusReason::CYCLIC_DEPENDENCY:
            return "CYCLIC_DEPENDENCY";
          case BillingViewStatusReason::SOURCE_VIEW_DEPTH_EXCEEDED:
            return "SOURCE_VIEW_DEPTH_EXCEEDED";
          case BillingViewStatusReason::AGGREGATE_SOURCE:
            return "AGGREGATE_SOURCE";
          case BillingViewStatusReason::VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT:
            return "VIEW_OWNER_NOT_MANAGEMENT_ACCOUNT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingViewStatusReasonMapper
    } // namespace Model
  } // namespace Billing
} // namespace Aws
