/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/JoinType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace JoinTypeMapper
      {

        static const int equijoin_HASH = HashingUtils::HashString("equijoin");
        static const int left_HASH = HashingUtils::HashString("left");
        static const int right_HASH = HashingUtils::HashString("right");
        static const int outer_HASH = HashingUtils::HashString("outer");
        static const int leftsemi_HASH = HashingUtils::HashString("leftsemi");
        static const int leftanti_HASH = HashingUtils::HashString("leftanti");


        JoinType GetJoinTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == equijoin_HASH)
          {
            return JoinType::equijoin;
          }
          else if (hashCode == left_HASH)
          {
            return JoinType::left;
          }
          else if (hashCode == right_HASH)
          {
            return JoinType::right;
          }
          else if (hashCode == outer_HASH)
          {
            return JoinType::outer;
          }
          else if (hashCode == leftsemi_HASH)
          {
            return JoinType::leftsemi;
          }
          else if (hashCode == leftanti_HASH)
          {
            return JoinType::leftanti;
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
          case JoinType::NOT_SET:
            return {};
          case JoinType::equijoin:
            return "equijoin";
          case JoinType::left:
            return "left";
          case JoinType::right:
            return "right";
          case JoinType::outer:
            return "outer";
          case JoinType::leftsemi:
            return "leftsemi";
          case JoinType::leftanti:
            return "leftanti";
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
  } // namespace Glue
} // namespace Aws
