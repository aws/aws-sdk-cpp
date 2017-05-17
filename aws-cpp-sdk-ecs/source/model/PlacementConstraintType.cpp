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

#include <aws/ecs/model/PlacementConstraintType.h>
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
      namespace PlacementConstraintTypeMapper
      {

        static const int distinctInstance_HASH = HashingUtils::HashString("distinctInstance");
        static const int memberOf_HASH = HashingUtils::HashString("memberOf");


        PlacementConstraintType GetPlacementConstraintTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == distinctInstance_HASH)
          {
            return PlacementConstraintType::distinctInstance;
          }
          else if (hashCode == memberOf_HASH)
          {
            return PlacementConstraintType::memberOf;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PlacementConstraintType>(hashCode);
          }

          return PlacementConstraintType::NOT_SET;
        }

        Aws::String GetNameForPlacementConstraintType(PlacementConstraintType enumValue)
        {
          switch(enumValue)
          {
          case PlacementConstraintType::distinctInstance:
            return "distinctInstance";
          case PlacementConstraintType::memberOf:
            return "memberOf";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace PlacementConstraintTypeMapper
    } // namespace Model
  } // namespace ECS
} // namespace Aws
