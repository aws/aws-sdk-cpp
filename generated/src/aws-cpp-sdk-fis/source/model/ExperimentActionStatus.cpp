/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentActionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace FIS
  {
    namespace Model
    {
      namespace ExperimentActionStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int initiating_HASH = HashingUtils::HashString("initiating");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int cancelled_HASH = HashingUtils::HashString("cancelled");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int failed_HASH = HashingUtils::HashString("failed");


        ExperimentActionStatus GetExperimentActionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ExperimentActionStatus::pending;
          }
          else if (hashCode == initiating_HASH)
          {
            return ExperimentActionStatus::initiating;
          }
          else if (hashCode == running_HASH)
          {
            return ExperimentActionStatus::running;
          }
          else if (hashCode == completed_HASH)
          {
            return ExperimentActionStatus::completed;
          }
          else if (hashCode == cancelled_HASH)
          {
            return ExperimentActionStatus::cancelled;
          }
          else if (hashCode == stopping_HASH)
          {
            return ExperimentActionStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return ExperimentActionStatus::stopped;
          }
          else if (hashCode == failed_HASH)
          {
            return ExperimentActionStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentActionStatus>(hashCode);
          }

          return ExperimentActionStatus::NOT_SET;
        }

        Aws::String GetNameForExperimentActionStatus(ExperimentActionStatus enumValue)
        {
          switch(enumValue)
          {
          case ExperimentActionStatus::pending:
            return "pending";
          case ExperimentActionStatus::initiating:
            return "initiating";
          case ExperimentActionStatus::running:
            return "running";
          case ExperimentActionStatus::completed:
            return "completed";
          case ExperimentActionStatus::cancelled:
            return "cancelled";
          case ExperimentActionStatus::stopping:
            return "stopping";
          case ExperimentActionStatus::stopped:
            return "stopped";
          case ExperimentActionStatus::failed:
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

      } // namespace ExperimentActionStatusMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
