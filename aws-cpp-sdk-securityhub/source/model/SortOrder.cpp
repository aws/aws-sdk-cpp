/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace SortOrderMapper
      {

        static const int asc_HASH = HashingUtils::HashString("asc");
        static const int desc_HASH = HashingUtils::HashString("desc");


        SortOrder GetSortOrderForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == asc_HASH)
          {
            return SortOrder::asc;
          }
          else if (hashCode == desc_HASH)
          {
            return SortOrder::desc;
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
          case SortOrder::asc:
            return "asc";
          case SortOrder::desc:
            return "desc";
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
  } // namespace SecurityHub
} // namespace Aws
