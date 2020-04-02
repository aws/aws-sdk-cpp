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

#include <aws/gamelift/model/BalancingStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GameLift
  {
    namespace Model
    {
      namespace BalancingStrategyMapper
      {

        static const int SPOT_ONLY_HASH = HashingUtils::HashString("SPOT_ONLY");
        static const int SPOT_PREFERRED_HASH = HashingUtils::HashString("SPOT_PREFERRED");


        BalancingStrategy GetBalancingStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SPOT_ONLY_HASH)
          {
            return BalancingStrategy::SPOT_ONLY;
          }
          else if (hashCode == SPOT_PREFERRED_HASH)
          {
            return BalancingStrategy::SPOT_PREFERRED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BalancingStrategy>(hashCode);
          }

          return BalancingStrategy::NOT_SET;
        }

        Aws::String GetNameForBalancingStrategy(BalancingStrategy enumValue)
        {
          switch(enumValue)
          {
          case BalancingStrategy::SPOT_ONLY:
            return "SPOT_ONLY";
          case BalancingStrategy::SPOT_PREFERRED:
            return "SPOT_PREFERRED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BalancingStrategyMapper
    } // namespace Model
  } // namespace GameLift
} // namespace Aws
