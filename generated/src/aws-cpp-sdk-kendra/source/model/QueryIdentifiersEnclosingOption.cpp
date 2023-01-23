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

        static const int DOUBLE_QUOTES_HASH = HashingUtils::HashString("DOUBLE_QUOTES");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        QueryIdentifiersEnclosingOption GetQueryIdentifiersEnclosingOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
