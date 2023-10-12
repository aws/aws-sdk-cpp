/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/StageExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodePipeline
  {
    namespace Model
    {
      namespace StageExecutionStatusMapper
      {

        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");


        StageExecutionStatus GetStageExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cancelled_HASH)
          {
            return StageExecutionStatus::Cancelled;
          }
          else if (hashCode == InProgress_HASH)
          {
            return StageExecutionStatus::InProgress;
          }
          else if (hashCode == Failed_HASH)
          {
            return StageExecutionStatus::Failed;
          }
          else if (hashCode == Stopped_HASH)
          {
            return StageExecutionStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return StageExecutionStatus::Stopping;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return StageExecutionStatus::Succeeded;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StageExecutionStatus>(hashCode);
          }

          return StageExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForStageExecutionStatus(StageExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case StageExecutionStatus::NOT_SET:
            return {};
          case StageExecutionStatus::Cancelled:
            return "Cancelled";
          case StageExecutionStatus::InProgress:
            return "InProgress";
          case StageExecutionStatus::Failed:
            return "Failed";
          case StageExecutionStatus::Stopped:
            return "Stopped";
          case StageExecutionStatus::Stopping:
            return "Stopping";
          case StageExecutionStatus::Succeeded:
            return "Succeeded";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StageExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
