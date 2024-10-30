/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixTravelMode.h>
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
      namespace RouteMatrixTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");


        RouteMatrixTravelMode GetRouteMatrixTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return RouteMatrixTravelMode::Car;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return RouteMatrixTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return RouteMatrixTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return RouteMatrixTravelMode::Truck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixTravelMode>(hashCode);
          }

          return RouteMatrixTravelMode::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixTravelMode(RouteMatrixTravelMode enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixTravelMode::NOT_SET:
            return {};
          case RouteMatrixTravelMode::Car:
            return "Car";
          case RouteMatrixTravelMode::Pedestrian:
            return "Pedestrian";
          case RouteMatrixTravelMode::Scooter:
            return "Scooter";
          case RouteMatrixTravelMode::Truck:
            return "Truck";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteMatrixTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
