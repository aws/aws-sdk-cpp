/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRouteTableAnnouncementDirection.h>
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
      namespace TransitGatewayRouteTableAnnouncementDirectionMapper
      {

        static const int outgoing_HASH = HashingUtils::HashString("outgoing");
        static const int incoming_HASH = HashingUtils::HashString("incoming");


        TransitGatewayRouteTableAnnouncementDirection GetTransitGatewayRouteTableAnnouncementDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == outgoing_HASH)
          {
            return TransitGatewayRouteTableAnnouncementDirection::outgoing;
          }
          else if (hashCode == incoming_HASH)
          {
            return TransitGatewayRouteTableAnnouncementDirection::incoming;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TransitGatewayRouteTableAnnouncementDirection>(hashCode);
          }

          return TransitGatewayRouteTableAnnouncementDirection::NOT_SET;
        }

        Aws::String GetNameForTransitGatewayRouteTableAnnouncementDirection(TransitGatewayRouteTableAnnouncementDirection enumValue)
        {
          switch(enumValue)
          {
          case TransitGatewayRouteTableAnnouncementDirection::NOT_SET:
            return {};
          case TransitGatewayRouteTableAnnouncementDirection::outgoing:
            return "outgoing";
          case TransitGatewayRouteTableAnnouncementDirection::incoming:
            return "incoming";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TransitGatewayRouteTableAnnouncementDirectionMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
