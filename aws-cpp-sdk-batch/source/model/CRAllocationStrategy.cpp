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

#include <aws/batch/model/CRAllocationStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Batch
  {
    namespace Model
    {
      namespace CRAllocationStrategyMapper
      {

        static const int BEST_FIT_HASH = HashingUtils::HashString("BEST_FIT");
        static const int BEST_FIT_PROGRESSIVE_HASH = HashingUtils::HashString("BEST_FIT_PROGRESSIVE");
        static const int SPOT_CAPACITY_OPTIMIZED_HASH = HashingUtils::HashString("SPOT_CAPACITY_OPTIMIZED");


        CRAllocationStrategy GetCRAllocationStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BEST_FIT_HASH)
          {
            return CRAllocationStrategy::BEST_FIT;
          }
          else if (hashCode == BEST_FIT_PROGRESSIVE_HASH)
          {
            return CRAllocationStrategy::BEST_FIT_PROGRESSIVE;
          }
          else if (hashCode == SPOT_CAPACITY_OPTIMIZED_HASH)
          {
            return CRAllocationStrategy::SPOT_CAPACITY_OPTIMIZED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CRAllocationStrategy>(hashCode);
          }

          return CRAllocationStrategy::NOT_SET;
        }

        Aws::String GetNameForCRAllocationStrategy(CRAllocationStrategy enumValue)
        {
          switch(enumValue)
          {
          case CRAllocationStrategy::BEST_FIT:
            return "BEST_FIT";
          case CRAllocationStrategy::BEST_FIT_PROGRESSIVE:
            return "BEST_FIT_PROGRESSIVE";
          case CRAllocationStrategy::SPOT_CAPACITY_OPTIMIZED:
            return "SPOT_CAPACITY_OPTIMIZED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CRAllocationStrategyMapper
    } // namespace Model
  } // namespace Batch
} // namespace Aws
