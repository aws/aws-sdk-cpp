/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/SearchTermMatchingType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace deadline
  {
    namespace Model
    {
      namespace SearchTermMatchingTypeMapper
      {

        static const int FUZZY_MATCH_HASH = HashingUtils::HashString("FUZZY_MATCH");
        static const int CONTAINS_HASH = HashingUtils::HashString("CONTAINS");


        SearchTermMatchingType GetSearchTermMatchingTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FUZZY_MATCH_HASH)
          {
            return SearchTermMatchingType::FUZZY_MATCH;
          }
          else if (hashCode == CONTAINS_HASH)
          {
            return SearchTermMatchingType::CONTAINS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchTermMatchingType>(hashCode);
          }

          return SearchTermMatchingType::NOT_SET;
        }

        Aws::String GetNameForSearchTermMatchingType(SearchTermMatchingType enumValue)
        {
          switch(enumValue)
          {
          case SearchTermMatchingType::NOT_SET:
            return {};
          case SearchTermMatchingType::FUZZY_MATCH:
            return "FUZZY_MATCH";
          case SearchTermMatchingType::CONTAINS:
            return "CONTAINS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchTermMatchingTypeMapper
    } // namespace Model
  } // namespace deadline
} // namespace Aws
