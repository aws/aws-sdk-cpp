/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/WaypointOptimizationClusteringAlgorithm.h>
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
      namespace WaypointOptimizationClusteringAlgorithmMapper
      {

        static const int DrivingDistance_HASH = HashingUtils::HashString("DrivingDistance");
        static const int TopologySegment_HASH = HashingUtils::HashString("TopologySegment");


        WaypointOptimizationClusteringAlgorithm GetWaypointOptimizationClusteringAlgorithmForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DrivingDistance_HASH)
          {
            return WaypointOptimizationClusteringAlgorithm::DrivingDistance;
          }
          else if (hashCode == TopologySegment_HASH)
          {
            return WaypointOptimizationClusteringAlgorithm::TopologySegment;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WaypointOptimizationClusteringAlgorithm>(hashCode);
          }

          return WaypointOptimizationClusteringAlgorithm::NOT_SET;
        }

        Aws::String GetNameForWaypointOptimizationClusteringAlgorithm(WaypointOptimizationClusteringAlgorithm enumValue)
        {
          switch(enumValue)
          {
          case WaypointOptimizationClusteringAlgorithm::NOT_SET:
            return {};
          case WaypointOptimizationClusteringAlgorithm::DrivingDistance:
            return "DrivingDistance";
          case WaypointOptimizationClusteringAlgorithm::TopologySegment:
            return "TopologySegment";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WaypointOptimizationClusteringAlgorithmMapper
    } // namespace Model
  } // namespace GeoRoutes
} // namespace Aws
