/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteDirection.h>
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
      namespace RouteDirectionMapper
      {

        static const int East_HASH = HashingUtils::HashString("East");
        static const int North_HASH = HashingUtils::HashString("North");
        static const int South_HASH = HashingUtils::HashString("South");
        static const int West_HASH = HashingUtils::HashString("West");


        RouteDirection GetRouteDirectionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == East_HASH)
          {
            return RouteDirection::East;
          }
          else if (hashCode == North_HASH)
          {
            return RouteDirection::North;
          }
          else if (hashCode == South_HASH)
          {
            return RouteDirection::South;
          }
          else if (hashCode == West_HASH)
          {
            return RouteDirection::West;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteDirection>(hashCode);
          }

          return RouteDirection::NOT_SET;
        }

        Aws::String GetNameForRouteDirection(RouteDirection enumValue)
        {
          switch(enumValue)
          {
          case RouteDirection::NOT_SET:
            return {};
          case RouteDirection::East:
            return "East";
          case RouteDirection::North:
            return "North";
          case RouteDirection::South:
            return "South";
          case RouteDirection::West:
            return "West";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteDirectionMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
