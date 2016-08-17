/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

        static const int Created_HASH = HashingUtils::HashString("Created");
        static const int Queued_HASH = HashingUtils::HashString("Queued");
        static const int Dispatched_HASH = HashingUtils::HashString("Dispatched");
        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int TimedOut_HASH = HashingUtils::HashString("TimedOut");
        static const int Succeeded_HASH = HashingUtils::HashString("Succeeded");
        static const int Failed_HASH = HashingUtils::HashString("Failed");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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

            return "";
          }
        }

      } // namespace JobStatusMapper
    } // namespace Model
  } // namespace CodePipeline
} // namespace Aws
