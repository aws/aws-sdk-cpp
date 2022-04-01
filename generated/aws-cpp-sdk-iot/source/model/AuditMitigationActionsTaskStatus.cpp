/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditMitigationActionsTaskStatus.h>
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
      namespace AuditMitigationActionsTaskStatusMapper
      {

        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int COMPLETED_HASH = HashingUtils::HashString("COMPLETED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int CANCELED_HASH = HashingUtils::HashString("CANCELED");


        AuditMitigationActionsTaskStatus GetAuditMitigationActionsTaskStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditMitigationActionsTaskStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AuditMitigationActionsTaskStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditMitigationActionsTaskStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditMitigationActionsTaskStatus::CANCELED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditMitigationActionsTaskStatus>(hashCode);
          }

          return AuditMitigationActionsTaskStatus::NOT_SET;
        }

        Aws::String GetNameForAuditMitigationActionsTaskStatus(AuditMitigationActionsTaskStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditMitigationActionsTaskStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditMitigationActionsTaskStatus::COMPLETED:
            return "COMPLETED";
          case AuditMitigationActionsTaskStatus::FAILED:
            return "FAILED";
          case AuditMitigationActionsTaskStatus::CANCELED:
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

      } // namespace AuditMitigationActionsTaskStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
