/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerPeerState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace RouteServerPeerStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int failing_HASH = HashingUtils::HashString("failing");
        static const int failed_HASH = HashingUtils::HashString("failed");


        RouteServerPeerState GetRouteServerPeerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return RouteServerPeerState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return RouteServerPeerState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return RouteServerPeerState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return RouteServerPeerState::deleted;
          }
          else if (hashCode == failing_HASH)
          {
            return RouteServerPeerState::failing;
          }
          else if (hashCode == failed_HASH)
          {
            return RouteServerPeerState::failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerPeerState>(hashCode);
          }

          return RouteServerPeerState::NOT_SET;
        }

        Aws::String GetNameForRouteServerPeerState(RouteServerPeerState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerPeerState::NOT_SET:
            return {};
          case RouteServerPeerState::pending:
            return "pending";
          case RouteServerPeerState::available:
            return "available";
          case RouteServerPeerState::deleting:
            return "deleting";
          case RouteServerPeerState::deleted:
            return "deleted";
          case RouteServerPeerState::failing:
            return "failing";
          case RouteServerPeerState::failed:
            return "failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerPeerStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
