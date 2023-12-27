/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/RuleBasedMatchingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace RuleBasedMatchingStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int IN_PROGRESS_HASH = HashingUtils::HashString("IN_PROGRESS");
        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");


        RuleBasedMatchingStatus GetRuleBasedMatchingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return RuleBasedMatchingStatus::PENDING;
          }
          else if (hashCode == IN_PROGRESS_HASH)
          {
            return RuleBasedMatchingStatus::IN_PROGRESS;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return RuleBasedMatchingStatus::ACTIVE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RuleBasedMatchingStatus>(hashCode);
          }

          return RuleBasedMatchingStatus::NOT_SET;
        }

        Aws::String GetNameForRuleBasedMatchingStatus(RuleBasedMatchingStatus enumValue)
        {
          switch(enumValue)
          {
          case RuleBasedMatchingStatus::NOT_SET:
            return {};
          case RuleBasedMatchingStatus::PENDING:
            return "PENDING";
          case RuleBasedMatchingStatus::IN_PROGRESS:
            return "IN_PROGRESS";
          case RuleBasedMatchingStatus::ACTIVE:
            return "ACTIVE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RuleBasedMatchingStatusMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
