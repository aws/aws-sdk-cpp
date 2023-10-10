/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace-data/model/ErrorCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FinSpaceData
  {
    namespace Model
    {
      namespace ErrorCategoryMapper
      {

        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
        static const int SERVICE_QUOTA_EXCEEDED_HASH = HashingUtils::HashString("SERVICE_QUOTA_EXCEEDED");
        static const int ACCESS_DENIED_HASH = HashingUtils::HashString("ACCESS_DENIED");
        static const int RESOURCE_NOT_FOUND_HASH = HashingUtils::HashString("RESOURCE_NOT_FOUND");
        static const int THROTTLING_HASH = HashingUtils::HashString("THROTTLING");
        static const int INTERNAL_SERVICE_EXCEPTION_HASH = HashingUtils::HashString("INTERNAL_SERVICE_EXCEPTION");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int USER_RECOVERABLE_HASH = HashingUtils::HashString("USER_RECOVERABLE");


        ErrorCategory GetErrorCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VALIDATION_HASH)
          {
            return ErrorCategory::VALIDATION;
          }
          else if (hashCode == SERVICE_QUOTA_EXCEEDED_HASH)
          {
            return ErrorCategory::SERVICE_QUOTA_EXCEEDED;
          }
          else if (hashCode == ACCESS_DENIED_HASH)
          {
            return ErrorCategory::ACCESS_DENIED;
          }
          else if (hashCode == RESOURCE_NOT_FOUND_HASH)
          {
            return ErrorCategory::RESOURCE_NOT_FOUND;
          }
          else if (hashCode == THROTTLING_HASH)
          {
            return ErrorCategory::THROTTLING;
          }
          else if (hashCode == INTERNAL_SERVICE_EXCEPTION_HASH)
          {
            return ErrorCategory::INTERNAL_SERVICE_EXCEPTION;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return ErrorCategory::CANCELLED;
          }
          else if (hashCode == USER_RECOVERABLE_HASH)
          {
            return ErrorCategory::USER_RECOVERABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCategory>(hashCode);
          }

          return ErrorCategory::NOT_SET;
        }

        Aws::String GetNameForErrorCategory(ErrorCategory enumValue)
        {
          switch(enumValue)
          {
          case ErrorCategory::NOT_SET:
            return {};
          case ErrorCategory::VALIDATION:
            return "VALIDATION";
          case ErrorCategory::SERVICE_QUOTA_EXCEEDED:
            return "SERVICE_QUOTA_EXCEEDED";
          case ErrorCategory::ACCESS_DENIED:
            return "ACCESS_DENIED";
          case ErrorCategory::RESOURCE_NOT_FOUND:
            return "RESOURCE_NOT_FOUND";
          case ErrorCategory::THROTTLING:
            return "THROTTLING";
          case ErrorCategory::INTERNAL_SERVICE_EXCEPTION:
            return "INTERNAL_SERVICE_EXCEPTION";
          case ErrorCategory::CANCELLED:
            return "CANCELLED";
          case ErrorCategory::USER_RECOVERABLE:
            return "USER_RECOVERABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCategoryMapper
    } // namespace Model
  } // namespace FinSpaceData
} // namespace Aws
