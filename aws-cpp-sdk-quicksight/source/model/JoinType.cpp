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

#include <aws/quicksight/model/JoinType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace JoinTypeMapper
      {

        static const int INNER_HASH = HashingUtils::HashString("INNER");
        static const int OUTER_HASH = HashingUtils::HashString("OUTER");
        static const int LEFT_HASH = HashingUtils::HashString("LEFT");
        static const int RIGHT_HASH = HashingUtils::HashString("RIGHT");


        JoinType GetJoinTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INNER_HASH)
          {
            return JoinType::INNER;
          }
          else if (hashCode == OUTER_HASH)
          {
            return JoinType::OUTER;
          }
          else if (hashCode == LEFT_HASH)
          {
            return JoinType::LEFT;
          }
          else if (hashCode == RIGHT_HASH)
          {
            return JoinType::RIGHT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JoinType>(hashCode);
          }

          return JoinType::NOT_SET;
        }

        Aws::String GetNameForJoinType(JoinType enumValue)
        {
          switch(enumValue)
          {
          case JoinType::INNER:
            return "INNER";
          case JoinType::OUTER:
            return "OUTER";
          case JoinType::LEFT:
            return "LEFT";
          case JoinType::RIGHT:
            return "RIGHT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JoinTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
