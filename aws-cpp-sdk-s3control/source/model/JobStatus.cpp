/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/s3control/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Control
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Cancelled_HASH = HashingUtils::HashString("Cancelled");
        static const int Cancelling_HASH = HashingUtils::HashString("Cancelling");
        static const int Complete_HASH = HashingUtils::HashString("Complete");
        static const int Completing_HASH = HashingUtils::HashString("Completing");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Failing_HASH = HashingUtils::HashString("Failing");
        static const int New_HASH = HashingUtils::HashString("New");
        static const int Paused_HASH = HashingUtils::HashString("Paused");
        static const int Pausing_HASH = HashingUtils::HashString("Pausing");
        static const int Preparing_HASH = HashingUtils::HashString("Preparing");
        static const int Ready_HASH = HashingUtils::HashString("Ready");
        static const int Suspended_HASH = HashingUtils::HashString("Suspended");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return JobStatus::Active;
          }
          else if (hashCode == Cancelled_HASH)
          {
            return JobStatus::Cancelled;
          }
          else if (hashCode == Cancelling_HASH)
          {
            return JobStatus::Cancelling;
          }
          else if (hashCode == Complete_HASH)
          {
            return JobStatus::Complete;
          }
          else if (hashCode == Completing_HASH)
          {
            return JobStatus::Completing;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobStatus::Failed;
          }
          else if (hashCode == Failing_HASH)
          {
            return JobStatus::Failing;
          }
          else if (hashCode == New_HASH)
          {
            return JobStatus::New;
          }
          else if (hashCode == Paused_HASH)
          {
            return JobStatus::Paused;
          }
          else if (hashCode == Pausing_HASH)
          {
            return JobStatus::Pausing;
          }
          else if (hashCode == Preparing_HASH)
          {
            return JobStatus::Preparing;
          }
          else if (hashCode == Ready_HASH)
          {
            return JobStatus::Ready;
          }
          else if (hashCode == Suspended_HASH)
          {
            return JobStatus::Suspended;
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
          case JobStatus::Active:
            return "Active";
          case JobStatus::Cancelled:
            return "Cancelled";
          case JobStatus::Cancelling:
            return "Cancelling";
          case JobStatus::Complete:
            return "Complete";
          case JobStatus::Completing:
            return "Completing";
          case JobStatus::Failed:
            return "Failed";
          case JobStatus::Failing:
            return "Failing";
          case JobStatus::New:
            return "New";
          case JobStatus::Paused:
            return "Paused";
          case JobStatus::Pausing:
            return "Pausing";
          case JobStatus::Preparing:
            return "Preparing";
          case JobStatus::Ready:
            return "Ready";
          case JobStatus::Suspended:
            return "Suspended";
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
  } // namespace S3Control
} // namespace Aws
