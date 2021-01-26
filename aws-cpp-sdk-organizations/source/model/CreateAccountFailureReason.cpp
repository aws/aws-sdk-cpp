/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/CreateAccountFailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Organizations
  {
    namespace Model
    {
      namespace CreateAccountFailureReasonMapper
      {

        static const int ACCOUNT_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("ACCOUNT_LIMIT_EXCEEDED");
        static const int EMAIL_ALREADY_EXISTS_HASH = HashingUtils::HashString("EMAIL_ALREADY_EXISTS");
        static const int INVALID_ADDRESS_HASH = HashingUtils::HashString("INVALID_ADDRESS");
        static const int INVALID_EMAIL_HASH = HashingUtils::HashString("INVALID_EMAIL");
        static const int CONCURRENT_ACCOUNT_MODIFICATION_HASH = HashingUtils::HashString("CONCURRENT_ACCOUNT_MODIFICATION");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int GOVCLOUD_ACCOUNT_ALREADY_EXISTS_HASH = HashingUtils::HashString("GOVCLOUD_ACCOUNT_ALREADY_EXISTS");
        static const int MISSING_BUSINESS_VALIDATION_HASH = HashingUtils::HashString("MISSING_BUSINESS_VALIDATION");
        static const int MISSING_PAYMENT_INSTRUMENT_HASH = HashingUtils::HashString("MISSING_PAYMENT_INSTRUMENT");


        CreateAccountFailureReason GetCreateAccountFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACCOUNT_LIMIT_EXCEEDED_HASH)
          {
            return CreateAccountFailureReason::ACCOUNT_LIMIT_EXCEEDED;
          }
          else if (hashCode == EMAIL_ALREADY_EXISTS_HASH)
          {
            return CreateAccountFailureReason::EMAIL_ALREADY_EXISTS;
          }
          else if (hashCode == INVALID_ADDRESS_HASH)
          {
            return CreateAccountFailureReason::INVALID_ADDRESS;
          }
          else if (hashCode == INVALID_EMAIL_HASH)
          {
            return CreateAccountFailureReason::INVALID_EMAIL;
          }
          else if (hashCode == CONCURRENT_ACCOUNT_MODIFICATION_HASH)
          {
            return CreateAccountFailureReason::CONCURRENT_ACCOUNT_MODIFICATION;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return CreateAccountFailureReason::INTERNAL_FAILURE;
          }
          else if (hashCode == GOVCLOUD_ACCOUNT_ALREADY_EXISTS_HASH)
          {
            return CreateAccountFailureReason::GOVCLOUD_ACCOUNT_ALREADY_EXISTS;
          }
          else if (hashCode == MISSING_BUSINESS_VALIDATION_HASH)
          {
            return CreateAccountFailureReason::MISSING_BUSINESS_VALIDATION;
          }
          else if (hashCode == MISSING_PAYMENT_INSTRUMENT_HASH)
          {
            return CreateAccountFailureReason::MISSING_PAYMENT_INSTRUMENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CreateAccountFailureReason>(hashCode);
          }

          return CreateAccountFailureReason::NOT_SET;
        }

        Aws::String GetNameForCreateAccountFailureReason(CreateAccountFailureReason enumValue)
        {
          switch(enumValue)
          {
          case CreateAccountFailureReason::ACCOUNT_LIMIT_EXCEEDED:
            return "ACCOUNT_LIMIT_EXCEEDED";
          case CreateAccountFailureReason::EMAIL_ALREADY_EXISTS:
            return "EMAIL_ALREADY_EXISTS";
          case CreateAccountFailureReason::INVALID_ADDRESS:
            return "INVALID_ADDRESS";
          case CreateAccountFailureReason::INVALID_EMAIL:
            return "INVALID_EMAIL";
          case CreateAccountFailureReason::CONCURRENT_ACCOUNT_MODIFICATION:
            return "CONCURRENT_ACCOUNT_MODIFICATION";
          case CreateAccountFailureReason::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case CreateAccountFailureReason::GOVCLOUD_ACCOUNT_ALREADY_EXISTS:
            return "GOVCLOUD_ACCOUNT_ALREADY_EXISTS";
          case CreateAccountFailureReason::MISSING_BUSINESS_VALIDATION:
            return "MISSING_BUSINESS_VALIDATION";
          case CreateAccountFailureReason::MISSING_PAYMENT_INSTRUMENT:
            return "MISSING_PAYMENT_INSTRUMENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CreateAccountFailureReasonMapper
    } // namespace Model
  } // namespace Organizations
} // namespace Aws
