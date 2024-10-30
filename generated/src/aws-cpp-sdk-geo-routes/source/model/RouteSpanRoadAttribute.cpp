/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanRoadAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoRoutes
  {
    namespace Model
    {
      namespace RouteSpanRoadAttributeMapper
      {

        static const int Bridge_HASH = HashingUtils::HashString("Bridge");
        static const int BuiltUpArea_HASH = HashingUtils::HashString("BuiltUpArea");
        static const int ControlledAccessHighway_HASH = HashingUtils::HashString("ControlledAccessHighway");
        static const int DirtRoad_HASH = HashingUtils::HashString("DirtRoad");
        static const int DividedRoad_HASH = HashingUtils::HashString("DividedRoad");
        static const int Motorway_HASH = HashingUtils::HashString("Motorway");
        static const int PrivateRoad_HASH = HashingUtils::HashString("PrivateRoad");
        static const int Ramp_HASH = HashingUtils::HashString("Ramp");
        static const int RightHandTraffic_HASH = HashingUtils::HashString("RightHandTraffic");
        static const int Roundabout_HASH = HashingUtils::HashString("Roundabout");
        static const int Tunnel_HASH = HashingUtils::HashString("Tunnel");
        static const int UnderConstruction_HASH = HashingUtils::HashString("UnderConstruction");


        RouteSpanRoadAttribute GetRouteSpanRoadAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Bridge_HASH)
          {
            return RouteSpanRoadAttribute::Bridge;
          }
          else if (hashCode == BuiltUpArea_HASH)
          {
            return RouteSpanRoadAttribute::BuiltUpArea;
          }
          else if (hashCode == ControlledAccessHighway_HASH)
          {
            return RouteSpanRoadAttribute::ControlledAccessHighway;
          }
          else if (hashCode == DirtRoad_HASH)
          {
            return RouteSpanRoadAttribute::DirtRoad;
          }
          else if (hashCode == DividedRoad_HASH)
          {
            return RouteSpanRoadAttribute::DividedRoad;
          }
          else if (hashCode == Motorway_HASH)
          {
            return RouteSpanRoadAttribute::Motorway;
          }
          else if (hashCode == PrivateRoad_HASH)
          {
            return RouteSpanRoadAttribute::PrivateRoad;
          }
          else if (hashCode == Ramp_HASH)
          {
            return RouteSpanRoadAttribute::Ramp;
          }
          else if (hashCode == RightHandTraffic_HASH)
          {
            return RouteSpanRoadAttribute::RightHandTraffic;
          }
          else if (hashCode == Roundabout_HASH)
          {
            return RouteSpanRoadAttribute::Roundabout;
          }
          else if (hashCode == Tunnel_HASH)
          {
            return RouteSpanRoadAttribute::Tunnel;
          }
          else if (hashCode == UnderConstruction_HASH)
          {
            return RouteSpanRoadAttribute::UnderConstruction;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanRoadAttribute>(hashCode);
          }

          return RouteSpanRoadAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanRoadAttribute(RouteSpanRoadAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanRoadAttribute::NOT_SET:
            return {};
          case RouteSpanRoadAttribute::Bridge:
            return "Bridge";
          case RouteSpanRoadAttribute::BuiltUpArea:
            return "BuiltUpArea";
          case RouteSpanRoadAttribute::ControlledAccessHighway:
            return "ControlledAccessHighway";
          case RouteSpanRoadAttribute::DirtRoad:
            return "DirtRoad";
          case RouteSpanRoadAttribute::DividedRoad:
            return "DividedRoad";
          case RouteSpanRoadAttribute::Motorway:
            return "Motorway";
          case RouteSpanRoadAttribute::PrivateRoad:
            return "PrivateRoad";
          case RouteSpanRoadAttribute::Ramp:
            return "Ramp";
          case RouteSpanRoadAttribute::RightHandTraffic:
            return "RightHandTraffic";
          case RouteSpanRoadAttribute::Roundabout:
            return "Roundabout";
          case RouteSpanRoadAttribute::Tunnel:
            return "Tunnel";
          case RouteSpanRoadAttribute::UnderConstruction:
            return "UnderConstruction";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSpanRoadAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
