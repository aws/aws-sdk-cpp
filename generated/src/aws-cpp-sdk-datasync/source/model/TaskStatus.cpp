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

        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int QUEUED_HASH = HashingUtils::HashString("QUEUED");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int UNAVAILABLE_HASH = HashingUtils::HashString("UNAVAILABLE");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
