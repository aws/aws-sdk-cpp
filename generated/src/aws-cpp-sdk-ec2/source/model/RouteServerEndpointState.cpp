/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerEndpointState.h>
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
      namespace RouteServerEndpointStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");
        static const int failing_HASH = HashingUtils::HashString("failing");
        static const int failed_HASH = HashingUtils::HashString("failed");
        static const int delete_failed_HASH = HashingUtils::HashString("delete-failed");


        RouteServerEndpointState GetRouteServerEndpointStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return RouteServerEndpointState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return RouteServerEndpointState::available;
          }
          else if (hashCode == deleting_HASH)
          {
            return RouteServerEndpointState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return RouteServerEndpointState::deleted;
          }
          else if (hashCode == failing_HASH)
          {
            return RouteServerEndpointState::failing;
          }
          else if (hashCode == failed_HASH)
          {
            return RouteServerEndpointState::failed;
          }
          else if (hashCode == delete_failed_HASH)
          {
            return RouteServerEndpointState::delete_failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerEndpointState>(hashCode);
          }

          return RouteServerEndpointState::NOT_SET;
        }

        Aws::String GetNameForRouteServerEndpointState(RouteServerEndpointState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerEndpointState::NOT_SET:
            return {};
          case RouteServerEndpointState::pending:
            return "pending";
          case RouteServerEndpointState::available:
            return "available";
          case RouteServerEndpointState::deleting:
            return "deleting";
          case RouteServerEndpointState::deleted:
            return "deleted";
          case RouteServerEndpointState::failing:
            return "failing";
          case RouteServerEndpointState::failed:
            return "failed";
          case RouteServerEndpointState::delete_failed:
            return "delete-failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerEndpointStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
