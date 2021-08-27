/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/NotebookExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace NotebookExecutionStatusMapper
      {

        static const int START_PENDING_HASH = HashingUtils::HashString("START_PENDING");
        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int FINISHING_HASH = HashingUtils::HashString("FINISHING");
        static const int FINISHED_HASH = HashingUtils::HashString("FINISHED");
        static const int FAILING_HASH = HashingUtils::HashString("FAILING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOP_PENDING_HASH = HashingUtils::HashString("STOP_PENDING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        NotebookExecutionStatus GetNotebookExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_PENDING_HASH)
          {
            return NotebookExecutionStatus::START_PENDING;
          }
          else if (hashCode == STARTING_HASH)
          {
            return NotebookExecutionStatus::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return NotebookExecutionStatus::RUNNING;
          }
          else if (hashCode == FINISHING_HASH)
          {
            return NotebookExecutionStatus::FINISHING;
          }
          else if (hashCode == FINISHED_HASH)
          {
            return NotebookExecutionStatus::FINISHED;
          }
          else if (hashCode == FAILING_HASH)
          {
            return NotebookExecutionStatus::FAILING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return NotebookExecutionStatus::FAILED;
          }
          else if (hashCode == STOP_PENDING_HASH)
          {
            return NotebookExecutionStatus::STOP_PENDING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return NotebookExecutionStatus::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return NotebookExecutionStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotebookExecutionStatus>(hashCode);
          }

          return NotebookExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForNotebookExecutionStatus(NotebookExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case NotebookExecutionStatus::START_PENDING:
            return "START_PENDING";
          case NotebookExecutionStatus::STARTING:
            return "STARTING";
          case NotebookExecutionStatus::RUNNING:
            return "RUNNING";
          case NotebookExecutionStatus::FINISHING:
            return "FINISHING";
          case NotebookExecutionStatus::FINISHED:
            return "FINISHED";
          case NotebookExecutionStatus::FAILING:
            return "FAILING";
          case NotebookExecutionStatus::FAILED:
            return "FAILED";
          case NotebookExecutionStatus::STOP_PENDING:
            return "STOP_PENDING";
          case NotebookExecutionStatus::STOPPING:
            return "STOPPING";
          case NotebookExecutionStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotebookExecutionStatusMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
