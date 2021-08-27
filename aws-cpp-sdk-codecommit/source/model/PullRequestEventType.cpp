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

        static const int PULL_REQUEST_CREATED_HASH = HashingUtils::HashString("PULL_REQUEST_CREATED");
        static const int PULL_REQUEST_STATUS_CHANGED_HASH = HashingUtils::HashString("PULL_REQUEST_STATUS_CHANGED");
        static const int PULL_REQUEST_SOURCE_REFERENCE_UPDATED_HASH = HashingUtils::HashString("PULL_REQUEST_SOURCE_REFERENCE_UPDATED");
        static const int PULL_REQUEST_MERGE_STATE_CHANGED_HASH = HashingUtils::HashString("PULL_REQUEST_MERGE_STATE_CHANGED");
        static const int PULL_REQUEST_APPROVAL_RULE_CREATED_HASH = HashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_CREATED");
        static const int PULL_REQUEST_APPROVAL_RULE_UPDATED_HASH = HashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_UPDATED");
        static const int PULL_REQUEST_APPROVAL_RULE_DELETED_HASH = HashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_DELETED");
        static const int PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN_HASH = HashingUtils::HashString("PULL_REQUEST_APPROVAL_RULE_OVERRIDDEN");
        static const int PULL_REQUEST_APPROVAL_STATE_CHANGED_HASH = HashingUtils::HashString("PULL_REQUEST_APPROVAL_STATE_CHANGED");


        PullRequestEventType GetPullRequestEventTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
