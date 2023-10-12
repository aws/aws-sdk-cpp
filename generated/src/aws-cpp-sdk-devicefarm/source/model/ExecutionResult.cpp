/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/ExecutionResult.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DeviceFarm
  {
    namespace Model
    {
      namespace ExecutionResultMapper
      {

        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");
        static constexpr uint32_t PASSED_HASH = ConstExprHashingUtils::HashString("PASSED");
        static constexpr uint32_t WARNED_HASH = ConstExprHashingUtils::HashString("WARNED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");
        static constexpr uint32_t ERRORED_HASH = ConstExprHashingUtils::HashString("ERRORED");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        ExecutionResult GetExecutionResultForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return ExecutionResult::PENDING;
          }
          else if (hashCode == PASSED_HASH)
          {
            return ExecutionResult::PASSED;
          }
          else if (hashCode == WARNED_HASH)
          {
            return ExecutionResult::WARNED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ExecutionResult::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return ExecutionResult::SKIPPED;
          }
          else if (hashCode == ERRORED_HASH)
          {
            return ExecutionResult::ERRORED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return ExecutionResult::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionResult>(hashCode);
          }

          return ExecutionResult::NOT_SET;
        }

        Aws::String GetNameForExecutionResult(ExecutionResult enumValue)
        {
          switch(enumValue)
          {
          case ExecutionResult::NOT_SET:
            return {};
          case ExecutionResult::PENDING:
            return "PENDING";
          case ExecutionResult::PASSED:
            return "PASSED";
          case ExecutionResult::WARNED:
            return "WARNED";
          case ExecutionResult::FAILED:
            return "FAILED";
          case ExecutionResult::SKIPPED:
            return "SKIPPED";
          case ExecutionResult::ERRORED:
            return "ERRORED";
          case ExecutionResult::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionResultMapper
    } // namespace Model
  } // namespace DeviceFarm
} // namespace Aws
