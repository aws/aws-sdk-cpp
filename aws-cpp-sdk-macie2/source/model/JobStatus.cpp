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

#include <aws/macie2/model/JobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Macie2
  {
    namespace Model
    {
      namespace JobStatusMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int PAUSED_HASH = HashingUtils::HashString("PAUSED");
        static const int CANCELLED_HASH = HashingUtils::HashString("CANCELLED");
        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int IDLE_HASH = HashingUtils::HashString("IDLE");


        JobStatus GetJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return JobStatus::RUNNING;
          }
          else if (hashCode == PAUSED_HASH)
          {
            return JobStatus::PAUSED;
          }
          else if (hashCode == CANCELLED_HASH)
          {
            return JobStatus::CANCELLED;
          }
          else if (hashCode == COMPLETE_HASH)
          {
            return JobStatus::COMPLETE;
          }
          else if (hashCode == IDLE_HASH)
          {
            return JobStatus::IDLE;
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
          case JobStatus::RUNNING:
            return "RUNNING";
          case JobStatus::PAUSED:
            return "PAUSED";
          case JobStatus::CANCELLED:
            return "CANCELLED";
          case JobStatus::COMPLETE:
            return "COMPLETE";
          case JobStatus::IDLE:
            return "IDLE";
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
  } // namespace Macie2
} // namespace Aws
