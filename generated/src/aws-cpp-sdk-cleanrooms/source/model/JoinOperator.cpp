/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/JoinOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CleanRooms
  {
    namespace Model
    {
      namespace JoinOperatorMapper
      {

        static const int OR_HASH = HashingUtils::HashString("OR");
        static const int AND_HASH = HashingUtils::HashString("AND");


        JoinOperator GetJoinOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OR_HASH)
          {
            return JoinOperator::OR;
          }
          else if (hashCode == AND_HASH)
          {
            return JoinOperator::AND;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<JoinOperator>(hashCode);
          }

          return JoinOperator::NOT_SET;
        }

        Aws::String GetNameForJoinOperator(JoinOperator enumValue)
        {
          switch(enumValue)
          {
          case JoinOperator::NOT_SET:
            return {};
          case JoinOperator::OR:
            return "OR";
          case JoinOperator::AND:
            return "AND";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace JoinOperatorMapper
    } // namespace Model
  } // namespace CleanRooms
} // namespace Aws
