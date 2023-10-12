/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace TaskExecutionStatusMapper
      {

        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t LAUNCHING_HASH = ConstExprHashingUtils::HashString("LAUNCHING");
        static constexpr uint32_t PREPARING_HASH = ConstExprHashingUtils::HashString("PREPARING");
        static constexpr uint32_t TRANSFERRING_HASH = ConstExprHashingUtils::HashString("TRANSFERRING");
        static constexpr uint32_t VERIFYING_HASH = ConstExprHashingUtils::HashString("VERIFYING");
        static constexpr uint32_t SUCCESS_HASH = ConstExprHashingUtils::HashString("SUCCESS");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        TaskExecutionStatus GetTaskExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUEUED_HASH)
          {
            return TaskExecutionStatus::QUEUED;
          }
          else if (hashCode == LAUNCHING_HASH)
          {
            return TaskExecutionStatus::LAUNCHING;
          }
          else if (hashCode == PREPARING_HASH)
          {
            return TaskExecutionStatus::PREPARING;
          }
          else if (hashCode == TRANSFERRING_HASH)
          {
            return TaskExecutionStatus::TRANSFERRING;
          }
          else if (hashCode == VERIFYING_HASH)
          {
            return TaskExecutionStatus::VERIFYING;
          }
          else if (hashCode == SUCCESS_HASH)
          {
            return TaskExecutionStatus::SUCCESS;
          }
          else if (hashCode == ERROR__HASH)
          {
            return TaskExecutionStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskExecutionStatus>(hashCode);
          }

          return TaskExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForTaskExecutionStatus(TaskExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskExecutionStatus::NOT_SET:
            return {};
          case TaskExecutionStatus::QUEUED:
            return "QUEUED";
          case TaskExecutionStatus::LAUNCHING:
            return "LAUNCHING";
          case TaskExecutionStatus::PREPARING:
            return "PREPARING";
          case TaskExecutionStatus::TRANSFERRING:
            return "TRANSFERRING";
          case TaskExecutionStatus::VERIFYING:
            return "VERIFYING";
          case TaskExecutionStatus::SUCCESS:
            return "SUCCESS";
          case TaskExecutionStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskExecutionStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
