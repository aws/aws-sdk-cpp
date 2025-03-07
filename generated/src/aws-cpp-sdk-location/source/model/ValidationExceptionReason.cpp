﻿/**
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

        static const int UnknownOperation_HASH = HashingUtils::HashString("UnknownOperation");
        static const int Missing_HASH = HashingUtils::HashString("Missing");
        static const int CannotParse_HASH = HashingUtils::HashString("CannotParse");
        static const int FieldValidationFailed_HASH = HashingUtils::HashString("FieldValidationFailed");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int UnknownField_HASH = HashingUtils::HashString("UnknownField");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          else if (hashCode == UnknownField_HASH)
          {
            return ValidationExceptionReason::UnknownField;
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
          case ValidationExceptionReason::UnknownField:
            return "UnknownField";
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
