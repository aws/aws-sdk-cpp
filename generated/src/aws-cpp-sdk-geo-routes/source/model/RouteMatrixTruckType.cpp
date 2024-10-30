/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteMatrixTruckType.h>
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
      namespace RouteMatrixTruckTypeMapper
      {

        static const int LightTruck_HASH = HashingUtils::HashString("LightTruck");
        static const int StraightTruck_HASH = HashingUtils::HashString("StraightTruck");
        static const int Tractor_HASH = HashingUtils::HashString("Tractor");


        RouteMatrixTruckType GetRouteMatrixTruckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LightTruck_HASH)
          {
            return RouteMatrixTruckType::LightTruck;
          }
          else if (hashCode == StraightTruck_HASH)
          {
            return RouteMatrixTruckType::StraightTruck;
          }
          else if (hashCode == Tractor_HASH)
          {
            return RouteMatrixTruckType::Tractor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RouteMatrixTruckType>(hashCode);
          }

          return RouteMatrixTruckType::NOT_SET;
        }

        Aws::String GetNameForRouteMatrixTruckType(RouteMatrixTruckType enumValue)
        {
          switch(enumValue)
          {
          case RouteMatrixTruckType::NOT_SET:
            return {};
          case RouteMatrixTruckType::LightTruck:
            return "LightTruck";
          case RouteMatrixTruckType::StraightTruck:
            return "StraightTruck";
          case RouteMatrixTruckType::Tractor:
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

      } // namespace RouteMatrixTruckTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
