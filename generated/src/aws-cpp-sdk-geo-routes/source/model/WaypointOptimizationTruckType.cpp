/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationTruckType.h>
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
      namespace WaypointOptimizationTruckTypeMapper
      {

        static const int StraightTruck_HASH = HashingUtils::HashString("StraightTruck");
        static const int Tractor_HASH = HashingUtils::HashString("Tractor");


        WaypointOptimizationTruckType GetWaypointOptimizationTruckTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == StraightTruck_HASH)
          {
            return WaypointOptimizationTruckType::StraightTruck;
          }
          else if (hashCode == Tractor_HASH)
          {
            return WaypointOptimizationTruckType::Tractor;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationTruckType>(hashCode);
          }

          return WaypointOptimizationTruckType::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationTruckType(WaypointOptimizationTruckType enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationTruckType::NOT_SET:
            return {};
          case WaypointOptimizationTruckType::StraightTruck:
            return "StraightTruck";
          case WaypointOptimizationTruckType::Tractor:
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

      } // namespace WaypointOptimizationTruckTypeMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
