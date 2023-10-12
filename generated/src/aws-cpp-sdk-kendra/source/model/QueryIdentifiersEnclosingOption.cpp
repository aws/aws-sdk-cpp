/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryIdentifiersEnclosingOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace kendra
  {
    namespace Model
    {
      namespace QueryIdentifiersEnclosingOptionMapper
      {

        static constexpr uint32_t DOUBLE_QUOTES_HASH = ConstExprHashingUtils::HashString("DOUBLE_QUOTES");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");


        QueryIdentifiersEnclosingOption GetQueryIdentifiersEnclosingOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOUBLE_QUOTES_HASH)
          {
            return QueryIdentifiersEnclosingOption::DOUBLE_QUOTES;
          }
          else if (hashCode == NONE_HASH)
          {
            return QueryIdentifiersEnclosingOption::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryIdentifiersEnclosingOption>(hashCode);
          }

          return QueryIdentifiersEnclosingOption::NOT_SET;
        }

        Aws::String GetNameForQueryIdentifiersEnclosingOption(QueryIdentifiersEnclosingOption enumValue)
        {
          switch(enumValue)
          {
          case QueryIdentifiersEnclosingOption::NOT_SET:
            return {};
          case QueryIdentifiersEnclosingOption::DOUBLE_QUOTES:
            return "DOUBLE_QUOTES";
          case QueryIdentifiersEnclosingOption::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryIdentifiersEnclosingOptionMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
