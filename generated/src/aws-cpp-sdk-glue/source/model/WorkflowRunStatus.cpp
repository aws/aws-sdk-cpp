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

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int ERROR__HASH = HashingUtils::HashString("ERROR");


        WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
