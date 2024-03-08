/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/WorkflowRunStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace WorkflowRunStatusMapper
      {

        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int SUPERSEDED_HASH = HashingUtils::HashString("SUPERSEDED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int NOT_RUN_HASH = HashingUtils::HashString("NOT_RUN");
        static const int VALIDATING_HASH = HashingUtils::HashString("VALIDATING");
        static const int PROVISIONING_HASH = HashingUtils::HashString("PROVISIONING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int ABANDONED_HASH = HashingUtils::HashString("ABANDONED");


        WorkflowRunStatus GetWorkflowRunStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUCCEEDED_HASH)
          {
            return WorkflowRunStatus::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return WorkflowRunStatus::FAILED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return WorkflowRunStatus::STOPPED;
          }
          else if (hashCode == SUPERSEDED_HASH)
          {
            return WorkflowRunStatus::SUPERSEDED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return WorkflowRunStatus::CANCELLED;
          }
          else if (hashCode == NOT_RUN_HASH)
          {
            return WorkflowRunStatus::NOT_RUN;
          }
          else if (hashCode == VALIDATING_HASH)
          {
            return WorkflowRunStatus::VALIDATING;
          }
          else if (hashCode == PROVISIONING_HASH)
          {
            return WorkflowRunStatus::PROVISIONING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return WorkflowRunStatus::IN_PROGRESS;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return WorkflowRunStatus::STOPPING;
          }
          else if (hashCode == ABANDONED_HASH)
          {
            return WorkflowRunStatus::ABANDONED;
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
          case WorkflowRunStatus::SUCCEEDED:
            return "SUCCEEDED";
          case WorkflowRunStatus::FAILED:
            return "FAILED";
          case WorkflowRunStatus::STOPPED:
            return "STOPPED";
          case WorkflowRunStatus::SUPERSEDED:
            return "SUPERSEDED";
          case WorkflowRunStatus::CANCELLED:
            return "CANCELLED";
          case WorkflowRunStatus::NOT_RUN:
            return "NOT_RUN";
          case WorkflowRunStatus::VALIDATING:
            return "VALIDATING";
          case WorkflowRunStatus::PROVISIONING:
            return "PROVISIONING";
          case WorkflowRunStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case WorkflowRunStatus::STOPPING:
            return "STOPPING";
          case WorkflowRunStatus::ABANDONED:
            return "ABANDONED";
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
  } // namespace CodeCatalyst
} // namespace Aws
