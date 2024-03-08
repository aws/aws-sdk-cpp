/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/VehicleWeightUnit.h>
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
      namespace VehicleWeightUnitMapper
      {

        static const int Kilograms_HASH = HashingUtils::HashString("Kilograms");
        static const int Pounds_HASH = HashingUtils::HashString("Pounds");


        VehicleWeightUnit GetVehicleWeightUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Kilograms_HASH)
          {
            return VehicleWeightUnit::Kilograms;
          }
          else if (hashCode == Pounds_HASH)
          {
            return VehicleWeightUnit::Pounds;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VehicleWeightUnit>(hashCode);
          }

          return VehicleWeightUnit::NOT_SET;
        }

        Aws::String GetNameForVehicleWeightUnit(VehicleWeightUnit enumValue)
        {
          switch(enumValue)
          {
          case VehicleWeightUnit::NOT_SET:
            return {};
          case VehicleWeightUnit::Kilograms:
            return "Kilograms";
          case VehicleWeightUnit::Pounds:
            return "Pounds";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VehicleWeightUnitMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
