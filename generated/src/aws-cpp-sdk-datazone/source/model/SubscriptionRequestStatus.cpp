/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SubscriptionRequestStatus.h>
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
      namespace SubscriptionRequestStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ACCEPTED_HASH = HashingUtils::HashString("ACCEPTED");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");


        SubscriptionRequestStatus GetSubscriptionRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return SubscriptionRequestStatus::PENDING;
          }
          else if (hashCode == ACCEPTED_HASH)
          {
            return SubscriptionRequestStatus::ACCEPTED;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return SubscriptionRequestStatus::REJECTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SubscriptionRequestStatus>(hashCode);
          }

          return SubscriptionRequestStatus::NOT_SET;
        }

        Aws::String GetNameForSubscriptionRequestStatus(SubscriptionRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case SubscriptionRequestStatus::NOT_SET:
            return {};
          case SubscriptionRequestStatus::PENDING:
            return "PENDING";
          case SubscriptionRequestStatus::ACCEPTED:
            return "ACCEPTED";
          case SubscriptionRequestStatus::REJECTED:
            return "REJECTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SubscriptionRequestStatusMapper
    } // namespace Model
  } // namespace DataZone
} // namespace Aws
