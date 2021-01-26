/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/SortOrder.h>
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
      namespace SortOrderMapper
      {

        static const int DESC_HASH = HashingUtils::HashString("DESC");
        static const int ASC_HASH = HashingUtils::HashString("ASC");


        SortOrder GetSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DESC_HASH)
          {
            return SortOrder::DESC;
          }
          else if (hashCode == ASC_HASH)
          {
            return SortOrder::ASC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortOrder>(hashCode);
          }

          return SortOrder::NOT_SET;
        }

        Aws::String GetNameForSortOrder(SortOrder enumValue)
        {
          switch(enumValue)
          {
          case SortOrder::DESC:
            return "DESC";
          case SortOrder::ASC:
            return "ASC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortOrderMapper
    } // namespace Model
  } // namespace kendra
} // namespace Aws
