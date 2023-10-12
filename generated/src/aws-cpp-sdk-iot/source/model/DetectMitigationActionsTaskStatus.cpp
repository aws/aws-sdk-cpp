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

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t SUCCESSFUL_HASH = ConstExprHashingUtils::HashString("SUCCESSFUL");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");


        DetectMitigationActionsTaskStatus GetDetectMitigationActionsTaskStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
