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

#include <aws/codeguru-reviewer/model/JobState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeGuruReviewer
  {
    namespace Model
    {
      namespace JobStateMapper
      {

        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Pending_HASH = HashingUtils::HashString("Pending");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Deleting_HASH = HashingUtils::HashString("Deleting");


        JobState GetJobStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Completed_HASH)
          {
            return JobState::Completed;
          }
          else if (hashCode == Pending_HASH)
          {
            return JobState::Pending;
          }
          else if (hashCode == Failed_HASH)
          {
            return JobState::Failed;
          }
          else if (hashCode == Deleting_HASH)
          {
            return JobState::Deleting;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobState>(hashCode);
          }

          return JobState::NOT_SET;
        }

        Aws::String GetNameForJobState(JobState enumValue)
        {
          switch(enumValue)
          {
          case JobState::Completed:
            return "Completed";
          case JobState::Pending:
            return "Pending";
          case JobState::Failed:
            return "Failed";
          case JobState::Deleting:
            return "Deleting";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobStateMapper
    } // namespace Model
  } // namespace CodeGuruReviewer
} // namespace Aws
