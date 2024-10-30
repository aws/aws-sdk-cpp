/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteHazardousCargoType.h>
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
      namespace RouteHazardousCargoTypeMapper
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


        RouteHazardousCargoType GetRouteHazardousCargoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Combustible_HASH)
          {
            return RouteHazardousCargoType::Combustible;
          }
          else if (hashCode == Corrosive_HASH)
          {
            return RouteHazardousCargoType::Corrosive;
          }
          else if (hashCode == Explosive_HASH)
          {
            return RouteHazardousCargoType::Explosive;
          }
          else if (hashCode == Flammable_HASH)
          {
            return RouteHazardousCargoType::Flammable;
          }
          else if (hashCode == Gas_HASH)
          {
            return RouteHazardousCargoType::Gas;
          }
          else if (hashCode == HarmfulToWater_HASH)
          {
            return RouteHazardousCargoType::HarmfulToWater;
          }
          else if (hashCode == Organic_HASH)
          {
            return RouteHazardousCargoType::Organic;
          }
          else if (hashCode == Other_HASH)
          {
            return RouteHazardousCargoType::Other;
          }
          else if (hashCode == Poison_HASH)
          {
            return RouteHazardousCargoType::Poison;
          }
          else if (hashCode == PoisonousInhalation_HASH)
          {
            return RouteHazardousCargoType::PoisonousInhalation;
          }
          else if (hashCode == Radioactive_HASH)
          {
            return RouteHazardousCargoType::Radioactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteHazardousCargoType>(hashCode);
          }

          return RouteHazardousCargoType::NOT_SET;
        }

        Aws::String GetNameForRouteHazardousCargoType(RouteHazardousCargoType enumValue)
        {
          switch(enumValue)
          {
          case RouteHazardousCargoType::NOT_SET:
            return {};
          case RouteHazardousCargoType::Combustible:
            return "Combustible";
          case RouteHazardousCargoType::Corrosive:
            return "Corrosive";
          case RouteHazardousCargoType::Explosive:
            return "Explosive";
          case RouteHazardousCargoType::Flammable:
            return "Flammable";
          case RouteHazardousCargoType::Gas:
            return "Gas";
          case RouteHazardousCargoType::HarmfulToWater:
            return "HarmfulToWater";
          case RouteHazardousCargoType::Organic:
            return "Organic";
          case RouteHazardousCargoType::Other:
            return "Other";
          case RouteHazardousCargoType::Poison:
            return "Poison";
          case RouteHazardousCargoType::PoisonousInhalation:
            return "PoisonousInhalation";
          case RouteHazardousCargoType::Radioactive:
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

      } // namespace RouteHazardousCargoTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
