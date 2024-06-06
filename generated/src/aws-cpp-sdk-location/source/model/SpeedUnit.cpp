/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/SpeedUnit.h>
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
      namespace SpeedUnitMapper
      {

        static const int KilometersPerHour_HASH = HashingUtils::HashString("KilometersPerHour");
        static const int MilesPerHour_HASH = HashingUtils::HashString("MilesPerHour");


        SpeedUnit GetSpeedUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == KilometersPerHour_HASH)
          {
            return SpeedUnit::KilometersPerHour;
          }
          else if (hashCode == MilesPerHour_HASH)
          {
            return SpeedUnit::MilesPerHour;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpeedUnit>(hashCode);
          }

          return SpeedUnit::NOT_SET;
        }

        Aws::String GetNameForSpeedUnit(SpeedUnit enumValue)
        {
          switch(enumValue)
          {
          case SpeedUnit::NOT_SET:
            return {};
          case SpeedUnit::KilometersPerHour:
            return "KilometersPerHour";
          case SpeedUnit::MilesPerHour:
            return "MilesPerHour";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SpeedUnitMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
