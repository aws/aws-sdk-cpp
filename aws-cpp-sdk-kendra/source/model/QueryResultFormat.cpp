/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QueryResultFormat.h>
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
      namespace QueryResultFormatMapper
      {

        static const int TABLE_HASH = HashingUtils::HashString("TABLE");
        static const int TEXT_HASH = HashingUtils::HashString("TEXT");


        QueryResultFormat GetQueryResultFormatForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TABLE_HASH)
          {
            return QueryResultFormat::TABLE;
          }
          else if (hashCode == TEXT_HASH)
          {
            return QueryResultFormat::TEXT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryResultFormat>(hashCode);
          }

          return QueryResultFormat::NOT_SET;
        }

        Aws::String GetNameForQueryResultFormat(QueryResultFormat enumValue)
        {
          switch(enumValue)
          {
          case QueryResultFormat::TABLE:
            return "TABLE";
          case QueryResultFormat::TEXT:
            return "TEXT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryResultFormatMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
