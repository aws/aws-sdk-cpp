/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-zonal-shift/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ARCZonalShift
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int InvalidExpiresIn_HASH = HashingUtils::HashString("InvalidExpiresIn");
        static const int InvalidStatus_HASH = HashingUtils::HashString("InvalidStatus");
        static const int MissingValue_HASH = HashingUtils::HashString("MissingValue");
        static const int InvalidToken_HASH = HashingUtils::HashString("InvalidToken");
        static const int InvalidResourceIdentifier_HASH = HashingUtils::HashString("InvalidResourceIdentifier");
        static const int InvalidAz_HASH = HashingUtils::HashString("InvalidAz");
        static const int UnsupportedAz_HASH = HashingUtils::HashString("UnsupportedAz");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InvalidExpiresIn_HASH)
          {
            return ValidationExceptionReason::InvalidExpiresIn;
          }
          else if (hashCode == InvalidStatus_HASH)
          {
            return ValidationExceptionReason::InvalidStatus;
          }
          else if (hashCode == MissingValue_HASH)
          {
            return ValidationExceptionReason::MissingValue;
          }
          else if (hashCode == InvalidToken_HASH)
          {
            return ValidationExceptionReason::InvalidToken;
          }
          else if (hashCode == InvalidResourceIdentifier_HASH)
          {
            return ValidationExceptionReason::InvalidResourceIdentifier;
          }
          else if (hashCode == InvalidAz_HASH)
          {
            return ValidationExceptionReason::InvalidAz;
          }
          else if (hashCode == UnsupportedAz_HASH)
          {
            return ValidationExceptionReason::UnsupportedAz;
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
          case ValidationExceptionReason::InvalidExpiresIn:
            return "InvalidExpiresIn";
          case ValidationExceptionReason::InvalidStatus:
            return "InvalidStatus";
          case ValidationExceptionReason::MissingValue:
            return "MissingValue";
          case ValidationExceptionReason::InvalidToken:
            return "InvalidToken";
          case ValidationExceptionReason::InvalidResourceIdentifier:
            return "InvalidResourceIdentifier";
          case ValidationExceptionReason::InvalidAz:
            return "InvalidAz";
          case ValidationExceptionReason::UnsupportedAz:
            return "UnsupportedAz";
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
  } // namespace ARCZonalShift
} // namespace Aws
