/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t UnknownOperation_HASH = ConstExprHashingUtils::HashString("UnknownOperation");
        static constexpr uint32_t Missing_HASH = ConstExprHashingUtils::HashString("Missing");
        static constexpr uint32_t CannotParse_HASH = ConstExprHashingUtils::HashString("CannotParse");
        static constexpr uint32_t FieldValidationFailed_HASH = ConstExprHashingUtils::HashString("FieldValidationFailed");
        static constexpr uint32_t Other_HASH = ConstExprHashingUtils::HashString("Other");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UnknownOperation_HASH)
          {
            return ValidationExceptionReason::UnknownOperation;
          }
          else if (hashCode == Missing_HASH)
          {
            return ValidationExceptionReason::Missing;
          }
          else if (hashCode == CannotParse_HASH)
          {
            return ValidationExceptionReason::CannotParse;
          }
          else if (hashCode == FieldValidationFailed_HASH)
          {
            return ValidationExceptionReason::FieldValidationFailed;
          }
          else if (hashCode == Other_HASH)
          {
            return ValidationExceptionReason::Other;
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
          case ValidationExceptionReason::UnknownOperation:
            return "UnknownOperation";
          case ValidationExceptionReason::Missing:
            return "Missing";
          case ValidationExceptionReason::CannotParse:
            return "CannotParse";
          case ValidationExceptionReason::FieldValidationFailed:
            return "FieldValidationFailed";
          case ValidationExceptionReason::Other:
            return "Other";
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
  } // namespace LocationService
} // namespace Aws
