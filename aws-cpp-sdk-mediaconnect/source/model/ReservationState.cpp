/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/ReservationState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ReservationStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int EXPIRED_HASH = HashingUtils::HashString("EXPIRED");
        static const int PROCESSING_HASH = HashingUtils::HashString("PROCESSING");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        ReservationState GetReservationStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ReservationState::ACTIVE;
          }
          else if (hashCode == EXPIRED_HASH)
          {
            return ReservationState::EXPIRED;
          }
          else if (hashCode == PROCESSING_HASH)
          {
            return ReservationState::PROCESSING;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return ReservationState::CANCELED;
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
          case ReservationState::ACTIVE:
            return "ACTIVE";
          case ReservationState::EXPIRED:
            return "EXPIRED";
          case ReservationState::PROCESSING:
            return "PROCESSING";
          case ReservationState::CANCELED:
            return "CANCELED";
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
  } // namespace MediaConnect
} // namespace Aws
