/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTruckType.h>
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
      namespace RouteTruckTypeMapper
      {

        static const int LightTruck_HASH = HashingUtils::HashString("LightTruck");
        static const int StraightTruck_HASH = HashingUtils::HashString("StraightTruck");
        static const int Tractor_HASH = HashingUtils::HashString("Tractor");


        RouteTruckType GetRouteTruckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LightTruck_HASH)
          {
            return RouteTruckType::LightTruck;
          }
          else if (hashCode == StraightTruck_HASH)
          {
            return RouteTruckType::StraightTruck;
          }
          else if (hashCode == Tractor_HASH)
          {
            return RouteTruckType::Tractor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteTruckType>(hashCode);
          }

          return RouteTruckType::NOT_SET;
        }

        Aws::String GetNameForRouteTruckType(RouteTruckType enumValue)
        {
          switch(enumValue)
          {
          case RouteTruckType::NOT_SET:
            return {};
          case RouteTruckType::LightTruck:
            return "LightTruck";
          case RouteTruckType::StraightTruck:
            return "StraightTruck";
          case RouteTruckType::Tractor:
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

      } // namespace RouteTruckTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
