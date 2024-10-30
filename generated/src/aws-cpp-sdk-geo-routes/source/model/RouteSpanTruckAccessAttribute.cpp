/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanTruckAccessAttribute.h>
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
      namespace RouteSpanTruckAccessAttributeMapper
      {

        static const int Allowed_HASH = HashingUtils::HashString("Allowed");
        static const int NoThroughTraffic_HASH = HashingUtils::HashString("NoThroughTraffic");
        static const int TollRoad_HASH = HashingUtils::HashString("TollRoad");


        RouteSpanTruckAccessAttribute GetRouteSpanTruckAccessAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return RouteSpanTruckAccessAttribute::Allowed;
          }
          else if (hashCode == NoThroughTraffic_HASH)
          {
            return RouteSpanTruckAccessAttribute::NoThroughTraffic;
          }
          else if (hashCode == TollRoad_HASH)
          {
            return RouteSpanTruckAccessAttribute::TollRoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanTruckAccessAttribute>(hashCode);
          }

          return RouteSpanTruckAccessAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanTruckAccessAttribute(RouteSpanTruckAccessAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanTruckAccessAttribute::NOT_SET:
            return {};
          case RouteSpanTruckAccessAttribute::Allowed:
            return "Allowed";
          case RouteSpanTruckAccessAttribute::NoThroughTraffic:
            return "NoThroughTraffic";
          case RouteSpanTruckAccessAttribute::TollRoad:
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

      } // namespace RouteSpanTruckAccessAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
