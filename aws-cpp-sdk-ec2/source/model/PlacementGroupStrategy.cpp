/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/PlacementGroupStrategy.h>
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
      namespace PlacementGroupStrategyMapper
      {

        static const int cluster_HASH = HashingUtils::HashString("cluster");
        static const int partition_HASH = HashingUtils::HashString("partition");
        static const int spread_HASH = HashingUtils::HashString("spread");


        PlacementGroupStrategy GetPlacementGroupStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == cluster_HASH)
          {
            return PlacementGroupStrategy::cluster;
          }
          else if (hashCode == partition_HASH)
          {
            return PlacementGroupStrategy::partition;
          }
          else if (hashCode == spread_HASH)
          {
            return PlacementGroupStrategy::spread;
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
          case PlacementGroupStrategy::cluster:
            return "cluster";
          case PlacementGroupStrategy::partition:
            return "partition";
          case PlacementGroupStrategy::spread:
            return "spread";
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
  } // namespace EC2
} // namespace Aws
