/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackSetDriftDetectionStatus.h>
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
      namespace StackSetDriftDetectionStatusMapper
      {

        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int PARTIAL_SUCCESS_HASH = HashingUtils::HashString("PARTIAL_SUCCESS");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int STOPPED_HASH = HashingUtils::HashString("STOPPED");


        StackSetDriftDetectionStatus GetStackSetDriftDetectionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETED_HASH)
          {
            return StackSetDriftDetectionStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return StackSetDriftDetectionStatus::FAILED;
          }
          else if (hashCode == PARTIAL_SUCCESS_HASH)
          {
            return StackSetDriftDetectionStatus::PARTIAL_SUCCESS;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return StackSetDriftDetectionStatus::IN_PROGRESS;
          }
          else if (hashCode == STOPPED_HASH)
          {
            return StackSetDriftDetectionStatus::STOPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StackSetDriftDetectionStatus>(hashCode);
          }

          return StackSetDriftDetectionStatus::NOT_SET;
        }

        Aws::String GetNameForStackSetDriftDetectionStatus(StackSetDriftDetectionStatus enumValue)
        {
          switch(enumValue)
          {
          case StackSetDriftDetectionStatus::COMPLETED:
            return "COMPLETED";
          case StackSetDriftDetectionStatus::FAILED:
            return "FAILED";
          case StackSetDriftDetectionStatus::PARTIAL_SUCCESS:
            return "PARTIAL_SUCCESS";
          case StackSetDriftDetectionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case StackSetDriftDetectionStatus::STOPPED:
            return "STOPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StackSetDriftDetectionStatusMapper
    } // namespace Model
  } // namespace CloudFormation
} // namespace Aws
