/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codepipeline/model/JobStatus.h>
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
      namespace JobStatusMapper
      {

        static constexpr uint32_t Created_HASH = ConstExprHashingUtils::HashString("Created");
        static constexpr uint32_t Queued_HASH = ConstExprHashingUtils::HashString("Queued");
        static constexpr uint32_t Dispatched_HASH = ConstExprHashingUtils::HashString("Dispatched");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Created_HASH)
          {
            return JobStatus::Created;
          }
          else if (hashCode == Queued_HASH)
          {
            return JobStatus::Queued;
          }
          else if (hashCode == Dispatched_HASH)
          {
            return JobStatus::Dispatched;
          }
          else if (hashCode == InProgress_HASH)
          {
            return JobStatus::InProgress;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return JobStatus::TimedOut;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return JobStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobStatus>(hashCode);
          }

          return JobStatus::NOT_SET;
        }

        Aws::String GetNameForJobStatus(JobStatus enumValue)
        {
          switch(enumValue)
          {
          case JobStatus::NOT_SET:
            return {};
          case JobStatus::Created:
            return "Created";
          case JobStatus::Queued:
            return "Queued";
          case JobStatus::Dispatched:
            return "Dispatched";
          case JobStatus::InProgress:
            return "InProgress";
          case JobStatus::TimedOut:
            return "TimedOut";
          case JobStatus::Succeeded:
            return "Succeeded";
          case JobStatus::Failed:
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

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
