/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineHazardousCargoType.h>
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
      namespace IsolineHazardousCargoTypeMapper
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


        IsolineHazardousCargoType GetIsolineHazardousCargoTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Combustible_HASH)
          {
            return IsolineHazardousCargoType::Combustible;
          }
          else if (hashCode == Corrosive_HASH)
          {
            return IsolineHazardousCargoType::Corrosive;
          }
          else if (hashCode == Explosive_HASH)
          {
            return IsolineHazardousCargoType::Explosive;
          }
          else if (hashCode == Flammable_HASH)
          {
            return IsolineHazardousCargoType::Flammable;
          }
          else if (hashCode == Gas_HASH)
          {
            return IsolineHazardousCargoType::Gas;
          }
          else if (hashCode == HarmfulToWater_HASH)
          {
            return IsolineHazardousCargoType::HarmfulToWater;
          }
          else if (hashCode == Organic_HASH)
          {
            return IsolineHazardousCargoType::Organic;
          }
          else if (hashCode == Other_HASH)
          {
            return IsolineHazardousCargoType::Other;
          }
          else if (hashCode == Poison_HASH)
          {
            return IsolineHazardousCargoType::Poison;
          }
          else if (hashCode == PoisonousInhalation_HASH)
          {
            return IsolineHazardousCargoType::PoisonousInhalation;
          }
          else if (hashCode == Radioactive_HASH)
          {
            return IsolineHazardousCargoType::Radioactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineHazardousCargoType>(hashCode);
          }

          return IsolineHazardousCargoType::NOT_SET;
        }

        Aws::String GetNameForIsolineHazardousCargoType(IsolineHazardousCargoType enumValue)
        {
          switch(enumValue)
          {
          case IsolineHazardousCargoType::NOT_SET:
            return {};
          case IsolineHazardousCargoType::Combustible:
            return "Combustible";
          case IsolineHazardousCargoType::Corrosive:
            return "Corrosive";
          case IsolineHazardousCargoType::Explosive:
            return "Explosive";
          case IsolineHazardousCargoType::Flammable:
            return "Flammable";
          case IsolineHazardousCargoType::Gas:
            return "Gas";
          case IsolineHazardousCargoType::HarmfulToWater:
            return "HarmfulToWater";
          case IsolineHazardousCargoType::Organic:
            return "Organic";
          case IsolineHazardousCargoType::Other:
            return "Other";
          case IsolineHazardousCargoType::Poison:
            return "Poison";
          case IsolineHazardousCargoType::PoisonousInhalation:
            return "PoisonousInhalation";
          case IsolineHazardousCargoType::Radioactive:
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

      } // namespace IsolineHazardousCargoTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
