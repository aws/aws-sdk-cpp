/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace ExecutionStatusMapper
      {

        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t EXECUTE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("EXECUTE_IN_PROGRESS");
        static constexpr uint32_t EXECUTE_COMPLETE_HASH = ConstExprHashingUtils::HashString("EXECUTE_COMPLETE");
        static constexpr uint32_t EXECUTE_FAILED_HASH = ConstExprHashingUtils::HashString("EXECUTE_FAILED");
        static constexpr uint32_t OBSOLETE_HASH = ConstExprHashingUtils::HashString("OBSOLETE");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNAVAILABLE_HASH)
          {
            return ExecutionStatus::UNAVAILABLE;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return ExecutionStatus::AVAILABLE;
          }
          else if (hashCode == EXECUTE_IN_PROGRESS_HASH)
          {
            return ExecutionStatus::EXECUTE_IN_PROGRESS;
          }
          else if (hashCode == EXECUTE_COMPLETE_HASH)
          {
            return ExecutionStatus::EXECUTE_COMPLETE;
          }
          else if (hashCode == EXECUTE_FAILED_HASH)
          {
            return ExecutionStatus::EXECUTE_FAILED;
          }
          else if (hashCode == OBSOLETE_HASH)
          {
            return ExecutionStatus::OBSOLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionStatus>(hashCode);
          }

          return ExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForExecutionStatus(ExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExecutionStatus::NOT_SET:
            return {};
          case ExecutionStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case ExecutionStatus::AVAILABLE:
            return "AVAILABLE";
          case ExecutionStatus::EXECUTE_IN_PROGRESS:
            return "EXECUTE_IN_PROGRESS";
          case ExecutionStatus::EXECUTE_COMPLETE:
            return "EXECUTE_COMPLETE";
          case ExecutionStatus::EXECUTE_FAILED:
            return "EXECUTE_FAILED";
          case ExecutionStatus::OBSOLETE:
            return "OBSOLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExecutionStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
