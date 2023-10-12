/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ReceivedStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LicenseManager
  {
    namespace Model
    {
      namespace ReceivedStatusMapper
      {

        static constexpr uint32_t PENDING_WORKFLOW_HASH = ConstExprHashingUtils::HashString("PENDING_WORKFLOW");
        static constexpr uint32_t PENDING_ACCEPT_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPT");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_WORKFLOW_HASH = ConstExprHashingUtils::HashString("FAILED_WORKFLOW");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t WORKFLOW_COMPLETED_HASH = ConstExprHashingUtils::HashString("WORKFLOW_COMPLETED");


        ReceivedStatus GetReceivedStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_WORKFLOW_HASH)
          {
            return ReceivedStatus::PENDING_WORKFLOW;
          }
          else if (hashCode == PENDING_ACCEPT_HASH)
          {
            return ReceivedStatus::PENDING_ACCEPT;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return ReceivedStatus::REJECTED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ReceivedStatus::ACTIVE;
          }
          else if (hashCode == FAILED_WORKFLOW_HASH)
          {
            return ReceivedStatus::FAILED_WORKFLOW;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ReceivedStatus::DELETED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ReceivedStatus::DISABLED;
          }
          else if (hashCode == WORKFLOW_COMPLETED_HASH)
          {
            return ReceivedStatus::WORKFLOW_COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ReceivedStatus>(hashCode);
          }

          return ReceivedStatus::NOT_SET;
        }

        Aws::String GetNameForReceivedStatus(ReceivedStatus enumValue)
        {
          switch(enumValue)
          {
          case ReceivedStatus::NOT_SET:
            return {};
          case ReceivedStatus::PENDING_WORKFLOW:
            return "PENDING_WORKFLOW";
          case ReceivedStatus::PENDING_ACCEPT:
            return "PENDING_ACCEPT";
          case ReceivedStatus::REJECTED:
            return "REJECTED";
          case ReceivedStatus::ACTIVE:
            return "ACTIVE";
          case ReceivedStatus::FAILED_WORKFLOW:
            return "FAILED_WORKFLOW";
          case ReceivedStatus::DELETED:
            return "DELETED";
          case ReceivedStatus::DISABLED:
            return "DISABLED";
          case ReceivedStatus::WORKFLOW_COMPLETED:
            return "WORKFLOW_COMPLETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ReceivedStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
