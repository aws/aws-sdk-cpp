/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/QueryResult.h>
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
      namespace QueryResultMapper
      {

        static const int PRESENT_HASH = HashingUtils::HashString("PRESENT");
        static const int ABSENT_HASH = HashingUtils::HashString("ABSENT");


        QueryResult GetQueryResultForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PRESENT_HASH)
          {
            return QueryResult::PRESENT;
          }
          else if (hashCode == ABSENT_HASH)
          {
            return QueryResult::ABSENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryResult>(hashCode);
          }

          return QueryResult::NOT_SET;
        }

        Aws::String GetNameForQueryResult(QueryResult enumValue)
        {
          switch(enumValue)
          {
          case QueryResult::NOT_SET:
            return {};
          case QueryResult::PRESENT:
            return "PRESENT";
          case QueryResult::ABSENT:
            return "ABSENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryResultMapper
    } // namespace Model
  } // namespace CustomerProfiles
} // namespace Aws
