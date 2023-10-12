/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ComputeOptimizer
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static constexpr uint32_t Queued_HASH = ConstExprHashingUtils::HashString("Queued");
        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t Complete_HASH = ConstExprHashingUtils::HashString("Complete");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Queued_HASH)
          {
            return JobStatus::Queued;
          }
          else if (hashCode == InProgress_HASH)
          {
            return JobStatus::InProgress;
          }
          else if (hashCode == Complete_HASH)
          {
            return JobStatus::Complete;
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
          case JobStatus::Queued:
            return "Queued";
          case JobStatus::InProgress:
            return "InProgress";
          case JobStatus::Complete:
            return "Complete";
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
  } // namespace ComputeOptimizer
} // namespace Aws
