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

#include <aws/glue/model/JobRunState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JobRunStateMapper
      {

        static const int STARTING_HASH = HashingUtils::HashString("STARTING");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int STOPPING_HASH = HashingUtils::HashString("STOPPING");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");
        static const int SUCCEEDED_HASH = HashingUtils::HashString("SUCCEEDED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int TIMEOUT_HASH = HashingUtils::HashString("TIMEOUT");


        JobRunState GetJobRunStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STARTING_HASH)
          {
            return JobRunState::STARTING;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return JobRunState::RUNNING;
          }
          else if (hashCode == STOPPING_HASH)
          {
            return JobRunState::STOPPING;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return JobRunState::STOPPED;
          }
          else if (hashCode == SUCCEEDED_HASH)
          {
            return JobRunState::SUCCEEDED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return JobRunState::FAILED;
          }
          else if (hashCode == TIMEOUT_HASH)
          {
            return JobRunState::TIMEOUT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JobRunState>(hashCode);
          }

          return JobRunState::NOT_SET;
        }

        Aws::String GetNameForJobRunState(JobRunState enumValue)
        {
          switch(enumValue)
          {
          case JobRunState::STARTING:
            return "STARTING";
          case JobRunState::RUNNING:
            return "RUNNING";
          case JobRunState::STOPPING:
            return "STOPPING";
          case JobRunState::STOPPED:
            return "STOPPED";
          case JobRunState::SUCCEEDED:
            return "SUCCEEDED";
          case JobRunState::FAILED:
            return "FAILED";
          case JobRunState::TIMEOUT:
            return "TIMEOUT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JobRunStateMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
