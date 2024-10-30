/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapTravelMode.h>
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
      namespace RoadSnapTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");


        RoadSnapTravelMode GetRoadSnapTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return RoadSnapTravelMode::Car;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return RoadSnapTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return RoadSnapTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return RoadSnapTravelMode::Truck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoadSnapTravelMode>(hashCode);
          }

          return RoadSnapTravelMode::NOT_SET;
        }

        Aws::String GetNameForRoadSnapTravelMode(RoadSnapTravelMode enumValue)
        {
          switch(enumValue)
          {
          case RoadSnapTravelMode::NOT_SET:
            return {};
          case RoadSnapTravelMode::Car:
            return "Car";
          case RoadSnapTravelMode::Pedestrian:
            return "Pedestrian";
          case RoadSnapTravelMode::Scooter:
            return "Scooter";
          case RoadSnapTravelMode::Truck:
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

      } // namespace RoadSnapTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
