/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservedInstanceState.h>
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
      namespace ReservedInstanceStateMapper
      {

        static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");
        static const int retired_HASH = HashingUtils::HashString("retired");
        static const int queued_HASH = HashingUtils::HashString("queued");
        static const int queued_deleted_HASH = HashingUtils::HashString("queued-deleted");


        ReservedInstanceState GetReservedInstanceStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == payment_pending_HASH)
          {
            return ReservedInstanceState::payment_pending;
          }
          else if (hashCode == active_HASH)
          {
            return ReservedInstanceState::active;
          }
          else if (hashCode == payment_failed_HASH)
          {
            return ReservedInstanceState::payment_failed;
          }
          else if (hashCode == retired_HASH)
          {
            return ReservedInstanceState::retired;
          }
          else if (hashCode == queued_HASH)
          {
            return ReservedInstanceState::queued;
          }
          else if (hashCode == queued_deleted_HASH)
          {
            return ReservedInstanceState::queued_deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReservedInstanceState>(hashCode);
          }

          return ReservedInstanceState::NOT_SET;
        }

        Aws::String GetNameForReservedInstanceState(ReservedInstanceState enumValue)
        {
          switch(enumValue)
          {
          case ReservedInstanceState::payment_pending:
            return "payment-pending";
          case ReservedInstanceState::active:
            return "active";
          case ReservedInstanceState::payment_failed:
            return "payment-failed";
          case ReservedInstanceState::retired:
            return "retired";
          case ReservedInstanceState::queued:
            return "queued";
          case ReservedInstanceState::queued_deleted:
            return "queued-deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReservedInstanceStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
