/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationHazardousCargoType.h>
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
      namespace WaypointOptimizationHazardousCargoTypeMapper
      {

        static const int Combustible_HASH = HashingUtils::HashString("Combustible");
        static const int Corrosive_HASH = HashingUtils::HashString("Corrosive");
        static const int Explosive_HASH = HashingUtils::HashString("Explosive");
        static const int Flammable_HASH = HashingUtils::HashString("Flammable");
        static const int Gas_HASH = HashingUtils::HashString("Gas");
        static const int HarmfulToWater_HASH = HashingUtils::HashString("HarmfulToWater");
        static const int Organic_HASH = HashingUtils::HashString("Organic");
        static const int Other_HASH = HashingUtils::HashString("Other");
        static const int Poison_HASH = HashingUtils::HashString("Poison");
        static const int PoisonousInhalation_HASH = HashingUtils::HashString("PoisonousInhalation");
        static const int Radioactive_HASH = HashingUtils::HashString("Radioactive");


        WaypointOptimizationHazardousCargoType GetWaypointOptimizationHazardousCargoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Combustible_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Combustible;
          }
          else if (hashCode == Corrosive_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Corrosive;
          }
          else if (hashCode == Explosive_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Explosive;
          }
          else if (hashCode == Flammable_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Flammable;
          }
          else if (hashCode == Gas_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Gas;
          }
          else if (hashCode == HarmfulToWater_HASH)
          {
            return WaypointOptimizationHazardousCargoType::HarmfulToWater;
          }
          else if (hashCode == Organic_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Organic;
          }
          else if (hashCode == Other_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Other;
          }
          else if (hashCode == Poison_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Poison;
          }
          else if (hashCode == PoisonousInhalation_HASH)
          {
            return WaypointOptimizationHazardousCargoType::PoisonousInhalation;
          }
          else if (hashCode == Radioactive_HASH)
          {
            return WaypointOptimizationHazardousCargoType::Radioactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationHazardousCargoType>(hashCode);
          }

          return WaypointOptimizationHazardousCargoType::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationHazardousCargoType(WaypointOptimizationHazardousCargoType enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationHazardousCargoType::NOT_SET:
            return {};
          case WaypointOptimizationHazardousCargoType::Combustible:
            return "Combustible";
          case WaypointOptimizationHazardousCargoType::Corrosive:
            return "Corrosive";
          case WaypointOptimizationHazardousCargoType::Explosive:
            return "Explosive";
          case WaypointOptimizationHazardousCargoType::Flammable:
            return "Flammable";
          case WaypointOptimizationHazardousCargoType::Gas:
            return "Gas";
          case WaypointOptimizationHazardousCargoType::HarmfulToWater:
            return "HarmfulToWater";
          case WaypointOptimizationHazardousCargoType::Organic:
            return "Organic";
          case WaypointOptimizationHazardousCargoType::Other:
            return "Other";
          case WaypointOptimizationHazardousCargoType::Poison:
            return "Poison";
          case WaypointOptimizationHazardousCargoType::PoisonousInhalation:
            return "PoisonousInhalation";
          case WaypointOptimizationHazardousCargoType::Radioactive:
            return "Radioactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaypointOptimizationHazardousCargoTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
