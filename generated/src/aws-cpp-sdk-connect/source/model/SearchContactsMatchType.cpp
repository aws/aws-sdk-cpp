/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SearchContactsMatchType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Connect
  {
    namespace Model
    {
      namespace SearchContactsMatchTypeMapper
      {

        static const int MATCH_ALL_HASH = HashingUtils::HashString("MATCH_ALL");
        static const int MATCH_ANY_HASH = HashingUtils::HashString("MATCH_ANY");
        static const int MATCH_EXACT_HASH = HashingUtils::HashString("MATCH_EXACT");
        static const int MATCH_NONE_HASH = HashingUtils::HashString("MATCH_NONE");


        SearchContactsMatchType GetSearchContactsMatchTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == MATCH_ALL_HASH)
          {
            return SearchContactsMatchType::MATCH_ALL;
          }
          else if (hashCode == MATCH_ANY_HASH)
          {
            return SearchContactsMatchType::MATCH_ANY;
          }
          else if (hashCode == MATCH_EXACT_HASH)
          {
            return SearchContactsMatchType::MATCH_EXACT;
          }
          else if (hashCode == MATCH_NONE_HASH)
          {
            return SearchContactsMatchType::MATCH_NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchContactsMatchType>(hashCode);
          }

          return SearchContactsMatchType::NOT_SET;
        }

        Aws::String GetNameForSearchContactsMatchType(SearchContactsMatchType enumValue)
        {
          switch(enumValue)
          {
          case SearchContactsMatchType::NOT_SET:
            return {};
          case SearchContactsMatchType::MATCH_ALL:
            return "MATCH_ALL";
          case SearchContactsMatchType::MATCH_ANY:
            return "MATCH_ANY";
          case SearchContactsMatchType::MATCH_EXACT:
            return "MATCH_EXACT";
          case SearchContactsMatchType::MATCH_NONE:
            return "MATCH_NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchContactsMatchTypeMapper
    } // namespace Model
  } // namespace Connect
} // namespace Aws
