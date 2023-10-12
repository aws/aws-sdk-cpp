/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/TravelMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LocationService
  {
    namespace Model
    {
      namespace TravelModeMapper
      {

        static constexpr uint32_t Car_HASH = ConstExprHashingUtils::HashString("Car");
        static constexpr uint32_t Truck_HASH = ConstExprHashingUtils::HashString("Truck");
        static constexpr uint32_t Walking_HASH = ConstExprHashingUtils::HashString("Walking");
        static constexpr uint32_t Bicycle_HASH = ConstExprHashingUtils::HashString("Bicycle");
        static constexpr uint32_t Motorcycle_HASH = ConstExprHashingUtils::HashString("Motorcycle");


        TravelMode GetTravelModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Car_HASH)
          {
            return TravelMode::Car;
          }
          else if (hashCode == Truck_HASH)
          {
            return TravelMode::Truck;
          }
          else if (hashCode == Walking_HASH)
          {
            return TravelMode::Walking;
          }
          else if (hashCode == Bicycle_HASH)
          {
            return TravelMode::Bicycle;
          }
          else if (hashCode == Motorcycle_HASH)
          {
            return TravelMode::Motorcycle;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TravelMode>(hashCode);
          }

          return TravelMode::NOT_SET;
        }

        Aws::String GetNameForTravelMode(TravelMode enumValue)
        {
          switch(enumValue)
          {
          case TravelMode::NOT_SET:
            return {};
          case TravelMode::Car:
            return "Car";
          case TravelMode::Truck:
            return "Truck";
          case TravelMode::Walking:
            return "Walking";
          case TravelMode::Bicycle:
            return "Bicycle";
          case TravelMode::Motorcycle:
            return "Motorcycle";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TravelModeMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
