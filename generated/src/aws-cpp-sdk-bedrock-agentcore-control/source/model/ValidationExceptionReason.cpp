/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCoreControl
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int CannotParse_HASH = HashingUtils::HashString("CannotParse");
        static const int FieldValidationFailed_HASH = HashingUtils::HashString("FieldValidationFailed");
        static const int IdempotentParameterMismatchException_HASH = HashingUtils::HashString("IdempotentParameterMismatchException");
        static const int EventInOtherSession_HASH = HashingUtils::HashString("EventInOtherSession");
        static const int ResourceConflict_HASH = HashingUtils::HashString("ResourceConflict");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CannotParse_HASH)
          {
            return ValidationExceptionReason::CannotParse;
          }
          else if (hashCode == FieldValidationFailed_HASH)
          {
            return ValidationExceptionReason::FieldValidationFailed;
          }
          else if (hashCode == IdempotentParameterMismatchException_HASH)
          {
            return ValidationExceptionReason::IdempotentParameterMismatchException;
          }
          else if (hashCode == EventInOtherSession_HASH)
          {
            return ValidationExceptionReason::EventInOtherSession;
          }
          else if (hashCode == ResourceConflict_HASH)
          {
            return ValidationExceptionReason::ResourceConflict;
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
          case ValidationExceptionReason::CannotParse:
            return "CannotParse";
          case ValidationExceptionReason::FieldValidationFailed:
            return "FieldValidationFailed";
          case ValidationExceptionReason::IdempotentParameterMismatchException:
            return "IdempotentParameterMismatchException";
          case ValidationExceptionReason::EventInOtherSession:
            return "EventInOtherSession";
          case ValidationExceptionReason::ResourceConflict:
            return "ResourceConflict";
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
  } // namespace BedrockAgentCoreControl
} // namespace Aws
