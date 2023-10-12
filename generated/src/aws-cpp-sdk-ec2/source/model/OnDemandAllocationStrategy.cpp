/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OnDemandAllocationStrategy.h>
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
      namespace OnDemandAllocationStrategyMapper
      {

        static constexpr uint32_t lowestPrice_HASH = ConstExprHashingUtils::HashString("lowestPrice");
        static constexpr uint32_t prioritized_HASH = ConstExprHashingUtils::HashString("prioritized");


        OnDemandAllocationStrategy GetOnDemandAllocationStrategyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == lowestPrice_HASH)
          {
            return OnDemandAllocationStrategy::lowestPrice;
          }
          else if (hashCode == prioritized_HASH)
          {
            return OnDemandAllocationStrategy::prioritized;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OnDemandAllocationStrategy>(hashCode);
          }

          return OnDemandAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForOnDemandAllocationStrategy(OnDemandAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case OnDemandAllocationStrategy::NOT_SET:
            return {};
          case OnDemandAllocationStrategy::lowestPrice:
            return "lowestPrice";
          case OnDemandAllocationStrategy::prioritized:
            return "prioritized";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OnDemandAllocationStrategyMapper
    } // namespace Model
  } // namespace EC2
} // namespace Aws
