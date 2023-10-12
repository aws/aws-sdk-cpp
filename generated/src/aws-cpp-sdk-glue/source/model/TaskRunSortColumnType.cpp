/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

        static constexpr uint32_t TASK_RUN_TYPE_HASH = ConstExprHashingUtils::HashString("TASK_RUN_TYPE");
        static constexpr uint32_t STATUS_HASH = ConstExprHashingUtils::HashString("STATUS");
        static constexpr uint32_t STARTED_HASH = ConstExprHashingUtils::HashString("STARTED");


        TaskRunSortColumnType GetTaskRunSortColumnTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TaskRunSortColumnType::NOT_SET:
            return {};
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
