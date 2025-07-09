/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityBlockResourceState.h>
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
      namespace CapacityBlockResourceStateMapper
      {

        static const int active_HASH = HashingUtils::HashString("active");
        static const int expired_HASH = HashingUtils::HashString("expired");
        static const int unavailable_HASH = HashingUtils::HashString("unavailable");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int scheduled_HASH = HashingUtils::HashString("scheduled");
        static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
        static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");


        CapacityBlockResourceState GetCapacityBlockResourceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == active_HASH)
          {
            return CapacityBlockResourceState::active;
          }
          else if (hashCode == expired_HASH)
          {
            return CapacityBlockResourceState::expired;
          }
          else if (hashCode == unavailable_HASH)
          {
            return CapacityBlockResourceState::unavailable;
          }
          else if (hashCode == cancelled_HASH)
          {
            return CapacityBlockResourceState::cancelled;
          }
          else if (hashCode == failed_HASH)
          {
            return CapacityBlockResourceState::failed;
          }
          else if (hashCode == scheduled_HASH)
          {
            return CapacityBlockResourceState::scheduled;
          }
          else if (hashCode == payment_pending_HASH)
          {
            return CapacityBlockResourceState::payment_pending;
          }
          else if (hashCode == payment_failed_HASH)
          {
            return CapacityBlockResourceState::payment_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CapacityBlockResourceState>(hashCode);
          }

          return CapacityBlockResourceState::NOT_SET;
        }

        Aws::String GetNameForCapacityBlockResourceState(CapacityBlockResourceState enumValue)
        {
          switch(enumValue)
          {
          case CapacityBlockResourceState::NOT_SET:
            return {};
          case CapacityBlockResourceState::active:
            return "active";
          case CapacityBlockResourceState::expired:
            return "expired";
          case CapacityBlockResourceState::unavailable:
            return "unavailable";
          case CapacityBlockResourceState::cancelled:
            return "cancelled";
          case CapacityBlockResourceState::failed:
            return "failed";
          case CapacityBlockResourceState::scheduled:
            return "scheduled";
          case CapacityBlockResourceState::payment_pending:
            return "payment-pending";
          case CapacityBlockResourceState::payment_failed:
            return "payment-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CapacityBlockResourceStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
