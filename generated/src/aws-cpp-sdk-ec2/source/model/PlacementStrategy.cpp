/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PlacementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace EC2
  {
    namespace Model
    {
      namespace PlacementStrategyMapper
      {

        static constexpr uint32_t cluster_HASH = ConstExprHashingUtils::HashString("cluster");
        static constexpr uint32_t spread_HASH = ConstExprHashingUtils::HashString("spread");
        static constexpr uint32_t partition_HASH = ConstExprHashingUtils::HashString("partition");


        PlacementStrategy GetPlacementStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return PlacementStrategy::cluster;
          }
          else if (hashCode == spread_HASH)
          {
            return PlacementStrategy::spread;
          }
          else if (hashCode == partition_HASH)
          {
            return PlacementStrategy::partition;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementStrategy>(hashCode);
          }

          return PlacementStrategy::NOT_SET;
        }

        Aws::String GetNameForPlacementStrategy(PlacementStrategy enumValue)
        {
          switch(enumValue)
          {
          case PlacementStrategy::NOT_SET:
            return {};
          case PlacementStrategy::cluster:
            return "cluster";
          case PlacementStrategy::spread:
            return "spread";
          case PlacementStrategy::partition:
            return "partition";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PlacementStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
