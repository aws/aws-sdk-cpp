/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53resolver/model/ResolverEndpointStatus.h>
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
      namespace ResolverEndpointStatusMapper
      {

        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int OPERATIONAL_HASH = HashingUtils::HashString("OPERATIONAL");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int AUTO_RECOVERING_HASH = HashingUtils::HashString("AUTO_RECOVERING");
        static const int ACTION_NEEDED_HASH = HashingUtils::HashString("ACTION_NEEDED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        ResolverEndpointStatus GetResolverEndpointStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ResolverEndpointStatus::CREATING;
          }
          else if (hashCode == OPERATIONAL_HASH)
          {
            return ResolverEndpointStatus::OPERATIONAL;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ResolverEndpointStatus::UPDATING;
          }
          else if (hashCode == AUTO_RECOVERING_HASH)
          {
            return ResolverEndpointStatus::AUTO_RECOVERING;
          }
          else if (hashCode == ACTION_NEEDED_HASH)
          {
            return ResolverEndpointStatus::ACTION_NEEDED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ResolverEndpointStatus::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ResolverEndpointStatus>(hashCode);
          }

          return ResolverEndpointStatus::NOT_SET;
        }

        Aws::String GetNameForResolverEndpointStatus(ResolverEndpointStatus enumValue)
        {
          switch(enumValue)
          {
          case ResolverEndpointStatus::CREATING:
            return "CREATING";
          case ResolverEndpointStatus::OPERATIONAL:
            return "OPERATIONAL";
          case ResolverEndpointStatus::UPDATING:
            return "UPDATING";
          case ResolverEndpointStatus::AUTO_RECOVERING:
            return "AUTO_RECOVERING";
          case ResolverEndpointStatus::ACTION_NEEDED:
            return "ACTION_NEEDED";
          case ResolverEndpointStatus::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ResolverEndpointStatusMapper
    } // namespace Model
  } // namespace Route53Resolver
} // namespace Aws
