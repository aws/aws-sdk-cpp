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
#include <aws/datapipeline/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataPipeline
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int FALSE_HASH = HashingUtils::HashString("FALSE");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINISHED_HASH)
          {
            return TaskStatus::FINISHED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return TaskStatus::FAILED;
          }
          else if (hashCode == FALSE_HASH)
          {
            return TaskStatus::FALSE;
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
          case TaskStatus::FINISHED:
            return "FINISHED";
          case TaskStatus::FAILED:
            return "FAILED";
          case TaskStatus::FALSE:
            return "FALSE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace TaskStatusMapper
    } // namespace Model
  } // namespace DataPipeline
} // namespace Aws
