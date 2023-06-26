/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/PlacementGroupStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EMR
  {
    namespace Model
    {
      namespace PlacementGroupStrategyMapper
      {

        static const int SPREAD_HASH = HashingUtils::HashString("SPREAD");
        static const int PARTITION_HASH = HashingUtils::HashString("PARTITION");
        static const int CLUSTER_HASH = HashingUtils::HashString("CLUSTER");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        PlacementGroupStrategy GetPlacementGroupStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPREAD_HASH)
          {
            return PlacementGroupStrategy::SPREAD;
          }
          else if (hashCode == PARTITION_HASH)
          {
            return PlacementGroupStrategy::PARTITION;
          }
          else if (hashCode == CLUSTER_HASH)
          {
            return PlacementGroupStrategy::CLUSTER;
          }
          else if (hashCode == NONE_HASH)
          {
            return PlacementGroupStrategy::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementGroupStrategy>(hashCode);
          }

          return PlacementGroupStrategy::NOT_SET;
        }

        Aws::String GetNameForPlacementGroupStrategy(PlacementGroupStrategy enumValue)
        {
          switch(enumValue)
          {
          case PlacementGroupStrategy::SPREAD:
            return "SPREAD";
          case PlacementGroupStrategy::PARTITION:
            return "PARTITION";
          case PlacementGroupStrategy::CLUSTER:
            return "CLUSTER";
          case PlacementGroupStrategy::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlacementGroupStrategyMapper
    } // namespace Model
  } // namespace EMR
} // namespace Aws
