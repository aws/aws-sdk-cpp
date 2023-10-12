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

        static constexpr uint32_t pending_HASH = ConstExprHashingUtils::HashString("pending");
        static constexpr uint32_t active_HASH = ConstExprHashingUtils::HashString("active");
        static constexpr uint32_t blackhole_HASH = ConstExprHashingUtils::HashString("blackhole");
        static constexpr uint32_t deleting_HASH = ConstExprHashingUtils::HashString("deleting");
        static constexpr uint32_t deleted_HASH = ConstExprHashingUtils::HashString("deleted");


        TransitGatewayRouteState GetTransitGatewayRouteStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case TransitGatewayRouteState::NOT_SET:
            return {};
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
