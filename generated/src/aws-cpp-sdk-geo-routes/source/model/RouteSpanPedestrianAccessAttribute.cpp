/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanPedestrianAccessAttribute.h>
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
      namespace RouteSpanPedestrianAccessAttributeMapper
      {

        static const int Allowed_HASH = HashingUtils::HashString("Allowed");
        static const int Indoors_HASH = HashingUtils::HashString("Indoors");
        static const int NoThroughTraffic_HASH = HashingUtils::HashString("NoThroughTraffic");
        static const int Park_HASH = HashingUtils::HashString("Park");
        static const int Stairs_HASH = HashingUtils::HashString("Stairs");
        static const int TollRoad_HASH = HashingUtils::HashString("TollRoad");


        RouteSpanPedestrianAccessAttribute GetRouteSpanPedestrianAccessAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::Allowed;
          }
          else if (hashCode == Indoors_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::Indoors;
          }
          else if (hashCode == NoThroughTraffic_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::NoThroughTraffic;
          }
          else if (hashCode == Park_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::Park;
          }
          else if (hashCode == Stairs_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::Stairs;
          }
          else if (hashCode == TollRoad_HASH)
          {
            return RouteSpanPedestrianAccessAttribute::TollRoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanPedestrianAccessAttribute>(hashCode);
          }

          return RouteSpanPedestrianAccessAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanPedestrianAccessAttribute(RouteSpanPedestrianAccessAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanPedestrianAccessAttribute::NOT_SET:
            return {};
          case RouteSpanPedestrianAccessAttribute::Allowed:
            return "Allowed";
          case RouteSpanPedestrianAccessAttribute::Indoors:
            return "Indoors";
          case RouteSpanPedestrianAccessAttribute::NoThroughTraffic:
            return "NoThroughTraffic";
          case RouteSpanPedestrianAccessAttribute::Park:
            return "Park";
          case RouteSpanPedestrianAccessAttribute::Stairs:
            return "Stairs";
          case RouteSpanPedestrianAccessAttribute::TollRoad:
            return "TollRoad";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteSpanPedestrianAccessAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
