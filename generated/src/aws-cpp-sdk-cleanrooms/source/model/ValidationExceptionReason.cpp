/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static constexpr uint32_t FIELD_VALIDATION_FAILED_HASH = ConstExprHashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static constexpr uint32_t INVALID_CONFIGURATION_HASH = ConstExprHashingUtils::HashString("INVALID_CONFIGURATION");
        static constexpr uint32_t INVALID_QUERY_HASH = ConstExprHashingUtils::HashString("INVALID_QUERY");
        static constexpr uint32_t IAM_SYNCHRONIZATION_DELAY_HASH = ConstExprHashingUtils::HashString("IAM_SYNCHRONIZATION_DELAY");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == INVALID_CONFIGURATION_HASH)
          {
            return ValidationExceptionReason::INVALID_CONFIGURATION;
          }
          else if (hashCode == INVALID_QUERY_HASH)
          {
            return ValidationExceptionReason::INVALID_QUERY;
          }
          else if (hashCode == IAM_SYNCHRONIZATION_DELAY_HASH)
          {
            return ValidationExceptionReason::IAM_SYNCHRONIZATION_DELAY;
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
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::INVALID_CONFIGURATION:
            return "INVALID_CONFIGURATION";
          case ValidationExceptionReason::INVALID_QUERY:
            return "INVALID_QUERY";
          case ValidationExceptionReason::IAM_SYNCHRONIZATION_DELAY:
            return "IAM_SYNCHRONIZATION_DELAY";
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
  } // namespace CleanRooms
} // namespace Aws
