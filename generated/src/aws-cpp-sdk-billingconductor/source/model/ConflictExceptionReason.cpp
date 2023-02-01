/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/ConflictExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BillingConductor
  {
    namespace Model
    {
      namespace ConflictExceptionReasonMapper
      {

        static const int RESOURCE_NAME_CONFLICT_HASH = HashingUtils::HashString("RESOURCE_NAME_CONFLICT");
        static const int PRICING_RULE_IN_PRICING_PLAN_CONFLICT_HASH = HashingUtils::HashString("PRICING_RULE_IN_PRICING_PLAN_CONFLICT");
        static const int PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT_HASH = HashingUtils::HashString("PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT");
        static const int PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT_HASH = HashingUtils::HashString("PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT");
        static const int WRITE_CONFLICT_RETRY_HASH = HashingUtils::HashString("WRITE_CONFLICT_RETRY");


        ConflictExceptionReason GetConflictExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RESOURCE_NAME_CONFLICT_HASH)
          {
            return ConflictExceptionReason::RESOURCE_NAME_CONFLICT;
          }
          else if (hashCode == PRICING_RULE_IN_PRICING_PLAN_CONFLICT_HASH)
          {
            return ConflictExceptionReason::PRICING_RULE_IN_PRICING_PLAN_CONFLICT;
          }
          else if (hashCode == PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT_HASH)
          {
            return ConflictExceptionReason::PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT;
          }
          else if (hashCode == PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT_HASH)
          {
            return ConflictExceptionReason::PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT;
          }
          else if (hashCode == WRITE_CONFLICT_RETRY_HASH)
          {
            return ConflictExceptionReason::WRITE_CONFLICT_RETRY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ConflictExceptionReason>(hashCode);
          }

          return ConflictExceptionReason::NOT_SET;
        }

        Aws::String GetNameForConflictExceptionReason(ConflictExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ConflictExceptionReason::RESOURCE_NAME_CONFLICT:
            return "RESOURCE_NAME_CONFLICT";
          case ConflictExceptionReason::PRICING_RULE_IN_PRICING_PLAN_CONFLICT:
            return "PRICING_RULE_IN_PRICING_PLAN_CONFLICT";
          case ConflictExceptionReason::PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT:
            return "PRICING_PLAN_ATTACHED_TO_BILLING_GROUP_DELETE_CONFLICT";
          case ConflictExceptionReason::PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT:
            return "PRICING_RULE_ATTACHED_TO_PRICING_PLAN_DELETE_CONFLICT";
          case ConflictExceptionReason::WRITE_CONFLICT_RETRY:
            return "WRITE_CONFLICT_RETRY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ConflictExceptionReasonMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
