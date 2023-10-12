/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Sort.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Glue
  {
    namespace Model
    {
      namespace SortMapper
      {

        static constexpr uint32_t ASC_HASH = ConstExprHashingUtils::HashString("ASC");
        static constexpr uint32_t DESC_HASH = ConstExprHashingUtils::HashString("DESC");


        Sort GetSortForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ASC_HASH)
          {
            return Sort::ASC;
          }
          else if (hashCode == DESC_HASH)
          {
            return Sort::DESC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Sort>(hashCode);
          }

          return Sort::NOT_SET;
        }

        Aws::String GetNameForSort(Sort enumValue)
        {
          switch(enumValue)
          {
          case Sort::NOT_SET:
            return {};
          case Sort::ASC:
            return "ASC";
          case Sort::DESC:
            return "DESC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortMapper
    } // namespace Model
  } // namespace Glue
} // namespace Aws
