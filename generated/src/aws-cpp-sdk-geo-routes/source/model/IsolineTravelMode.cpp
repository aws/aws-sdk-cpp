/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineTravelMode.h>
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
      namespace IsolineTravelModeMapper
      {

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Pedestrian_HASH = HashingUtils::HashString("Pedestrian");
        static const int Scooter_HASH = HashingUtils::HashString("Scooter");
        static const int Truck_HASH = HashingUtils::HashString("Truck");


        IsolineTravelMode GetIsolineTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return IsolineTravelMode::Car;
          }
          else if (hashCode == Pedestrian_HASH)
          {
            return IsolineTravelMode::Pedestrian;
          }
          else if (hashCode == Scooter_HASH)
          {
            return IsolineTravelMode::Scooter;
          }
          else if (hashCode == Truck_HASH)
          {
            return IsolineTravelMode::Truck;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineTravelMode>(hashCode);
          }

          return IsolineTravelMode::NOT_SET;
        }

        Aws::String GetNameForIsolineTravelMode(IsolineTravelMode enumValue)
        {
          switch(enumValue)
          {
          case IsolineTravelMode::NOT_SET:
            return {};
          case IsolineTravelMode::Car:
            return "Car";
          case IsolineTravelMode::Pedestrian:
            return "Pedestrian";
          case IsolineTravelMode::Scooter:
            return "Scooter";
          case IsolineTravelMode::Truck:
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

      } // namespace IsolineTravelModeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
