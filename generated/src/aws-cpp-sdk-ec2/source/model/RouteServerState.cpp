/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RouteServerState.h>
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
      namespace RouteServerStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int available_HASH = HashingUtils::HashString("available");
        static const int modifying_HASH = HashingUtils::HashString("modifying");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        RouteServerState GetRouteServerStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return RouteServerState::pending;
          }
          else if (hashCode == available_HASH)
          {
            return RouteServerState::available;
          }
          else if (hashCode == modifying_HASH)
          {
            return RouteServerState::modifying;
          }
          else if (hashCode == deleting_HASH)
          {
            return RouteServerState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return RouteServerState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteServerState>(hashCode);
          }

          return RouteServerState::NOT_SET;
        }

        Aws::String GetNameForRouteServerState(RouteServerState enumValue)
        {
          switch(enumValue)
          {
          case RouteServerState::NOT_SET:
            return {};
          case RouteServerState::pending:
            return "pending";
          case RouteServerState::available:
            return "available";
          case RouteServerState::modifying:
            return "modifying";
          case RouteServerState::deleting:
            return "deleting";
          case RouteServerState::deleted:
            return "deleted";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteServerStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
