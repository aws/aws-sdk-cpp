/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector-scan/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace inspectorscan
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int UNKNOWN_OPERATION_HASH = HashingUtils::HashString("UNKNOWN_OPERATION");
        static const int CANNOT_PARSE_HASH = HashingUtils::HashString("CANNOT_PARSE");
        static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static const int UNSUPPORTED_SBOM_TYPE_HASH = HashingUtils::HashString("UNSUPPORTED_SBOM_TYPE");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNKNOWN_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNKNOWN_OPERATION;
          }
          else if (hashCode == CANNOT_PARSE_HASH)
          {
            return ValidationExceptionReason::CANNOT_PARSE;
          }
          else if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == UNSUPPORTED_SBOM_TYPE_HASH)
          {
            return ValidationExceptionReason::UNSUPPORTED_SBOM_TYPE;
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
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::UNKNOWN_OPERATION:
            return "UNKNOWN_OPERATION";
          case ValidationExceptionReason::CANNOT_PARSE:
            return "CANNOT_PARSE";
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::UNSUPPORTED_SBOM_TYPE:
            return "UNSUPPORTED_SBOM_TYPE";
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
  } // namespace inspectorscan
} // namespace Aws
