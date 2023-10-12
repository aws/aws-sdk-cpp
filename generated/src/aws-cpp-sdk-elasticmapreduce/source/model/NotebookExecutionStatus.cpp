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

        static constexpr uint32_t START_PENDING_HASH = ConstExprHashingUtils::HashString("START_PENDING");
        static constexpr uint32_t STARTING_HASH = ConstExprHashingUtils::HashString("STARTING");
        static constexpr uint32_t RUNNING_HASH = ConstExprHashingUtils::HashString("RUNNING");
        static constexpr uint32_t FINISHING_HASH = ConstExprHashingUtils::HashString("FINISHING");
        static constexpr uint32_t FINISHED_HASH = ConstExprHashingUtils::HashString("FINISHED");
        static constexpr uint32_t FAILING_HASH = ConstExprHashingUtils::HashString("FAILING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t STOP_PENDING_HASH = ConstExprHashingUtils::HashString("STOP_PENDING");
        static constexpr uint32_t STOPPING_HASH = ConstExprHashingUtils::HashString("STOPPING");
        static constexpr uint32_t STOPPED_HASH = ConstExprHashingUtils::HashString("STOPPED");


        NotebookExecutionStatus GetNotebookExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case NotebookExecutionStatus::NOT_SET:
            return {};
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
