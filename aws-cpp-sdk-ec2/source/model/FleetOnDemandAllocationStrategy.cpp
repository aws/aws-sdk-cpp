﻿/*
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

#include <aws/ec2/model/FleetOnDemandAllocationStrategy.h>
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
      namespace FleetOnDemandAllocationStrategyMapper
      {

        static const int lowest_price_HASH = HashingUtils::HashString("lowest-price");
        static const int prioritized_HASH = HashingUtils::HashString("prioritized");


        FleetOnDemandAllocationStrategy GetFleetOnDemandAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowest_price_HASH)
          {
            return FleetOnDemandAllocationStrategy::lowest_price;
          }
          else if (hashCode == prioritized_HASH)
          {
            return FleetOnDemandAllocationStrategy::prioritized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetOnDemandAllocationStrategy>(hashCode);
          }

          return FleetOnDemandAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForFleetOnDemandAllocationStrategy(FleetOnDemandAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case FleetOnDemandAllocationStrategy::lowest_price:
            return "lowest-price";
          case FleetOnDemandAllocationStrategy::prioritized:
            return "prioritized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace FleetOnDemandAllocationStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
