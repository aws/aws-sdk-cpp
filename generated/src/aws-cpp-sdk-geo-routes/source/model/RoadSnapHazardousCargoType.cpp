/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RoadSnapHazardousCargoType.h>
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
      namespace RoadSnapHazardousCargoTypeMapper
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


        RoadSnapHazardousCargoType GetRoadSnapHazardousCargoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Combustible_HASH)
          {
            return RoadSnapHazardousCargoType::Combustible;
          }
          else if (hashCode == Corrosive_HASH)
          {
            return RoadSnapHazardousCargoType::Corrosive;
          }
          else if (hashCode == Explosive_HASH)
          {
            return RoadSnapHazardousCargoType::Explosive;
          }
          else if (hashCode == Flammable_HASH)
          {
            return RoadSnapHazardousCargoType::Flammable;
          }
          else if (hashCode == Gas_HASH)
          {
            return RoadSnapHazardousCargoType::Gas;
          }
          else if (hashCode == HarmfulToWater_HASH)
          {
            return RoadSnapHazardousCargoType::HarmfulToWater;
          }
          else if (hashCode == Organic_HASH)
          {
            return RoadSnapHazardousCargoType::Organic;
          }
          else if (hashCode == Other_HASH)
          {
            return RoadSnapHazardousCargoType::Other;
          }
          else if (hashCode == Poison_HASH)
          {
            return RoadSnapHazardousCargoType::Poison;
          }
          else if (hashCode == PoisonousInhalation_HASH)
          {
            return RoadSnapHazardousCargoType::PoisonousInhalation;
          }
          else if (hashCode == Radioactive_HASH)
          {
            return RoadSnapHazardousCargoType::Radioactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RoadSnapHazardousCargoType>(hashCode);
          }

          return RoadSnapHazardousCargoType::NOT_SET;
        }

        Aws::String GetNameForRoadSnapHazardousCargoType(RoadSnapHazardousCargoType enumValue)
        {
          switch(enumValue)
          {
          case RoadSnapHazardousCargoType::NOT_SET:
            return {};
          case RoadSnapHazardousCargoType::Combustible:
            return "Combustible";
          case RoadSnapHazardousCargoType::Corrosive:
            return "Corrosive";
          case RoadSnapHazardousCargoType::Explosive:
            return "Explosive";
          case RoadSnapHazardousCargoType::Flammable:
            return "Flammable";
          case RoadSnapHazardousCargoType::Gas:
            return "Gas";
          case RoadSnapHazardousCargoType::HarmfulToWater:
            return "HarmfulToWater";
          case RoadSnapHazardousCargoType::Organic:
            return "Organic";
          case RoadSnapHazardousCargoType::Other:
            return "Other";
          case RoadSnapHazardousCargoType::Poison:
            return "Poison";
          case RoadSnapHazardousCargoType::PoisonousInhalation:
            return "PoisonousInhalation";
          case RoadSnapHazardousCargoType::Radioactive:
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

      } // namespace RoadSnapHazardousCargoTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
