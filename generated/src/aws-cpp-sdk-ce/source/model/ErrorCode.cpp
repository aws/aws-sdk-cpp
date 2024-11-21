/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/ErrorCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CostExplorer
  {
    namespace Model
    {
      namespace ErrorCodeMapper
      {

        static const int NO_USAGE_FOUND_HASH = HashingUtils::HashString("NO_USAGE_FOUND");
        static const int INTERNAL_FAILURE_HASH = HashingUtils::HashString("INTERNAL_FAILURE");
        static const int INVALID_SAVINGS_PLANS_TO_ADD_HASH = HashingUtils::HashString("INVALID_SAVINGS_PLANS_TO_ADD");
        static const int INVALID_SAVINGS_PLANS_TO_EXCLUDE_HASH = HashingUtils::HashString("INVALID_SAVINGS_PLANS_TO_EXCLUDE");
        static const int INVALID_ACCOUNT_ID_HASH = HashingUtils::HashString("INVALID_ACCOUNT_ID");


        ErrorCode GetErrorCodeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NO_USAGE_FOUND_HASH)
          {
            return ErrorCode::NO_USAGE_FOUND;
          }
          else if (hashCode == INTERNAL_FAILURE_HASH)
          {
            return ErrorCode::INTERNAL_FAILURE;
          }
          else if (hashCode == INVALID_SAVINGS_PLANS_TO_ADD_HASH)
          {
            return ErrorCode::INVALID_SAVINGS_PLANS_TO_ADD;
          }
          else if (hashCode == INVALID_SAVINGS_PLANS_TO_EXCLUDE_HASH)
          {
            return ErrorCode::INVALID_SAVINGS_PLANS_TO_EXCLUDE;
          }
          else if (hashCode == INVALID_ACCOUNT_ID_HASH)
          {
            return ErrorCode::INVALID_ACCOUNT_ID;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ErrorCode>(hashCode);
          }

          return ErrorCode::NOT_SET;
        }

        Aws::String GetNameForErrorCode(ErrorCode enumValue)
        {
          switch(enumValue)
          {
          case ErrorCode::NOT_SET:
            return {};
          case ErrorCode::NO_USAGE_FOUND:
            return "NO_USAGE_FOUND";
          case ErrorCode::INTERNAL_FAILURE:
            return "INTERNAL_FAILURE";
          case ErrorCode::INVALID_SAVINGS_PLANS_TO_ADD:
            return "INVALID_SAVINGS_PLANS_TO_ADD";
          case ErrorCode::INVALID_SAVINGS_PLANS_TO_EXCLUDE:
            return "INVALID_SAVINGS_PLANS_TO_EXCLUDE";
          case ErrorCode::INVALID_ACCOUNT_ID:
            return "INVALID_ACCOUNT_ID";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ErrorCodeMapper
    } // namespace Model
  } // namespace CostExplorer
} // namespace Aws
