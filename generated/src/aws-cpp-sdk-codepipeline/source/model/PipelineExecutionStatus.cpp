/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/PipelineExecutionStatus.h>
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
      namespace PipelineExecutionStatusMapper
      {

        static constexpr uint32_t Cancelled_HASH = ConstExprHashingUtils::HashString("Cancelled");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Stopped_HASH = ConstExprHashingUtils::HashString("Stopped");
        static constexpr uint32_t Stopping_HASH = ConstExprHashingUtils::HashString("Stopping");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Superseded_HASH = ConstExprHashingUtils::HashString("Superseded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        PipelineExecutionStatus GetPipelineExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cancelled_HASH)
          {
            return PipelineExecutionStatus::Cancelled;
          }
          else if (hashCode == InProgress_HASH)
          {
            return PipelineExecutionStatus::InProgress;
          }
          else if (hashCode == Stopped_HASH)
          {
            return PipelineExecutionStatus::Stopped;
          }
          else if (hashCode == Stopping_HASH)
          {
            return PipelineExecutionStatus::Stopping;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return PipelineExecutionStatus::Succeeded;
          }
          else if (hashCode == Superseded_HASH)
          {
            return PipelineExecutionStatus::Superseded;
          }
          else if (hashCode == Failed_HASH)
          {
            return PipelineExecutionStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PipelineExecutionStatus>(hashCode);
          }

          return PipelineExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForPipelineExecutionStatus(PipelineExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case PipelineExecutionStatus::NOT_SET:
            return {};
          case PipelineExecutionStatus::Cancelled:
            return "Cancelled";
          case PipelineExecutionStatus::InProgress:
            return "InProgress";
          case PipelineExecutionStatus::Stopped:
            return "Stopped";
          case PipelineExecutionStatus::Stopping:
            return "Stopping";
          case PipelineExecutionStatus::Succeeded:
            return "Succeeded";
          case PipelineExecutionStatus::Superseded:
            return "Superseded";
          case PipelineExecutionStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PipelineExecutionStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
