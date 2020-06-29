/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeArtifact
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int CANNOT_PARSE_HASH = HashingUtils::HashString("CANNOT_PARSE");
        static const int ENCRYPTION_KEY_ERROR_HASH = HashingUtils::HashString("ENCRYPTION_KEY_ERROR");
        static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static const int UNKNOWN_OPERATION_HASH = HashingUtils::HashString("UNKNOWN_OPERATION");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CANNOT_PARSE_HASH)
          {
            return ValidationExceptionReason::CANNOT_PARSE;
          }
          else if (hashCode == ENCRYPTION_KEY_ERROR_HASH)
          {
            return ValidationExceptionReason::ENCRYPTION_KEY_ERROR;
          }
          else if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == UNKNOWN_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNKNOWN_OPERATION;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ValidationExceptionReason::OTHER;
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
          case ValidationExceptionReason::CANNOT_PARSE:
            return "CANNOT_PARSE";
          case ValidationExceptionReason::ENCRYPTION_KEY_ERROR:
            return "ENCRYPTION_KEY_ERROR";
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::UNKNOWN_OPERATION:
            return "UNKNOWN_OPERATION";
          case ValidationExceptionReason::OTHER:
            return "OTHER";
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
  } // namespace CodeArtifact
} // namespace Aws
