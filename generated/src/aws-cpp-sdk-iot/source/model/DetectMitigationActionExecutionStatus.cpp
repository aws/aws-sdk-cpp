/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionExecutionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace IoT
  {
    namespace Model
    {
      namespace DetectMitigationActionExecutionStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int SKIPPED_HASH = HashingUtils::HashString("SKIPPED");


        DetectMitigationActionExecutionStatus GetDetectMitigationActionExecutionStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DetectMitigationActionExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return DetectMitigationActionExecutionStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DetectMitigationActionExecutionStatus::FAILED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return DetectMitigationActionExecutionStatus::SKIPPED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectMitigationActionExecutionStatus>(hashCode);
          }

          return DetectMitigationActionExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForDetectMitigationActionExecutionStatus(DetectMitigationActionExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case DetectMitigationActionExecutionStatus::NOT_SET:
            return {};
          case DetectMitigationActionExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DetectMitigationActionExecutionStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case DetectMitigationActionExecutionStatus::FAILED:
            return "FAILED";
          case DetectMitigationActionExecutionStatus::SKIPPED:
            return "SKIPPED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetectMitigationActionExecutionStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
