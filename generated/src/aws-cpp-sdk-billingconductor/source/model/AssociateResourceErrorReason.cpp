/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billingconductor/model/AssociateResourceErrorReason.h>
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
      namespace AssociateResourceErrorReasonMapper
      {

        static const int INVALID_ARN_HASH = HashingUtils::HashString("INVALID_ARN");
        static const int SERVICE_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("SERVICE_LIMIT_EXCEEDED");
        static const int ILLEGAL_CUSTOMLINEITEM_HASH = HashingUtils::HashString("ILLEGAL_CUSTOMLINEITEM");
        static const int INTERNAL_SERVER_EXCEPTION_HASH = HashingUtils::HashString("INTERNAL_SERVER_EXCEPTION");
        static const int INVALID_BILLING_PERIOD_RANGE_HASH = HashingUtils::HashString("INVALID_BILLING_PERIOD_RANGE");


        AssociateResourceErrorReason GetAssociateResourceErrorReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INVALID_ARN_HASH)
          {
            return AssociateResourceErrorReason::INVALID_ARN;
          }
          else if (hashCode == SERVICE_LIMIT_EXCEEDED_HASH)
          {
            return AssociateResourceErrorReason::SERVICE_LIMIT_EXCEEDED;
          }
          else if (hashCode == ILLEGAL_CUSTOMLINEITEM_HASH)
          {
            return AssociateResourceErrorReason::ILLEGAL_CUSTOMLINEITEM;
          }
          else if (hashCode == INTERNAL_SERVER_EXCEPTION_HASH)
          {
            return AssociateResourceErrorReason::INTERNAL_SERVER_EXCEPTION;
          }
          else if (hashCode == INVALID_BILLING_PERIOD_RANGE_HASH)
          {
            return AssociateResourceErrorReason::INVALID_BILLING_PERIOD_RANGE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssociateResourceErrorReason>(hashCode);
          }

          return AssociateResourceErrorReason::NOT_SET;
        }

        Aws::String GetNameForAssociateResourceErrorReason(AssociateResourceErrorReason enumValue)
        {
          switch(enumValue)
          {
          case AssociateResourceErrorReason::INVALID_ARN:
            return "INVALID_ARN";
          case AssociateResourceErrorReason::SERVICE_LIMIT_EXCEEDED:
            return "SERVICE_LIMIT_EXCEEDED";
          case AssociateResourceErrorReason::ILLEGAL_CUSTOMLINEITEM:
            return "ILLEGAL_CUSTOMLINEITEM";
          case AssociateResourceErrorReason::INTERNAL_SERVER_EXCEPTION:
            return "INTERNAL_SERVER_EXCEPTION";
          case AssociateResourceErrorReason::INVALID_BILLING_PERIOD_RANGE:
            return "INVALID_BILLING_PERIOD_RANGE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssociateResourceErrorReasonMapper
    } // namespace Model
  } // namespace BillingConductor
} // namespace Aws
