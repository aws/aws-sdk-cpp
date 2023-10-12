/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ExecutionErrorType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Transfer
  {
    namespace Model
    {
      namespace ExecutionErrorTypeMapper
      {

        static constexpr uint32_t PERMISSION_DENIED_HASH = ConstExprHashingUtils::HashString("PERMISSION_DENIED");
        static constexpr uint32_t CUSTOM_STEP_FAILED_HASH = ConstExprHashingUtils::HashString("CUSTOM_STEP_FAILED");
        static constexpr uint32_t THROTTLED_HASH = ConstExprHashingUtils::HashString("THROTTLED");
        static constexpr uint32_t ALREADY_EXISTS_HASH = ConstExprHashingUtils::HashString("ALREADY_EXISTS");
        static constexpr uint32_t NOT_FOUND_HASH = ConstExprHashingUtils::HashString("NOT_FOUND");
        static constexpr uint32_t BAD_REQUEST_HASH = ConstExprHashingUtils::HashString("BAD_REQUEST");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");
        static constexpr uint32_t INTERNAL_SERVER_ERROR_HASH = ConstExprHashingUtils::HashString("INTERNAL_SERVER_ERROR");


        ExecutionErrorType GetExecutionErrorTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PERMISSION_DENIED_HASH)
          {
            return ExecutionErrorType::PERMISSION_DENIED;
          }
          else if (hashCode == CUSTOM_STEP_FAILED_HASH)
          {
            return ExecutionErrorType::CUSTOM_STEP_FAILED;
          }
          else if (hashCode == THROTTLED_HASH)
          {
            return ExecutionErrorType::THROTTLED;
          }
          else if (hashCode == ALREADY_EXISTS_HASH)
          {
            return ExecutionErrorType::ALREADY_EXISTS;
          }
          else if (hashCode == NOT_FOUND_HASH)
          {
            return ExecutionErrorType::NOT_FOUND;
          }
          else if (hashCode == BAD_REQUEST_HASH)
          {
            return ExecutionErrorType::BAD_REQUEST;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return ExecutionErrorType::TIMEOUT;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return ExecutionErrorType::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionErrorType>(hashCode);
          }

          return ExecutionErrorType::NOT_SET;
        }

        Aws::String GetNameForExecutionErrorType(ExecutionErrorType enumValue)
        {
          switch(enumValue)
          {
          case ExecutionErrorType::NOT_SET:
            return {};
          case ExecutionErrorType::PERMISSION_DENIED:
            return "PERMISSION_DENIED";
          case ExecutionErrorType::CUSTOM_STEP_FAILED:
            return "CUSTOM_STEP_FAILED";
          case ExecutionErrorType::THROTTLED:
            return "THROTTLED";
          case ExecutionErrorType::ALREADY_EXISTS:
            return "ALREADY_EXISTS";
          case ExecutionErrorType::NOT_FOUND:
            return "NOT_FOUND";
          case ExecutionErrorType::BAD_REQUEST:
            return "BAD_REQUEST";
          case ExecutionErrorType::TIMEOUT:
            return "TIMEOUT";
          case ExecutionErrorType::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionErrorTypeMapper
    } // namespace Model
  } // namespace Transfer
} // namespace Aws
