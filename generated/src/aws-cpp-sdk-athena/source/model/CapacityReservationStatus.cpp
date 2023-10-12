/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CapacityReservationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Athena
  {
    namespace Model
    {
      namespace CapacityReservationStatusMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CANCELLING_HASH = ConstExprHashingUtils::HashString("CANCELLING");
        static constexpr uint32_t CANCELLED_HASH = ConstExprHashingUtils::HashString("CANCELLED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t UPDATE_PENDING_HASH = ConstExprHashingUtils::HashString("UPDATE_PENDING");


        CapacityReservationStatus GetCapacityReservationStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return CapacityReservationStatus::PENDING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return CapacityReservationStatus::ACTIVE;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return CapacityReservationStatus::CANCELLING;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return CapacityReservationStatus::CANCELLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return CapacityReservationStatus::FAILED;
          }
          else if (hashCode == UPDATE_PENDING_HASH)
          {
            return CapacityReservationStatus::UPDATE_PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityReservationStatus>(hashCode);
          }

          return CapacityReservationStatus::NOT_SET;
        }

        Aws::String GetNameForCapacityReservationStatus(CapacityReservationStatus enumValue)
        {
          switch(enumValue)
          {
          case CapacityReservationStatus::NOT_SET:
            return {};
          case CapacityReservationStatus::PENDING:
            return "PENDING";
          case CapacityReservationStatus::ACTIVE:
            return "ACTIVE";
          case CapacityReservationStatus::CANCELLING:
            return "CANCELLING";
          case CapacityReservationStatus::CANCELLED:
            return "CANCELLED";
          case CapacityReservationStatus::FAILED:
            return "FAILED";
          case CapacityReservationStatus::UPDATE_PENDING:
            return "UPDATE_PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityReservationStatusMapper
    } // namespace Model
  } // namespace Athena
} // namespace Aws
