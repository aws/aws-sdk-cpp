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

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t initiating_HASH = ConstExprHashingUtils::HashString("initiating");
        static constexpr uint32_t running_HASH = ConstExprHashingUtils::HashString("running");
        static constexpr uint32_t completed_HASH = ConstExprHashingUtils::HashString("completed");
        static constexpr uint32_t stopping_HASH = ConstExprHashingUtils::HashString("stopping");
        static constexpr uint32_t stopped_HASH = ConstExprHashingUtils::HashString("stopped");
        static constexpr uint32_t failed_HASH = ConstExprHashingUtils::HashString("failed");


        ExperimentStatus GetExperimentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case ExperimentStatus::NOT_SET:
            return {};
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
