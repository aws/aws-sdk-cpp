/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverQueryLogConfigStatus.h>
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
      namespace ResolverQueryLogConfigStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        ResolverQueryLogConfigStatus GetResolverQueryLogConfigStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ResolverQueryLogConfigStatus::CREATING;
          }
          else if (hashCode == CREATED_HASH)
          {
            return ResolverQueryLogConfigStatus::CREATED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResolverQueryLogConfigStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ResolverQueryLogConfigStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverQueryLogConfigStatus>(hashCode);
          }

          return ResolverQueryLogConfigStatus::NOT_SET;
        }

        Aws::String GetNameForResolverQueryLogConfigStatus(ResolverQueryLogConfigStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverQueryLogConfigStatus::CREATING:
            return "CREATING";
          case ResolverQueryLogConfigStatus::CREATED:
            return "CREATED";
          case ResolverQueryLogConfigStatus::DELETING:
            return "DELETING";
          case ResolverQueryLogConfigStatus::FAILED:
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

      } // namespace ResolverQueryLogConfigStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
