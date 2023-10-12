/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/AuditMitigationActionsExecutionStatus.h>
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
      namespace AuditMitigationActionsExecutionStatusMapper
      {

        static constexpr uint32_t IN_PROGRESS_HASH = ConstExprHashingUtils::HashString("IN_PROGRESS");
        static constexpr uint32_t COMPLETED_HASH = ConstExprHashingUtils::HashString("COMPLETED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t CANCELED_HASH = ConstExprHashingUtils::HashString("CANCELED");
        static constexpr uint32_t SKIPPED_HASH = ConstExprHashingUtils::HashString("SKIPPED");
        static constexpr uint32_t PENDING_HASH = ConstExprHashingUtils::HashString("PENDING");


        AuditMitigationActionsExecutionStatus GetAuditMitigationActionsExecutionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == IN_PROGRESS_HASH)
          {
            return AuditMitigationActionsExecutionStatus::IN_PROGRESS;
          }
          else if (hashCode == COMPLETED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::COMPLETED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::FAILED;
          }
          else if (hashCode == CANCELED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::CANCELED;
          }
          else if (hashCode == SKIPPED_HASH)
          {
            return AuditMitigationActionsExecutionStatus::SKIPPED;
          }
          else if (hashCode == PENDING_HASH)
          {
            return AuditMitigationActionsExecutionStatus::PENDING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AuditMitigationActionsExecutionStatus>(hashCode);
          }

          return AuditMitigationActionsExecutionStatus::NOT_SET;
        }

        Aws::String GetNameForAuditMitigationActionsExecutionStatus(AuditMitigationActionsExecutionStatus enumValue)
        {
          switch(enumValue)
          {
          case AuditMitigationActionsExecutionStatus::NOT_SET:
            return {};
          case AuditMitigationActionsExecutionStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case AuditMitigationActionsExecutionStatus::COMPLETED:
            return "COMPLETED";
          case AuditMitigationActionsExecutionStatus::FAILED:
            return "FAILED";
          case AuditMitigationActionsExecutionStatus::CANCELED:
            return "CANCELED";
          case AuditMitigationActionsExecutionStatus::SKIPPED:
            return "SKIPPED";
          case AuditMitigationActionsExecutionStatus::PENDING:
            return "PENDING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AuditMitigationActionsExecutionStatusMapper
    } // namespace Model
  } // namespace IoT
} // namespace Aws
