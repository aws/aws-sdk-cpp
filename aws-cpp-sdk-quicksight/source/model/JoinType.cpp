/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
