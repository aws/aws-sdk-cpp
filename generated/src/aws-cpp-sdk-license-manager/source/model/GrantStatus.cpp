/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GrantStatus.h>
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
      namespace GrantStatusMapper
      {

        static constexpr uint32_t PENDING_WORKFLOW_HASH = ConstExprHashingUtils::HashString("PENDING_WORKFLOW");
        static constexpr uint32_t PENDING_ACCEPT_HASH = ConstExprHashingUtils::HashString("PENDING_ACCEPT");
        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t FAILED_WORKFLOW_HASH = ConstExprHashingUtils::HashString("FAILED_WORKFLOW");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t PENDING_DELETE_HASH = ConstExprHashingUtils::HashString("PENDING_DELETE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t WORKFLOW_COMPLETED_HASH = ConstExprHashingUtils::HashString("WORKFLOW_COMPLETED");


        GrantStatus GetGrantStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_WORKFLOW_HASH)
          {
            return GrantStatus::PENDING_WORKFLOW;
          }
          else if (hashCode == PENDING_ACCEPT_HASH)
          {
            return GrantStatus::PENDING_ACCEPT;
          }
          else if (hashCode == REJECTED_HASH)
          {
            return GrantStatus::REJECTED;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return GrantStatus::ACTIVE;
          }
          else if (hashCode == FAILED_WORKFLOW_HASH)
          {
            return GrantStatus::FAILED_WORKFLOW;
          }
          else if (hashCode == DELETED_HASH)
          {
            return GrantStatus::DELETED;
          }
          else if (hashCode == PENDING_DELETE_HASH)
          {
            return GrantStatus::PENDING_DELETE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return GrantStatus::DISABLED;
          }
          else if (hashCode == WORKFLOW_COMPLETED_HASH)
          {
            return GrantStatus::WORKFLOW_COMPLETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GrantStatus>(hashCode);
          }

          return GrantStatus::NOT_SET;
        }

        Aws::String GetNameForGrantStatus(GrantStatus enumValue)
        {
          switch(enumValue)
          {
          case GrantStatus::NOT_SET:
            return {};
          case GrantStatus::PENDING_WORKFLOW:
            return "PENDING_WORKFLOW";
          case GrantStatus::PENDING_ACCEPT:
            return "PENDING_ACCEPT";
          case GrantStatus::REJECTED:
            return "REJECTED";
          case GrantStatus::ACTIVE:
            return "ACTIVE";
          case GrantStatus::FAILED_WORKFLOW:
            return "FAILED_WORKFLOW";
          case GrantStatus::DELETED:
            return "DELETED";
          case GrantStatus::PENDING_DELETE:
            return "PENDING_DELETE";
          case GrantStatus::DISABLED:
            return "DISABLED";
          case GrantStatus::WORKFLOW_COMPLETED:
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

      } // namespace GrantStatusMapper
    } // namespace Model
  } // namespace LicenseManager
} // namespace Aws
