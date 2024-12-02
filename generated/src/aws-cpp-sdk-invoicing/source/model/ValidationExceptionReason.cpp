/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/invoicing/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Invoicing
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int nonMemberPresent_HASH = HashingUtils::HashString("nonMemberPresent");
        static const int maxAccountsExceeded_HASH = HashingUtils::HashString("maxAccountsExceeded");
        static const int maxInvoiceUnitsExceeded_HASH = HashingUtils::HashString("maxInvoiceUnitsExceeded");
        static const int duplicateInvoiceUnit_HASH = HashingUtils::HashString("duplicateInvoiceUnit");
        static const int mutualExclusionError_HASH = HashingUtils::HashString("mutualExclusionError");
        static const int accountMembershipError_HASH = HashingUtils::HashString("accountMembershipError");
        static const int taxSettingsError_HASH = HashingUtils::HashString("taxSettingsError");
        static const int expiredNextToken_HASH = HashingUtils::HashString("expiredNextToken");
        static const int invalidNextToken_HASH = HashingUtils::HashString("invalidNextToken");
        static const int invalidInput_HASH = HashingUtils::HashString("invalidInput");
        static const int fieldValidationFailed_HASH = HashingUtils::HashString("fieldValidationFailed");
        static const int cannotParse_HASH = HashingUtils::HashString("cannotParse");
        static const int unknownOperation_HASH = HashingUtils::HashString("unknownOperation");
        static const int other_HASH = HashingUtils::HashString("other");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == nonMemberPresent_HASH)
          {
            return ValidationExceptionReason::nonMemberPresent;
          }
          else if (hashCode == maxAccountsExceeded_HASH)
          {
            return ValidationExceptionReason::maxAccountsExceeded;
          }
          else if (hashCode == maxInvoiceUnitsExceeded_HASH)
          {
            return ValidationExceptionReason::maxInvoiceUnitsExceeded;
          }
          else if (hashCode == duplicateInvoiceUnit_HASH)
          {
            return ValidationExceptionReason::duplicateInvoiceUnit;
          }
          else if (hashCode == mutualExclusionError_HASH)
          {
            return ValidationExceptionReason::mutualExclusionError;
          }
          else if (hashCode == accountMembershipError_HASH)
          {
            return ValidationExceptionReason::accountMembershipError;
          }
          else if (hashCode == taxSettingsError_HASH)
          {
            return ValidationExceptionReason::taxSettingsError;
          }
          else if (hashCode == expiredNextToken_HASH)
          {
            return ValidationExceptionReason::expiredNextToken;
          }
          else if (hashCode == invalidNextToken_HASH)
          {
            return ValidationExceptionReason::invalidNextToken;
          }
          else if (hashCode == invalidInput_HASH)
          {
            return ValidationExceptionReason::invalidInput;
          }
          else if (hashCode == fieldValidationFailed_HASH)
          {
            return ValidationExceptionReason::fieldValidationFailed;
          }
          else if (hashCode == cannotParse_HASH)
          {
            return ValidationExceptionReason::cannotParse;
          }
          else if (hashCode == unknownOperation_HASH)
          {
            return ValidationExceptionReason::unknownOperation;
          }
          else if (hashCode == other_HASH)
          {
            return ValidationExceptionReason::other;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::nonMemberPresent:
            return "nonMemberPresent";
          case ValidationExceptionReason::maxAccountsExceeded:
            return "maxAccountsExceeded";
          case ValidationExceptionReason::maxInvoiceUnitsExceeded:
            return "maxInvoiceUnitsExceeded";
          case ValidationExceptionReason::duplicateInvoiceUnit:
            return "duplicateInvoiceUnit";
          case ValidationExceptionReason::mutualExclusionError:
            return "mutualExclusionError";
          case ValidationExceptionReason::accountMembershipError:
            return "accountMembershipError";
          case ValidationExceptionReason::taxSettingsError:
            return "taxSettingsError";
          case ValidationExceptionReason::expiredNextToken:
            return "expiredNextToken";
          case ValidationExceptionReason::invalidNextToken:
            return "invalidNextToken";
          case ValidationExceptionReason::invalidInput:
            return "invalidInput";
          case ValidationExceptionReason::fieldValidationFailed:
            return "fieldValidationFailed";
          case ValidationExceptionReason::cannotParse:
            return "cannotParse";
          case ValidationExceptionReason::unknownOperation:
            return "unknownOperation";
          case ValidationExceptionReason::other:
            return "other";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace Invoicing
} // namespace Aws
