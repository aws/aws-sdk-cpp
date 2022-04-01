/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverRuleStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Route53Resolver
  {
    namespace Model
    {
      namespace ResolverRuleStatusMapper
      {

        static const int COMPLETE_HASH = HashingUtils::HashString("COMPLETE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ResolverRuleStatus GetResolverRuleStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == COMPLETE_HASH)
          {
            return ResolverRuleStatus::COMPLETE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResolverRuleStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ResolverRuleStatus::UPDATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResolverRuleStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverRuleStatus>(hashCode);
          }

          return ResolverRuleStatus::NOT_SET;
        }

        Aws::String GetNameForResolverRuleStatus(ResolverRuleStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverRuleStatus::COMPLETE:
            return "COMPLETE";
          case ResolverRuleStatus::DELETING:
            return "DELETING";
          case ResolverRuleStatus::UPDATING:
            return "UPDATING";
          case ResolverRuleStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverRuleStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
