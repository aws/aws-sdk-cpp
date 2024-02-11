/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FilterLogicalOperator.h>
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
      namespace FilterLogicalOperatorMapper
      {

        static const int AND_HASH = HashingUtils::HashString("AND");
        static const int OR_HASH = HashingUtils::HashString("OR");


        FilterLogicalOperator GetFilterLogicalOperatorForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AND_HASH)
          {
            return FilterLogicalOperator::AND;
          }
          else if (hashCode == OR_HASH)
          {
            return FilterLogicalOperator::OR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterLogicalOperator>(hashCode);
          }

          return FilterLogicalOperator::NOT_SET;
        }

        Aws::String GetNameForFilterLogicalOperator(FilterLogicalOperator enumValue)
        {
          switch(enumValue)
          {
          case FilterLogicalOperator::NOT_SET:
            return {};
          case FilterLogicalOperator::AND:
            return "AND";
          case FilterLogicalOperator::OR:
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

      } // namespace FilterLogicalOperatorMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
