/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/TaskDefinitionPlacementConstraintType.h>
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
      namespace TaskDefinitionPlacementConstraintTypeMapper
      {

        static const int memberOf_HASH = HashingUtils::HashString("memberOf");


        TaskDefinitionPlacementConstraintType GetTaskDefinitionPlacementConstraintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == memberOf_HASH)
          {
            return TaskDefinitionPlacementConstraintType::memberOf;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskDefinitionPlacementConstraintType>(hashCode);
          }

          return TaskDefinitionPlacementConstraintType::NOT_SET;
        }

        Aws::String GetNameForTaskDefinitionPlacementConstraintType(TaskDefinitionPlacementConstraintType enumValue)
        {
          switch(enumValue)
          {
          case TaskDefinitionPlacementConstraintType::memberOf:
            return "memberOf";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskDefinitionPlacementConstraintTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
