/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

            return "";
          }
        }

      } // namespace TaskDefinitionFamilyStatusMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
