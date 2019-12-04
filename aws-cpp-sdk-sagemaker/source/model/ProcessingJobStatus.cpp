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

#include <aws/sagemaker/model/ProcessingJobStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace ProcessingJobStatusMapper
      {

        static const int InProgress_HASH = HashingUtils::HashString("InProgress");
        static const int Completed_HASH = HashingUtils::HashString("Completed");
        static const int Failed_HASH = HashingUtils::HashString("Failed");
        static const int Stopping_HASH = HashingUtils::HashString("Stopping");
        static const int Stopped_HASH = HashingUtils::HashString("Stopped");


        ProcessingJobStatus GetProcessingJobStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ProcessingJobStatus::InProgress;
          }
          else if (hashCode == Completed_HASH)
          {
            return ProcessingJobStatus::Completed;
          }
          else if (hashCode == Failed_HASH)
          {
            return ProcessingJobStatus::Failed;
          }
          else if (hashCode == Stopping_HASH)
          {
            return ProcessingJobStatus::Stopping;
          }
          else if (hashCode == Stopped_HASH)
          {
            return ProcessingJobStatus::Stopped;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProcessingJobStatus>(hashCode);
          }

          return ProcessingJobStatus::NOT_SET;
        }

        Aws::String GetNameForProcessingJobStatus(ProcessingJobStatus enumValue)
        {
          switch(enumValue)
          {
          case ProcessingJobStatus::InProgress:
            return "InProgress";
          case ProcessingJobStatus::Completed:
            return "Completed";
          case ProcessingJobStatus::Failed:
            return "Failed";
          case ProcessingJobStatus::Stopping:
            return "Stopping";
          case ProcessingJobStatus::Stopped:
            return "Stopped";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProcessingJobStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
