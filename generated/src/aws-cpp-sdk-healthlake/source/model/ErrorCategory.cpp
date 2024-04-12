/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/healthlake/model/ErrorCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace HealthLake
  {
    namespace Model
    {
      namespace ErrorCategoryMapper
      {

        static const int RETRYABLE_ERROR_HASH = HashingUtils::HashString("RETRYABLE_ERROR");
        static const int NON_RETRYABLE_ERROR_HASH = HashingUtils::HashString("NON_RETRYABLE_ERROR");


        ErrorCategory GetErrorCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RETRYABLE_ERROR_HASH)
          {
            return ErrorCategory::RETRYABLE_ERROR;
          }
          else if (hashCode == NON_RETRYABLE_ERROR_HASH)
          {
            return ErrorCategory::NON_RETRYABLE_ERROR;
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
          case ErrorCategory::RETRYABLE_ERROR:
            return "RETRYABLE_ERROR";
          case ErrorCategory::NON_RETRYABLE_ERROR:
            return "NON_RETRYABLE_ERROR";
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
  } // namespace HealthLake
} // namespace Aws
