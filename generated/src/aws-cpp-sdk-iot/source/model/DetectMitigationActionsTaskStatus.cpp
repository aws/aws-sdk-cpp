/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DetectMitigationActionsTaskStatus.h>
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
      namespace DetectMitigationActionsTaskStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int SUCCESSFUL_HASH = HashingUtils::HashString("SUCCESSFUL");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        DetectMitigationActionsTaskStatus GetDetectMitigationActionsTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return DetectMitigationActionsTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == SUCCESSFUL_HASH)
          {
            return DetectMitigationActionsTaskStatus::SUCCESSFUL;
          }
          else if (hashCode == FAILED_HASH)
          {
            return DetectMitigationActionsTaskStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return DetectMitigationActionsTaskStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DetectMitigationActionsTaskStatus>(hashCode);
          }

          return DetectMitigationActionsTaskStatus::NOT_SET;
        }

        Aws::String GetNameForDetectMitigationActionsTaskStatus(DetectMitigationActionsTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case DetectMitigationActionsTaskStatus::NOT_SET:
            return {};
          case DetectMitigationActionsTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case DetectMitigationActionsTaskStatus::SUCCESSFUL:
            return "SUCCESSFUL";
          case DetectMitigationActionsTaskStatus::FAILED:
            return "FAILED";
          case DetectMitigationActionsTaskStatus::CANCELED:
            return "CANCELED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DetectMitigationActionsTaskStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
