/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/savingsplans/model/SavingsPlanState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SavingsPlans
  {
    namespace Model
    {
      namespace SavingsPlanStateMapper
      {

        static const int payment_pending_HASH = HashingUtils::HashString("payment-pending");
        static const int payment_failed_HASH = HashingUtils::HashString("payment-failed");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int retired_HASH = HashingUtils::HashString("retired");
        static const int queued_HASH = HashingUtils::HashString("queued");
        static const int queued_deleted_HASH = HashingUtils::HashString("queued-deleted");


        SavingsPlanState GetSavingsPlanStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == payment_pending_HASH)
          {
            return SavingsPlanState::payment_pending;
          }
          else if (hashCode == payment_failed_HASH)
          {
            return SavingsPlanState::payment_failed;
          }
          else if (hashCode == active_HASH)
          {
            return SavingsPlanState::active;
          }
          else if (hashCode == retired_HASH)
          {
            return SavingsPlanState::retired;
          }
          else if (hashCode == queued_HASH)
          {
            return SavingsPlanState::queued;
          }
          else if (hashCode == queued_deleted_HASH)
          {
            return SavingsPlanState::queued_deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SavingsPlanState>(hashCode);
          }

          return SavingsPlanState::NOT_SET;
        }

        Aws::String GetNameForSavingsPlanState(SavingsPlanState enumValue)
        {
          switch(enumValue)
          {
          case SavingsPlanState::payment_pending:
            return "payment-pending";
          case SavingsPlanState::payment_failed:
            return "payment-failed";
          case SavingsPlanState::active:
            return "active";
          case SavingsPlanState::retired:
            return "retired";
          case SavingsPlanState::queued:
            return "queued";
          case SavingsPlanState::queued_deleted:
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

      } // namespace SavingsPlanStateMapper
    } // namespace Model
  } // namespace SavingsPlans
} // namespace Aws
