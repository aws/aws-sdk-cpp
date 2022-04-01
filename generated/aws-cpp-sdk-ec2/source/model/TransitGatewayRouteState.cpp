/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteState.h>
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
      namespace TransitGatewayRouteStateMapper
      {

        static const int pending_HASH = HashingUtils::HashString("pending");
        static const int active_HASH = HashingUtils::HashString("active");
        static const int blackhole_HASH = HashingUtils::HashString("blackhole");
        static const int deleting_HASH = HashingUtils::HashString("deleting");
        static const int deleted_HASH = HashingUtils::HashString("deleted");


        TransitGatewayRouteState GetTransitGatewayRouteStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == pending_HASH)
          {
            return TransitGatewayRouteState::pending;
          }
          else if (hashCode == active_HASH)
          {
            return TransitGatewayRouteState::active;
          }
          else if (hashCode == blackhole_HASH)
          {
            return TransitGatewayRouteState::blackhole;
          }
          else if (hashCode == deleting_HASH)
          {
            return TransitGatewayRouteState::deleting;
          }
          else if (hashCode == deleted_HASH)
          {
            return TransitGatewayRouteState::deleted;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRouteState>(hashCode);
          }

          return TransitGatewayRouteState::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRouteState(TransitGatewayRouteState enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRouteState::pending:
            return "pending";
          case TransitGatewayRouteState::active:
            return "active";
          case TransitGatewayRouteState::blackhole:
            return "blackhole";
          case TransitGatewayRouteState::deleting:
            return "deleting";
          case TransitGatewayRouteState::deleted:
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

      } // namespace TransitGatewayRouteStateMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
