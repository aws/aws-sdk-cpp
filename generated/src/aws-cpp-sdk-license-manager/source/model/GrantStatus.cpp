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

        static const int PENDING_WORKFLOW_HASH = HashingUtils::HashString("PENDING_WORKFLOW");
        static const int PENDING_ACCEPT_HASH = HashingUtils::HashString("PENDING_ACCEPT");
        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int FAILED_WORKFLOW_HASH = HashingUtils::HashString("FAILED_WORKFLOW");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int PENDING_DELETE_HASH = HashingUtils::HashString("PENDING_DELETE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int WORKFLOW_COMPLETED_HASH = HashingUtils::HashString("WORKFLOW_COMPLETED");


        GrantStatus GetGrantStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
