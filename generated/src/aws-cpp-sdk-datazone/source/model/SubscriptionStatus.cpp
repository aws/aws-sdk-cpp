/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataZone
  {
    namespace Model
    {
      namespace SubscriptionStatusMapper
      {

        static const int APPROVED_HASH = HashingUtils::HashString("APPROVED");
        static const int REVOKED_HASH = HashingUtils::HashString("REVOKED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");


        SubscriptionStatus GetSubscriptionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == APPROVED_HASH)
          {
            return SubscriptionStatus::APPROVED;
          }
          else if (hashCode == REVOKED_HASH)
          {
            return SubscriptionStatus::REVOKED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return SubscriptionStatus::CANCELLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionStatus>(hashCode);
          }

          return SubscriptionStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionStatus(SubscriptionStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionStatus::NOT_SET:
            return {};
          case SubscriptionStatus::APPROVED:
            return "APPROVED";
          case SubscriptionStatus::REVOKED:
            return "REVOKED";
          case SubscriptionStatus::CANCELLED:
            return "CANCELLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
