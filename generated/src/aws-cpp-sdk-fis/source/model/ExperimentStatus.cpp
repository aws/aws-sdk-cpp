/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fis/model/ExperimentStatus.h>
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
      namespace ExperimentStatusMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int initiating_HASH = HashingUtils::HashString("initiating");
        static const int running_HASH = HashingUtils::HashString("running");
        static const int completed_HASH = HashingUtils::HashString("completed");
        static const int stopping_HASH = HashingUtils::HashString("stopping");
        static const int stopped_HASH = HashingUtils::HashString("stopped");
        static const int failed_HASH = HashingUtils::HashString("failed");


        ExperimentStatus GetExperimentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return ExperimentStatus::pending;
          }
          else if (hashCode == initiating_HASH)
          {
            return ExperimentStatus::initiating;
          }
          else if (hashCode == running_HASH)
          {
            return ExperimentStatus::running;
          }
          else if (hashCode == completed_HASH)
          {
            return ExperimentStatus::completed;
          }
          else if (hashCode == stopping_HASH)
          {
            return ExperimentStatus::stopping;
          }
          else if (hashCode == stopped_HASH)
          {
            return ExperimentStatus::stopped;
          }
          else if (hashCode == failed_HASH)
          {
            return ExperimentStatus::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExperimentStatus>(hashCode);
          }

          return ExperimentStatus::NOT_SET;
        }

        Aws::String GetNameForExperimentStatus(ExperimentStatus enumValue)
        {
          switch(enumValue)
          {
          case ExperimentStatus::pending:
            return "pending";
          case ExperimentStatus::initiating:
            return "initiating";
          case ExperimentStatus::running:
            return "running";
          case ExperimentStatus::completed:
            return "completed";
          case ExperimentStatus::stopping:
            return "stopping";
          case ExperimentStatus::stopped:
            return "stopped";
          case ExperimentStatus::failed:
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

      } // namespace ExperimentStatusMapper
    } // namespace Model
  } // namespace FIS
} // namespace Aws
