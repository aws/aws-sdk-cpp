﻿/*
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

#include <aws/polly/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Polly
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int scheduled_HASH = HashingUtils::HashString("scheduled");
        static const int inProgress_HASH = HashingUtils::HashString("inProgress");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int failed_HASH = HashingUtils::HashString("failed");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == scheduled_HASH)
          {
            return TaskStatus::scheduled;
          }
          else if (hashCode == inProgress_HASH)
          {
            return TaskStatus::inProgress;
          }
          else if (hashCode == completed_HASH)
          {
            return TaskStatus::completed;
          }
          else if (hashCode == failed_HASH)
          {
            return TaskStatus::failed;
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
          case TaskStatus::scheduled:
            return "scheduled";
          case TaskStatus::inProgress:
            return "inProgress";
          case TaskStatus::completed:
            return "completed";
          case TaskStatus::failed:
            return "failed";
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
  } // namespace Polly
} // namespace Aws
