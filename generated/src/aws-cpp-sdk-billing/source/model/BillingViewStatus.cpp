/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/BillingViewStatus.h>
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
      namespace BillingViewStatusMapper
      {

        static const int HEALTHY_HASH = HashingUtils::HashString("HEALTHY");
        static const int UNHEALTHY_HASH = HashingUtils::HashString("UNHEALTHY");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        BillingViewStatus GetBillingViewStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HEALTHY_HASH)
          {
            return BillingViewStatus::HEALTHY;
          }
          else if (hashCode == UNHEALTHY_HASH)
          {
            return BillingViewStatus::UNHEALTHY;
          }
          else if (hashCode == CREATING_HASH)
          {
            return BillingViewStatus::CREATING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return BillingViewStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BillingViewStatus>(hashCode);
          }

          return BillingViewStatus::NOT_SET;
        }

        Aws::String GetNameForBillingViewStatus(BillingViewStatus enumValue)
        {
          switch(enumValue)
          {
          case BillingViewStatus::NOT_SET:
            return {};
          case BillingViewStatus::HEALTHY:
            return "HEALTHY";
          case BillingViewStatus::UNHEALTHY:
            return "UNHEALTHY";
          case BillingViewStatus::CREATING:
            return "CREATING";
          case BillingViewStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BillingViewStatusMapper
    } // namespace Model
  } // namespace Billing
} // namespace Aws
