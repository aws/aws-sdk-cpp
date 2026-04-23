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

        static const int lowestPrice_HASH = HashingUtils::HashString("lowestPrice");
        static const int prioritized_HASH = HashingUtils::HashString("prioritized");


        OnDemandAllocationStrategy GetOnDemandAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
