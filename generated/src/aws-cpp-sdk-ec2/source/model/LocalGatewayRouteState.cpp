/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRouteState.h>
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
      namespace LocalGatewayRouteStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int blackhole_HASH = HashingUtils::HashString("blackhole");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        LocalGatewayRouteState GetLocalGatewayRouteStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return LocalGatewayRouteState::pending;
          }
          else if (hashCode == active_HASH)
          {
            return LocalGatewayRouteState::active;
          }
          else if (hashCode == blackhole_HASH)
          {
            return LocalGatewayRouteState::blackhole;
          }
          else if (hashCode == deleting_HASH)
          {
            return LocalGatewayRouteState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return LocalGatewayRouteState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalGatewayRouteState>(hashCode);
          }

          return LocalGatewayRouteState::NOT_SET;
        }

        Aws::String GetNameForLocalGatewayRouteState(LocalGatewayRouteState enumValue)
        {
          switch(enumValue)
          {
          case LocalGatewayRouteState::pending:
            return "pending";
          case LocalGatewayRouteState::active:
            return "active";
          case LocalGatewayRouteState::blackhole:
            return "blackhole";
          case LocalGatewayRouteState::deleting:
            return "deleting";
          case LocalGatewayRouteState::deleted:
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

      } // namespace LocalGatewayRouteStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
