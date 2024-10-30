/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteSpanCarAccessAttribute.h>
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
      namespace RouteSpanCarAccessAttributeMapper
      {

        static const int Allowed_HASH = HashingUtils::HashString("Allowed");
        static const int NoThroughTraffic_HASH = HashingUtils::HashString("NoThroughTraffic");
        static const int TollRoad_HASH = HashingUtils::HashString("TollRoad");


        RouteSpanCarAccessAttribute GetRouteSpanCarAccessAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Allowed_HASH)
          {
            return RouteSpanCarAccessAttribute::Allowed;
          }
          else if (hashCode == NoThroughTraffic_HASH)
          {
            return RouteSpanCarAccessAttribute::NoThroughTraffic;
          }
          else if (hashCode == TollRoad_HASH)
          {
            return RouteSpanCarAccessAttribute::TollRoad;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteSpanCarAccessAttribute>(hashCode);
          }

          return RouteSpanCarAccessAttribute::NOT_SET;
        }

        Aws::String GetNameForRouteSpanCarAccessAttribute(RouteSpanCarAccessAttribute enumValue)
        {
          switch(enumValue)
          {
          case RouteSpanCarAccessAttribute::NOT_SET:
            return {};
          case RouteSpanCarAccessAttribute::Allowed:
            return "Allowed";
          case RouteSpanCarAccessAttribute::NoThroughTraffic:
            return "NoThroughTraffic";
          case RouteSpanCarAccessAttribute::TollRoad:
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

      } // namespace RouteSpanCarAccessAttributeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
