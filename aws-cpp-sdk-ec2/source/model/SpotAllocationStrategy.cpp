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

#include <aws/ec2/model/SpotAllocationStrategy.h>
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
      namespace SpotAllocationStrategyMapper
      {

        static const int lowest_price_HASH = HashingUtils::HashString("lowest-price");
        static const int diversified_HASH = HashingUtils::HashString("diversified");


        SpotAllocationStrategy GetSpotAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowest_price_HASH)
          {
            return SpotAllocationStrategy::lowest_price;
          }
          else if (hashCode == diversified_HASH)
          {
            return SpotAllocationStrategy::diversified;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SpotAllocationStrategy>(hashCode);
          }

          return SpotAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForSpotAllocationStrategy(SpotAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case SpotAllocationStrategy::lowest_price:
            return "lowest-price";
          case SpotAllocationStrategy::diversified:
            return "diversified";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace SpotAllocationStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
