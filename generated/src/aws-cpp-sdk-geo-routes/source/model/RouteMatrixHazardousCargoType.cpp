/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixHazardousCargoType.h>
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
      namespace RouteMatrixHazardousCargoTypeMapper
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


        RouteMatrixHazardousCargoType GetRouteMatrixHazardousCargoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Combustible_HASH)
          {
            return RouteMatrixHazardousCargoType::Combustible;
          }
          else if (hashCode == Corrosive_HASH)
          {
            return RouteMatrixHazardousCargoType::Corrosive;
          }
          else if (hashCode == Explosive_HASH)
          {
            return RouteMatrixHazardousCargoType::Explosive;
          }
          else if (hashCode == Flammable_HASH)
          {
            return RouteMatrixHazardousCargoType::Flammable;
          }
          else if (hashCode == Gas_HASH)
          {
            return RouteMatrixHazardousCargoType::Gas;
          }
          else if (hashCode == HarmfulToWater_HASH)
          {
            return RouteMatrixHazardousCargoType::HarmfulToWater;
          }
          else if (hashCode == Organic_HASH)
          {
            return RouteMatrixHazardousCargoType::Organic;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteMatrixHazardousCargoType::Other;
          }
          else if (hashCode == Poison_HASH)
          {
            return RouteMatrixHazardousCargoType::Poison;
          }
          else if (hashCode == PoisonousInhalation_HASH)
          {
            return RouteMatrixHazardousCargoType::PoisonousInhalation;
          }
          else if (hashCode == Radioactive_HASH)
          {
            return RouteMatrixHazardousCargoType::Radioactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixHazardousCargoType>(hashCode);
          }

          return RouteMatrixHazardousCargoType::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixHazardousCargoType(RouteMatrixHazardousCargoType enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixHazardousCargoType::NOT_SET:
            return {};
          case RouteMatrixHazardousCargoType::Combustible:
            return "Combustible";
          case RouteMatrixHazardousCargoType::Corrosive:
            return "Corrosive";
          case RouteMatrixHazardousCargoType::Explosive:
            return "Explosive";
          case RouteMatrixHazardousCargoType::Flammable:
            return "Flammable";
          case RouteMatrixHazardousCargoType::Gas:
            return "Gas";
          case RouteMatrixHazardousCargoType::HarmfulToWater:
            return "HarmfulToWater";
          case RouteMatrixHazardousCargoType::Organic:
            return "Organic";
          case RouteMatrixHazardousCargoType::Other:
            return "Other";
          case RouteMatrixHazardousCargoType::Poison:
            return "Poison";
          case RouteMatrixHazardousCargoType::PoisonousInhalation:
            return "PoisonousInhalation";
          case RouteMatrixHazardousCargoType::Radioactive:
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

      } // namespace RouteMatrixHazardousCargoTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
