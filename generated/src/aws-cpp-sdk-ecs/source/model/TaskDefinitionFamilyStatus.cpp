/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinitionFamilyStatus.h>
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
      namespace TaskDefinitionFamilyStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t INACTIVE_HASH = ConstExprHashingUtils::HashString("INACTIVE");
        static constexpr uint32_t ALL_HASH = ConstExprHashingUtils::HashString("ALL");


        TaskDefinitionFamilyStatus GetTaskDefinitionFamilyStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return TaskDefinitionFamilyStatus::ACTIVE;
          }
          else if (hashCode == INACTIVE_HASH)
          {
            return TaskDefinitionFamilyStatus::INACTIVE;
          }
          else if (hashCode == ALL_HASH)
          {
            return TaskDefinitionFamilyStatus::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskDefinitionFamilyStatus>(hashCode);
          }

          return TaskDefinitionFamilyStatus::NOT_SET;
        }

        Aws::String GetNameForTaskDefinitionFamilyStatus(TaskDefinitionFamilyStatus enumValue)
        {
          switch(enumValue)
          {
          case TaskDefinitionFamilyStatus::NOT_SET:
            return {};
          case TaskDefinitionFamilyStatus::ACTIVE:
            return "ACTIVE";
          case TaskDefinitionFamilyStatus::INACTIVE:
            return "INACTIVE";
          case TaskDefinitionFamilyStatus::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskDefinitionFamilyStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
