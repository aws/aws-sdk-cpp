/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationBillingRequestStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace CapacityReservationBillingRequestStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int accepted_HASH = HashingUtils::HashString("accepted");
        static const int rejected_HASH = HashingUtils::HashString("rejected");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int revoked_HASH = HashingUtils::HashString("revoked");
        static const int expired_HASH = HashingUtils::HashString("expired");


        CapacityReservationBillingRequestStatus GetCapacityReservationBillingRequestStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return CapacityReservationBillingRequestStatus::pending;
          }
          else if (hashCode == accepted_HASH)
          {
            return CapacityReservationBillingRequestStatus::accepted;
          }
          else if (hashCode == rejected_HASH)
          {
            return CapacityReservationBillingRequestStatus::rejected;
          }
          else if (hashCode == cancelled_HASH)
          {
            return CapacityReservationBillingRequestStatus::cancelled;
          }
          else if (hashCode == revoked_HASH)
          {
            return CapacityReservationBillingRequestStatus::revoked;
          }
          else if (hashCode == expired_HASH)
          {
            return CapacityReservationBillingRequestStatus::expired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationBillingRequestStatus>(hashCode);
          }

          return CapacityReservationBillingRequestStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationBillingRequestStatus(CapacityReservationBillingRequestStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationBillingRequestStatus::NOT_SET:
            return {};
          case CapacityReservationBillingRequestStatus::pending:
            return "pending";
          case CapacityReservationBillingRequestStatus::accepted:
            return "accepted";
          case CapacityReservationBillingRequestStatus::rejected:
            return "rejected";
          case CapacityReservationBillingRequestStatus::cancelled:
            return "cancelled";
          case CapacityReservationBillingRequestStatus::revoked:
            return "revoked";
          case CapacityReservationBillingRequestStatus::expired:
            return "expired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationBillingRequestStatusMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
