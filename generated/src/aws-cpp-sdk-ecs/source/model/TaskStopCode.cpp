/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskStopCode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace TaskStopCodeMapper
      {

        static constexpr uint32_t TaskFailedToStart_HASH = ConstExprHashingUtils::HashString("TaskFailedToStart");
        static constexpr uint32_t EssentialContainerExited_HASH = ConstExprHashingUtils::HashString("EssentialContainerExited");
        static constexpr uint32_t UserInitiated_HASH = ConstExprHashingUtils::HashString("UserInitiated");
        static constexpr uint32_t ServiceSchedulerInitiated_HASH = ConstExprHashingUtils::HashString("ServiceSchedulerInitiated");
        static constexpr uint32_t SpotInterruption_HASH = ConstExprHashingUtils::HashString("SpotInterruption");
        static constexpr uint32_t TerminationNotice_HASH = ConstExprHashingUtils::HashString("TerminationNotice");


        TaskStopCode GetTaskStopCodeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TaskFailedToStart_HASH)
          {
            return TaskStopCode::TaskFailedToStart;
          }
          else if (hashCode == EssentialContainerExited_HASH)
          {
            return TaskStopCode::EssentialContainerExited;
          }
          else if (hashCode == UserInitiated_HASH)
          {
            return TaskStopCode::UserInitiated;
          }
          else if (hashCode == ServiceSchedulerInitiated_HASH)
          {
            return TaskStopCode::ServiceSchedulerInitiated;
          }
          else if (hashCode == SpotInterruption_HASH)
          {
            return TaskStopCode::SpotInterruption;
          }
          else if (hashCode == TerminationNotice_HASH)
          {
            return TaskStopCode::TerminationNotice;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskStopCode>(hashCode);
          }

          return TaskStopCode::NOT_SET;
        }

        Aws::String GetNameForTaskStopCode(TaskStopCode enumValue)
        {
          switch(enumValue)
          {
          case TaskStopCode::NOT_SET:
            return {};
          case TaskStopCode::TaskFailedToStart:
            return "TaskFailedToStart";
          case TaskStopCode::EssentialContainerExited:
            return "EssentialContainerExited";
          case TaskStopCode::UserInitiated:
            return "UserInitiated";
          case TaskStopCode::ServiceSchedulerInitiated:
            return "ServiceSchedulerInitiated";
          case TaskStopCode::SpotInterruption:
            return "SpotInterruption";
          case TaskStopCode::TerminationNotice:
            return "TerminationNotice";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStopCodeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
