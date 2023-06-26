/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
