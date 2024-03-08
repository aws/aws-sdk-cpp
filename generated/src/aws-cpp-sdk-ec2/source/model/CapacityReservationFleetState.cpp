/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationFleetState.h>
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
      namespace CapacityReservationFleetStateMapper
      {

        static const int submitted_HASH = HashingUtils::HashString("submitted");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int partially_fulfilled_HASH = HashingUtils::HashString("partially_fulfilled");
        static const int expiring_HASH = HashingUtils::HashString("expiring");
        static const int expired_HASH = HashingUtils::HashString("expired");
        static const int cancelling_HASH = HashingUtils::HashString("cancelling");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int failed_HASH = HashingUtils::HashString("failed");


        CapacityReservationFleetState GetCapacityReservationFleetStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == submitted_HASH)
          {
            return CapacityReservationFleetState::submitted;
          }
          else if (hashCode == modifying_HASH)
          {
            return CapacityReservationFleetState::modifying;
          }
          else if (hashCode == active_HASH)
          {
            return CapacityReservationFleetState::active;
          }
          else if (hashCode == partially_fulfilled_HASH)
          {
            return CapacityReservationFleetState::partially_fulfilled;
          }
          else if (hashCode == expiring_HASH)
          {
            return CapacityReservationFleetState::expiring;
          }
          else if (hashCode == expired_HASH)
          {
            return CapacityReservationFleetState::expired;
          }
          else if (hashCode == cancelling_HASH)
          {
            return CapacityReservationFleetState::cancelling;
          }
          else if (hashCode == cancelled_HASH)
          {
            return CapacityReservationFleetState::cancelled;
          }
          else if (hashCode == failed_HASH)
          {
            return CapacityReservationFleetState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationFleetState>(hashCode);
          }

          return CapacityReservationFleetState::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationFleetState(CapacityReservationFleetState enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationFleetState::NOT_SET:
            return {};
          case CapacityReservationFleetState::submitted:
            return "submitted";
          case CapacityReservationFleetState::modifying:
            return "modifying";
          case CapacityReservationFleetState::active:
            return "active";
          case CapacityReservationFleetState::partially_fulfilled:
            return "partially_fulfilled";
          case CapacityReservationFleetState::expiring:
            return "expiring";
          case CapacityReservationFleetState::expired:
            return "expired";
          case CapacityReservationFleetState::cancelling:
            return "cancelling";
          case CapacityReservationFleetState::cancelled:
            return "cancelled";
          case CapacityReservationFleetState::failed:
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

      } // namespace CapacityReservationFleetStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
