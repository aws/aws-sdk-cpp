/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/IsolineTruckType.h>
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
      namespace IsolineTruckTypeMapper
      {

        static const int LightTruck_HASH = HashingUtils::HashString("LightTruck");
        static const int StraightTruck_HASH = HashingUtils::HashString("StraightTruck");
        static const int Tractor_HASH = HashingUtils::HashString("Tractor");


        IsolineTruckType GetIsolineTruckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LightTruck_HASH)
          {
            return IsolineTruckType::LightTruck;
          }
          else if (hashCode == StraightTruck_HASH)
          {
            return IsolineTruckType::StraightTruck;
          }
          else if (hashCode == Tractor_HASH)
          {
            return IsolineTruckType::Tractor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsolineTruckType>(hashCode);
          }

          return IsolineTruckType::NOT_SET;
        }

        Aws::String GetNameForIsolineTruckType(IsolineTruckType enumValue)
        {
          switch(enumValue)
          {
          case IsolineTruckType::NOT_SET:
            return {};
          case IsolineTruckType::LightTruck:
            return "LightTruck";
          case IsolineTruckType::StraightTruck:
            return "StraightTruck";
          case IsolineTruckType::Tractor:
            return "Tractor";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsolineTruckTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
