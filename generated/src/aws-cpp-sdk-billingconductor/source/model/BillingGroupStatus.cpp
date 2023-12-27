/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/BillingGroupStatus.h>
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
      namespace BillingGroupStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int PRIMARY_ACCOUNT_MISSING_HASH = HashingUtils::HashString("PRIMARY_ACCOUNT_MISSING");


        BillingGroupStatus GetBillingGroupStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return BillingGroupStatus::ACTIVE;
          }
          else if (hashCode == PRIMARY_ACCOUNT_MISSING_HASH)
          {
            return BillingGroupStatus::PRIMARY_ACCOUNT_MISSING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingGroupStatus>(hashCode);
          }

          return BillingGroupStatus::NOT_SET;
        }

        Aws::String GetNameForBillingGroupStatus(BillingGroupStatus enumValue)
        {
          switch(enumValue)
          {
          case BillingGroupStatus::NOT_SET:
            return {};
          case BillingGroupStatus::ACTIVE:
            return "ACTIVE";
          case BillingGroupStatus::PRIMARY_ACCOUNT_MISSING:
            return "PRIMARY_ACCOUNT_MISSING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingGroupStatusMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
