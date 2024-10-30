/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationTravelMode.h>
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
      namespace WaypointOptimizationTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");


        WaypointOptimizationTravelMode GetWaypointOptimizationTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return WaypointOptimizationTravelMode::Car;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return WaypointOptimizationTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return WaypointOptimizationTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return WaypointOptimizationTravelMode::Truck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationTravelMode>(hashCode);
          }

          return WaypointOptimizationTravelMode::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationTravelMode(WaypointOptimizationTravelMode enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationTravelMode::NOT_SET:
            return {};
          case WaypointOptimizationTravelMode::Car:
            return "Car";
          case WaypointOptimizationTravelMode::Pedestrian:
            return "Pedestrian";
          case WaypointOptimizationTravelMode::Scooter:
            return "Scooter";
          case WaypointOptimizationTravelMode::Truck:
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

      } // namespace WaypointOptimizationTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
