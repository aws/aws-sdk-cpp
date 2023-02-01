/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRouteTableMode.h>
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
      namespace LocalGatewayRouteTableModeMapper
      {

        static const int direct_vpc_routing_HASH = HashingUtils::HashString("direct-vpc-routing");
        static const int coip_HASH = HashingUtils::HashString("coip");


        LocalGatewayRouteTableMode GetLocalGatewayRouteTableModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == direct_vpc_routing_HASH)
          {
            return LocalGatewayRouteTableMode::direct_vpc_routing;
          }
          else if (hashCode == coip_HASH)
          {
            return LocalGatewayRouteTableMode::coip;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LocalGatewayRouteTableMode>(hashCode);
          }

          return LocalGatewayRouteTableMode::NOT_SET;
        }

        Aws::String GetNameForLocalGatewayRouteTableMode(LocalGatewayRouteTableMode enumValue)
        {
          switch(enumValue)
          {
          case LocalGatewayRouteTableMode::direct_vpc_routing:
            return "direct-vpc-routing";
          case LocalGatewayRouteTableMode::coip:
            return "coip";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LocalGatewayRouteTableModeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
