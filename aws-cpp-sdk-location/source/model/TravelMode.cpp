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

        static const int Car_HASH = HashingUtils::HashString("Car");
        static const int Truck_HASH = HashingUtils::HashString("Truck");
        static const int Walking_HASH = HashingUtils::HashString("Walking");


        TravelMode GetTravelModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
          case TravelMode::Car:
            return "Car";
          case TravelMode::Truck:
            return "Truck";
          case TravelMode::Walking:
            return "Walking";
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
