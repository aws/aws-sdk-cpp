/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/DimensionUnit.h>
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
      namespace DimensionUnitMapper
      {

        static const int Meters_HASH = HashingUtils::HashString("Meters");
        static const int Feet_HASH = HashingUtils::HashString("Feet");


        DimensionUnit GetDimensionUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Meters_HASH)
          {
            return DimensionUnit::Meters;
          }
          else if (hashCode == Feet_HASH)
          {
            return DimensionUnit::Feet;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DimensionUnit>(hashCode);
          }

          return DimensionUnit::NOT_SET;
        }

        Aws::String GetNameForDimensionUnit(DimensionUnit enumValue)
        {
          switch(enumValue)
          {
          case DimensionUnit::NOT_SET:
            return {};
          case DimensionUnit::Meters:
            return "Meters";
          case DimensionUnit::Feet:
            return "Feet";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DimensionUnitMapper
    } // namespace Model
  } // namespace LocationService
} // namespace Aws
