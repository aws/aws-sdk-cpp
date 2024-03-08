/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ExecutionStatus.h>
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
      namespace ExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int EXCEPTION_HASH = HashingUtils::HashString("EXCEPTION");
        static const int HANDLING_EXCEPTION_HASH = HashingUtils::HashString("HANDLING_EXCEPTION");


        ExecutionStatus GetExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return ExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return ExecutionStatus::COMPLETED;
          }
          else if (hashCode == EXCEPTION_HASH)
          {
            return ExecutionStatus::EXCEPTION;
          }
          else if (hashCode == HANDLING_EXCEPTION_HASH)
          {
            return ExecutionStatus::HANDLING_EXCEPTION;
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
          case ExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case ExecutionStatus::COMPLETED:
            return "COMPLETED";
          case ExecutionStatus::EXCEPTION:
            return "EXCEPTION";
          case ExecutionStatus::HANDLING_EXCEPTION:
            return "HANDLING_EXCEPTION";
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
  } // namespace Transfer
} // namespace Aws
