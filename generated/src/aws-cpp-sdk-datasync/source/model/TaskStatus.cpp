/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/TaskStatus.h>
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
      namespace TaskStatusMapper
      {

        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t QUEUED_HASH = ConstExprHashingUtils::HashString("QUEUED");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AVAILABLE_HASH)
          {
            return TaskStatus::AVAILABLE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return TaskStatus::CREATING;
          }
          else if (hashCode == QUEUED_HASH)
          {
            return TaskStatus::QUEUED;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TaskStatus::RUNNING;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return TaskStatus::UNAVAILABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskStatus>(hashCode);
          }

          return TaskStatus::NOT_SET;
        }

        Aws::String GetNameForTaskStatus(TaskStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskStatus::NOT_SET:
            return {};
          case TaskStatus::AVAILABLE:
            return "AVAILABLE";
          case TaskStatus::CREATING:
            return "CREATING";
          case TaskStatus::QUEUED:
            return "QUEUED";
          case TaskStatus::RUNNING:
            return "RUNNING";
          case TaskStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStatusMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
