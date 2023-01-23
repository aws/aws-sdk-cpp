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

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int INACTIVE_HASH = HashingUtils::HashString("INACTIVE");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        TaskDefinitionFamilyStatus GetTaskDefinitionFamilyStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
