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

#include <aws/ecs/model/PlacementStrategyType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ECS
  {
    namespace Model
    {
      namespace PlacementStrategyTypeMapper
      {

        static const int random_HASH = HashingUtils::HashString("random");
        static const int spread_HASH = HashingUtils::HashString("spread");
        static const int binpack_HASH = HashingUtils::HashString("binpack");


        PlacementStrategyType GetPlacementStrategyTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == random_HASH)
          {
            return PlacementStrategyType::random;
          }
          else if (hashCode == spread_HASH)
          {
            return PlacementStrategyType::spread;
          }
          else if (hashCode == binpack_HASH)
          {
            return PlacementStrategyType::binpack;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementStrategyType>(hashCode);
          }

          return PlacementStrategyType::NOT_SET;
        }

        Aws::String GetNameForPlacementStrategyType(PlacementStrategyType enumValue)
        {
          switch(enumValue)
          {
          case PlacementStrategyType::random:
            return "random";
          case PlacementStrategyType::spread:
            return "spread";
          case PlacementStrategyType::binpack:
            return "binpack";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlacementStrategyTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
