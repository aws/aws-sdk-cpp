/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationState.h>
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
      namespace CapacityReservationStateMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int expired_HASH = HashingUtils::HashString("expired");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int failed_HASH = HashingUtils::HashString("failed");


        CapacityReservationState GetCapacityReservationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return CapacityReservationState::active;
          }
          else if (hashCode == expired_HASH)
          {
            return CapacityReservationState::expired;
          }
          else if (hashCode == cancelled_HASH)
          {
            return CapacityReservationState::cancelled;
          }
          else if (hashCode == pending_HASH)
          {
            return CapacityReservationState::pending;
          }
          else if (hashCode == failed_HASH)
          {
            return CapacityReservationState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationState>(hashCode);
          }

          return CapacityReservationState::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationState(CapacityReservationState enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationState::active:
            return "active";
          case CapacityReservationState::expired:
            return "expired";
          case CapacityReservationState::cancelled:
            return "cancelled";
          case CapacityReservationState::pending:
            return "pending";
          case CapacityReservationState::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
