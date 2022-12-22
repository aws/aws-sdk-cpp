/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SFN
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int API_DOES_NOT_SUPPORT_LABELED_ARNS_HASH = HashingUtils::HashString("API_DOES_NOT_SUPPORT_LABELED_ARNS");
        static const int MISSING_REQUIRED_PARAMETER_HASH = HashingUtils::HashString("MISSING_REQUIRED_PARAMETER");
        static const int CANNOT_UPDATE_COMPLETED_MAP_RUN_HASH = HashingUtils::HashString("CANNOT_UPDATE_COMPLETED_MAP_RUN");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == API_DOES_NOT_SUPPORT_LABELED_ARNS_HASH)
          {
            return ValidationExceptionReason::API_DOES_NOT_SUPPORT_LABELED_ARNS;
          }
          else if (hashCode == MISSING_REQUIRED_PARAMETER_HASH)
          {
            return ValidationExceptionReason::MISSING_REQUIRED_PARAMETER;
          }
          else if (hashCode == CANNOT_UPDATE_COMPLETED_MAP_RUN_HASH)
          {
            return ValidationExceptionReason::CANNOT_UPDATE_COMPLETED_MAP_RUN;
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
          case ValidationExceptionReason::API_DOES_NOT_SUPPORT_LABELED_ARNS:
            return "API_DOES_NOT_SUPPORT_LABELED_ARNS";
          case ValidationExceptionReason::MISSING_REQUIRED_PARAMETER:
            return "MISSING_REQUIRED_PARAMETER";
          case ValidationExceptionReason::CANNOT_UPDATE_COMPLETED_MAP_RUN:
            return "CANNOT_UPDATE_COMPLETED_MAP_RUN";
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
  } // namespace SFN
} // namespace Aws
