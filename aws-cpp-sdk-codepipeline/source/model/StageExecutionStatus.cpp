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

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");


        StageExecutionStatus GetStageExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
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
