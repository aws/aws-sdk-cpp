/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinitionStatus.h>
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
      namespace TaskDefinitionStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t DELETE_IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("DELETE_IN_PROGRESS");


        TaskDefinitionStatus GetTaskDefinitionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TaskDefinitionStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TaskDefinitionStatus::INACTIVE;
          }
          else if (hashCode == DELETE_IN_PROGRESS_HASH)
          {
            return TaskDefinitionStatus::DELETE_IN_PROGRESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskDefinitionStatus>(hashCode);
          }

          return TaskDefinitionStatus::NOT_SET;
        }

        Aws::String GetNameForTaskDefinitionStatus(TaskDefinitionStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskDefinitionStatus::NOT_SET:
            return {};
          case TaskDefinitionStatus::ACTIVE:
            return "ACTIVE";
          case TaskDefinitionStatus::INACTIVE:
            return "INACTIVE";
          case TaskDefinitionStatus::DELETE_IN_PROGRESS:
            return "DELETE_IN_PROGRESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskDefinitionStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
