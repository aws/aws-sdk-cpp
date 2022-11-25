/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservationState.h>
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
      namespace ReservationStateMapper
      {

        static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
        static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int retired_HASH = HashingUtils::HashString("retired");


        ReservationState GetReservationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == payment_pending_HASH)
          {
            return ReservationState::payment_pending;
          }
          else if (hashCode == payment_failed_HASH)
          {
            return ReservationState::payment_failed;
          }
          else if (hashCode == active_HASH)
          {
            return ReservationState::active;
          }
          else if (hashCode == retired_HASH)
          {
            return ReservationState::retired;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservationState>(hashCode);
          }

          return ReservationState::NOT_SET;
        }

        Aws::String GetNameForReservationState(ReservationState enumValue)
        {
          switch(enumValue)
          {
          case ReservationState::payment_pending:
            return "payment-pending";
          case ReservationState::payment_failed:
            return "payment-failed";
          case ReservationState::active:
            return "active";
          case ReservationState::retired:
            return "retired";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservationStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
