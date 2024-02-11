/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MarketType.h>
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
      namespace MarketTypeMapper
      {

        static const int spot_HASH = HashingUtils::HashString("spot");
        static const int capacity_block_HASH = HashingUtils::HashString("capacity-block");


        MarketType GetMarketTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == spot_HASH)
          {
            return MarketType::spot;
          }
          else if (hashCode == capacity_block_HASH)
          {
            return MarketType::capacity_block;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MarketType>(hashCode);
          }

          return MarketType::NOT_SET;
        }

        Aws::String GetNameForMarketType(MarketType enumValue)
        {
          switch(enumValue)
          {
          case MarketType::NOT_SET:
            return {};
          case MarketType::spot:
            return "spot";
          case MarketType::capacity_block:
            return "capacity-block";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MarketTypeMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
