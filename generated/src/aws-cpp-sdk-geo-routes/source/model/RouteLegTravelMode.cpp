/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteLegTravelMode.h>
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
      namespace RouteLegTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Ferry_HASH = HashingUtils::HashString("Ferry");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");
        static const int CarShuttleTrain_HASH = HashingUtils::HashString("CarShuttleTrain");


        RouteLegTravelMode GetRouteLegTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return RouteLegTravelMode::Car;
          }
          else if (hashCode == Ferry_HASH)
          {
            return RouteLegTravelMode::Ferry;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return RouteLegTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return RouteLegTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return RouteLegTravelMode::Truck;
          }
          else if (hashCode == CarShuttleTrain_HASH)
          {
            return RouteLegTravelMode::CarShuttleTrain;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteLegTravelMode>(hashCode);
          }

          return RouteLegTravelMode::NOT_SET;
        }

        Aws::String GetNameForRouteLegTravelMode(RouteLegTravelMode enumValue)
        {
          switch(enumValue)
          {
          case RouteLegTravelMode::NOT_SET:
            return {};
          case RouteLegTravelMode::Car:
            return "Car";
          case RouteLegTravelMode::Ferry:
            return "Ferry";
          case RouteLegTravelMode::Pedestrian:
            return "Pedestrian";
          case RouteLegTravelMode::Scooter:
            return "Scooter";
          case RouteLegTravelMode::Truck:
            return "Truck";
          case RouteLegTravelMode::CarShuttleTrain:
            return "CarShuttleTrain";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RouteLegTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
