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

#include <aws/cloudformation/model/StackDriftDetectionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudFormation
  {
    namespace Model
    {
      namespace StackDriftDetectionStatusMapper
      {

        static const int DETECTION_IN_PROGRESS_HASH = HashingUtils::HashString("DETECTION_IN_PROGRESS");
        static const int DETECTION_FAILED_HASH = HashingUtils::HashString("DETECTION_FAILED");
        static const int DETECTION_COMPLETE_HASH = HashingUtils::HashString("DETECTION_COMPLETE");


        StackDriftDetectionStatus GetStackDriftDetectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DETECTION_IN_PROGRESS_HASH)
          {
            return StackDriftDetectionStatus::DETECTION_IN_PROGRESS;
          }
          else if (hashCode == DETECTION_FAILED_HASH)
          {
            return StackDriftDetectionStatus::DETECTION_FAILED;
          }
          else if (hashCode == DETECTION_COMPLETE_HASH)
          {
            return StackDriftDetectionStatus::DETECTION_COMPLETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackDriftDetectionStatus>(hashCode);
          }

          return StackDriftDetectionStatus::NOT_SET;
        }

        Aws::String GetNameForStackDriftDetectionStatus(StackDriftDetectionStatus enumValue)
        {
          switch(enumValue)
          {
          case StackDriftDetectionStatus::DETECTION_IN_PROGRESS:
            return "DETECTION_IN_PROGRESS";
          case StackDriftDetectionStatus::DETECTION_FAILED:
            return "DETECTION_FAILED";
          case StackDriftDetectionStatus::DETECTION_COMPLETE:
            return "DETECTION_COMPLETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackDriftDetectionStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
