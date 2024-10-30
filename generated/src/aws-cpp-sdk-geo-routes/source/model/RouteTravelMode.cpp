/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTravelMode.h>
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
      namespace RouteTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");


        RouteTravelMode GetRouteTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return RouteTravelMode::Car;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return RouteTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return RouteTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return RouteTravelMode::Truck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTravelMode>(hashCode);
          }

          return RouteTravelMode::NOT_SET;
        }

        Aws::String GetNameForRouteTravelMode(RouteTravelMode enumValue)
        {
          switch(enumValue)
          {
          case RouteTravelMode::NOT_SET:
            return {};
          case RouteTravelMode::Car:
            return "Car";
          case RouteTravelMode::Pedestrian:
            return "Pedestrian";
          case RouteTravelMode::Scooter:
            return "Scooter";
          case RouteTravelMode::Truck:
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

      } // namespace RouteTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
