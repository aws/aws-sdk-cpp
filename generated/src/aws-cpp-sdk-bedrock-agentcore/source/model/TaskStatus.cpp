/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/TaskStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace BedrockAgentCore
  {
    namespace Model
    {
      namespace TaskStatusMapper
      {

        static const int submitted_HASH = HashingUtils::HashString("submitted");
        static const int working_HASH = HashingUtils::HashString("working");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int canceled_HASH = HashingUtils::HashString("canceled");
        static const int failed_HASH = HashingUtils::HashString("failed");


        TaskStatus GetTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == submitted_HASH)
          {
            return TaskStatus::submitted;
          }
          else if (hashCode == working_HASH)
          {
            return TaskStatus::working;
          }
          else if (hashCode == completed_HASH)
          {
            return TaskStatus::completed;
          }
          else if (hashCode == canceled_HASH)
          {
            return TaskStatus::canceled;
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
          case TaskStatus::NOT_SET:
            return {};
          case TaskStatus::submitted:
            return "submitted";
          case TaskStatus::working:
            return "working";
          case TaskStatus::completed:
            return "completed";
          case TaskStatus::canceled:
            return "canceled";
          case TaskStatus::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TaskStatusMapper
    } // namespace Model
  } // namespace BedrockAgentCore
} // namespace Aws
