/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/WorkflowRunStatus.h>
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
      namespace WorkflowRunStatusMapper
      {

        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");


        WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return WorkflowRunStatus::RUNNING;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return WorkflowRunStatus::COMPLETED;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkflowRunStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkflowRunStatus::STOPPED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return WorkflowRunStatus::ERROR_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WorkflowRunStatus>(hashCode);
          }

          return WorkflowRunStatus::NOT_SET;
        }

        Aws::String GetNameForWorkflowRunStatus(WorkflowRunStatus enumValue)
        {
          switch(enumValue)
          {
          case WorkflowRunStatus::NOT_SET:
            return {};
          case WorkflowRunStatus::RUNNING:
            return "RUNNING";
          case WorkflowRunStatus::COMPLETED:
            return "COMPLETED";
          case WorkflowRunStatus::STOPPING:
            return "STOPPING";
          case WorkflowRunStatus::STOPPED:
            return "STOPPED";
          case WorkflowRunStatus::ERROR_:
            return "ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WorkflowRunStatusMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
