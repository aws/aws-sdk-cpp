/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/PullRequestEventType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCommit
  {
    namespace Model
    {
      namespace PullRequestEventTypeMapper
      {

        static constexpr uint32_t PULL_REQUEST_CREATED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_CREATED");
        static constexpr uint32_t PULL_REQUEST_STATUS_CHANGED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_STATUS_CHANGED");
        static constexpr uint32_t PULL_REQUEST_SOURCE_REFERENCE_UPDATED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_SOURCE_REFERENCE_UPDATED");
        static constexpr uint32_t PULL_REQUEST_MERGE_STATE_CHANGED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_MERGE_STATE_CHANGED");
        static constexpr uint32_t PULL_REQUEST_APPROVAL_RULE_CREATED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_CREATED");
        static constexpr uint32_t PULL_REQUEST_APPROVAL_RULE_UPDATED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_UPDATED");
        static constexpr uint32_t PULL_REQUEST_APPROVAL_RULE_DELETED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_DELETED");
        static constexpr uint32_t PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN");
        static constexpr uint32_t PULL_REQUEST_APPROVAL_STATE_CHANGED_HASH = ConstExprHashingUtils::HashString("PULL_REQUEST_APPROVAL_STATE_CHANGED");


        PullRequestEventType GetPullRequestEventTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PULL_REQUEST_CREATED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_CREATED;
          }
          else if (hashCode == PULL_REQUEST_STATUS_CHANGED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_STATUS_CHANGED;
          }
          else if (hashCode == PULL_REQUEST_SOURCE_REFERENCE_UPDATED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_SOURCE_REFERENCE_UPDATED;
          }
          else if (hashCode == PULL_REQUEST_MERGE_STATE_CHANGED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_MERGE_STATE_CHANGED;
          }
          else if (hashCode == PULL_REQUEST_APPROVAL_RULE_CREATED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_CREATED;
          }
          else if (hashCode == PULL_REQUEST_APPROVAL_RULE_UPDATED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_UPDATED;
          }
          else if (hashCode == PULL_REQUEST_APPROVAL_RULE_DELETED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_DELETED;
          }
          else if (hashCode == PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN;
          }
          else if (hashCode == PULL_REQUEST_APPROVAL_STATE_CHANGED_HASH)
          {
            return PullRequestEventType::PULL_REQUEST_APPROVAL_STATE_CHANGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PullRequestEventType>(hashCode);
          }

          return PullRequestEventType::NOT_SET;
        }

        Aws::String GetNameForPullRequestEventType(PullRequestEventType enumValue)
        {
          switch(enumValue)
          {
          case PullRequestEventType::NOT_SET:
            return {};
          case PullRequestEventType::PULL_REQUEST_CREATED:
            return "PULL_REQUEST_CREATED";
          case PullRequestEventType::PULL_REQUEST_STATUS_CHANGED:
            return "PULL_REQUEST_STATUS_CHANGED";
          case PullRequestEventType::PULL_REQUEST_SOURCE_REFERENCE_UPDATED:
            return "PULL_REQUEST_SOURCE_REFERENCE_UPDATED";
          case PullRequestEventType::PULL_REQUEST_MERGE_STATE_CHANGED:
            return "PULL_REQUEST_MERGE_STATE_CHANGED";
          case PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_CREATED:
            return "PULL_REQUEST_APPROVAL_RULE_CREATED";
          case PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_UPDATED:
            return "PULL_REQUEST_APPROVAL_RULE_UPDATED";
          case PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_DELETED:
            return "PULL_REQUEST_APPROVAL_RULE_DELETED";
          case PullRequestEventType::PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN:
            return "PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN";
          case PullRequestEventType::PULL_REQUEST_APPROVAL_STATE_CHANGED:
            return "PULL_REQUEST_APPROVAL_STATE_CHANGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PullRequestEventTypeMapper
    } // namespace Model
  } // namespace CodeCommit
} // namespace Aws
