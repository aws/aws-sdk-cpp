/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/LogicalOperator.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CustomerProfiles
  {
    namespace Model
    {
      namespace LogicalOperatorMapper
      {

        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        LogicalOperator GetLogicalOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return LogicalOperator::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return LogicalOperator::OR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LogicalOperator>(hashCode);
          }

          return LogicalOperator::NOT_SET;
        }

        Aws::String GetNameForLogicalOperator(LogicalOperator enumValue)
        {
          switch(enumValue)
          {
          case LogicalOperator::AND:
            return "AND";
          case LogicalOperator::OR:
            return "OR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LogicalOperatorMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
