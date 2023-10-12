/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TaskStatusType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace TaskStatusTypeMapper
      {

        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t SUCCEEDED_HASH = ConstExprHashingUtils::HashString("SUCCEEDED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t TIMEOUT_HASH = ConstExprHashingUtils::HashString("TIMEOUT");


        TaskStatusType GetTaskStatusTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return TaskStatusType::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return TaskStatusType::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return TaskStatusType::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return TaskStatusType::STOPPED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return TaskStatusType::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TaskStatusType::FAILED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return TaskStatusType::TIMEOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskStatusType>(hashCode);
          }

          return TaskStatusType::NOT_SET;
        }

        Aws::String GetNameForTaskStatusType(TaskStatusType enumValue)
        {
          switch(enumValue)
          {
          case TaskStatusType::NOT_SET:
            return {};
          case TaskStatusType::STARTING:
            return "STARTING";
          case TaskStatusType::RUNNING:
            return "RUNNING";
          case TaskStatusType::STOPPING:
            return "STOPPING";
          case TaskStatusType::STOPPED:
            return "STOPPED";
          case TaskStatusType::SUCCEEDED:
            return "SUCCEEDED";
          case TaskStatusType::FAILED:
            return "FAILED";
          case TaskStatusType::TIMEOUT:
            return "TIMEOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStatusTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
