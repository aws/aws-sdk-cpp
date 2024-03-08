/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/SearchOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace LexModelsV2
  {
    namespace Model
    {
      namespace SearchOrderMapper
      {

        static const int Ascending_HASH = HashingUtils::HashString("Ascending");
        static const int Descending_HASH = HashingUtils::HashString("Descending");


        SearchOrder GetSearchOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Ascending_HASH)
          {
            return SearchOrder::Ascending;
          }
          else if (hashCode == Descending_HASH)
          {
            return SearchOrder::Descending;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchOrder>(hashCode);
          }

          return SearchOrder::NOT_SET;
        }

        Aws::String GetNameForSearchOrder(SearchOrder enumValue)
        {
          switch(enumValue)
          {
          case SearchOrder::NOT_SET:
            return {};
          case SearchOrder::Ascending:
            return "Ascending";
          case SearchOrder::Descending:
            return "Descending";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchOrderMapper
    } // namespace Model
  } // namespace LexModelsV2
} // namespace Aws
