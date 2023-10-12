/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/QuerySuggestionsBlockListStatus.h>
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
      namespace QuerySuggestionsBlockListStatusMapper
      {

        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t ACTIVE_BUT_UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("ACTIVE_BUT_UPDATE_FAILED");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        QuerySuggestionsBlockListStatus GetQuerySuggestionsBlockListStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return QuerySuggestionsBlockListStatus::ACTIVE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return QuerySuggestionsBlockListStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return QuerySuggestionsBlockListStatus::DELETING;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return QuerySuggestionsBlockListStatus::UPDATING;
          }
          else if (hashCode == ACTIVE_BUT_UPDATE_FAILED_HASH)
          {
            return QuerySuggestionsBlockListStatus::ACTIVE_BUT_UPDATE_FAILED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return QuerySuggestionsBlockListStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QuerySuggestionsBlockListStatus>(hashCode);
          }

          return QuerySuggestionsBlockListStatus::NOT_SET;
        }

        Aws::String GetNameForQuerySuggestionsBlockListStatus(QuerySuggestionsBlockListStatus enumValue)
        {
          switch(enumValue)
          {
          case QuerySuggestionsBlockListStatus::NOT_SET:
            return {};
          case QuerySuggestionsBlockListStatus::ACTIVE:
            return "ACTIVE";
          case QuerySuggestionsBlockListStatus::CREATING:
            return "CREATING";
          case QuerySuggestionsBlockListStatus::DELETING:
            return "DELETING";
          case QuerySuggestionsBlockListStatus::UPDATING:
            return "UPDATING";
          case QuerySuggestionsBlockListStatus::ACTIVE_BUT_UPDATE_FAILED:
            return "ACTIVE_BUT_UPDATE_FAILED";
          case QuerySuggestionsBlockListStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QuerySuggestionsBlockListStatusMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
