﻿/*
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

#include <aws/comprehend/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Comprehend
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int SUBMITTED_HASH = HashingUtils::HashString("SUBMITTED");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int STOP_REQUESTED_HASH = HashingUtils::HashString("STOP_REQUESTED");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SUBMITTED_HASH)
          {
            return JobStatus::SUBMITTED;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return JobStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return JobStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobStatus::FAILED;
          }
          else if (hashCode == STOP_REQUESTED_HASH)
          {
            return JobStatus::STOP_REQUESTED;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return JobStatus::STOPPED;
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
          case JobStatus::SUBMITTED:
            return "SUBMITTED";
          case JobStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case JobStatus::COMPLETED:
            return "COMPLETED";
          case JobStatus::FAILED:
            return "FAILED";
          case JobStatus::STOP_REQUESTED:
            return "STOP_REQUESTED";
          case JobStatus::STOPPED:
            return "STOPPED";
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
  } // namespace Comprehend
} // namespace Aws
