/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/glue/model/TaskRunSortColumnType.h>
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
      namespace TaskRunSortColumnTypeMapper
      {

        static const int TASK_RUN_TYPE_HASH = HashingUtils::HashString("TASK_RUN_TYPE");
        static const int STATUS_HASH = HashingUtils::HashString("STATUS");
        static const int STARTED_HASH = HashingUtils::HashString("STARTED");


        TaskRunSortColumnType GetTaskRunSortColumnTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TASK_RUN_TYPE_HASH)
          {
            return TaskRunSortColumnType::TASK_RUN_TYPE;
          }
          else if (hashCode == STATUS_HASH)
          {
            return TaskRunSortColumnType::STATUS;
          }
          else if (hashCode == STARTED_HASH)
          {
            return TaskRunSortColumnType::STARTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TaskRunSortColumnType>(hashCode);
          }

          return TaskRunSortColumnType::NOT_SET;
        }

        Aws::String GetNameForTaskRunSortColumnType(TaskRunSortColumnType enumValue)
        {
          switch(enumValue)
          {
          case TaskRunSortColumnType::TASK_RUN_TYPE:
            return "TASK_RUN_TYPE";
          case TaskRunSortColumnType::STATUS:
            return "STATUS";
          case TaskRunSortColumnType::STARTED:
            return "STARTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskRunSortColumnTypeMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
