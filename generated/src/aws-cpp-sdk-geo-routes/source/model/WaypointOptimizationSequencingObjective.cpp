/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationSequencingObjective.h>
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
      namespace WaypointOptimizationSequencingObjectiveMapper
      {

        static const int FastestRoute_HASH = HashingUtils::HashString("FastestRoute");
        static const int ShortestRoute_HASH = HashingUtils::HashString("ShortestRoute");


        WaypointOptimizationSequencingObjective GetWaypointOptimizationSequencingObjectiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FastestRoute_HASH)
          {
            return WaypointOptimizationSequencingObjective::FastestRoute;
          }
          else if (hashCode == ShortestRoute_HASH)
          {
            return WaypointOptimizationSequencingObjective::ShortestRoute;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationSequencingObjective>(hashCode);
          }

          return WaypointOptimizationSequencingObjective::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationSequencingObjective(WaypointOptimizationSequencingObjective enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationSequencingObjective::NOT_SET:
            return {};
          case WaypointOptimizationSequencingObjective::FastestRoute:
            return "FastestRoute";
          case WaypointOptimizationSequencingObjective::ShortestRoute:
            return "ShortestRoute";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaypointOptimizationSequencingObjectiveMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
