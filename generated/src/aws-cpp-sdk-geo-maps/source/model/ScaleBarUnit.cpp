/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/ScaleBarUnit.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoMaps
  {
    namespace Model
    {
      namespace ScaleBarUnitMapper
      {

        static const int Kilometers_HASH = HashingUtils::HashString("Kilometers");
        static const int KilometersMiles_HASH = HashingUtils::HashString("KilometersMiles");
        static const int Miles_HASH = HashingUtils::HashString("Miles");
        static const int MilesKilometers_HASH = HashingUtils::HashString("MilesKilometers");


        ScaleBarUnit GetScaleBarUnitForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Kilometers_HASH)
          {
            return ScaleBarUnit::Kilometers;
          }
          else if (hashCode == KilometersMiles_HASH)
          {
            return ScaleBarUnit::KilometersMiles;
          }
          else if (hashCode == Miles_HASH)
          {
            return ScaleBarUnit::Miles;
          }
          else if (hashCode == MilesKilometers_HASH)
          {
            return ScaleBarUnit::MilesKilometers;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScaleBarUnit>(hashCode);
          }

          return ScaleBarUnit::NOT_SET;
        }

        Aws::String GetNameForScaleBarUnit(ScaleBarUnit enumValue)
        {
          switch(enumValue)
          {
          case ScaleBarUnit::NOT_SET:
            return {};
          case ScaleBarUnit::Kilometers:
            return "Kilometers";
          case ScaleBarUnit::KilometersMiles:
            return "KilometersMiles";
          case ScaleBarUnit::Miles:
            return "Miles";
          case ScaleBarUnit::MilesKilometers:
            return "MilesKilometers";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScaleBarUnitMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
