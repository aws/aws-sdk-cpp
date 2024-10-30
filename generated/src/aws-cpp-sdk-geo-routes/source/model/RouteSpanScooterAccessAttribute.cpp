/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanScooterAccessAttribute.h>
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
      namespace RouteSpanScooterAccessAttributeMapper
      {

        static const int Allowed_HASH = HashingUtils::HashString("Allowed");
        static const int NoThroughTraffic_HASH = HashingUtils::HashString("NoThroughTraffic");
        static const int TollRoad_HASH = HashingUtils::HashString("TollRoad");


        RouteSpanScooterAccessAttribute GetRouteSpanScooterAccessAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return RouteSpanScooterAccessAttribute::Allowed;
          }
          else if (hashCode == NoThroughTraffic_HASH)
          {
            return RouteSpanScooterAccessAttribute::NoThroughTraffic;
          }
          else if (hashCode == TollRoad_HASH)
          {
            return RouteSpanScooterAccessAttribute::TollRoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanScooterAccessAttribute>(hashCode);
          }

          return RouteSpanScooterAccessAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanScooterAccessAttribute(RouteSpanScooterAccessAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanScooterAccessAttribute::NOT_SET:
            return {};
          case RouteSpanScooterAccessAttribute::Allowed:
            return "Allowed";
          case RouteSpanScooterAccessAttribute::NoThroughTraffic:
            return "NoThroughTraffic";
          case RouteSpanScooterAccessAttribute::TollRoad:
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

      } // namespace RouteSpanScooterAccessAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
