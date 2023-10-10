/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QuerySuggestionsStatus.h>
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
      namespace QuerySuggestionsStatusMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");


        QuerySuggestionsStatus GetQuerySuggestionsStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return QuerySuggestionsStatus::ACTIVE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return QuerySuggestionsStatus::UPDATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuerySuggestionsStatus>(hashCode);
          }

          return QuerySuggestionsStatus::NOT_SET;
        }

        Aws::String GetNameForQuerySuggestionsStatus(QuerySuggestionsStatus enumValue)
        {
          switch(enumValue)
          {
          case QuerySuggestionsStatus::NOT_SET:
            return {};
          case QuerySuggestionsStatus::ACTIVE:
            return "ACTIVE";
          case QuerySuggestionsStatus::UPDATING:
            return "UPDATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuerySuggestionsStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
