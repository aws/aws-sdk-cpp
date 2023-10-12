/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/SortOrder.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeDeploy
  {
    namespace Model
    {
      namespace SortOrderMapper
      {

        static constexpr uint32_t ascending_HASH = ConstExprHashingUtils::HashString("ascending");
        static constexpr uint32_t descending_HASH = ConstExprHashingUtils::HashString("descending");


        SortOrder GetSortOrderForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ascending_HASH)
          {
            return SortOrder::ascending;
          }
          else if (hashCode == descending_HASH)
          {
            return SortOrder::descending;
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
          case SortOrder::NOT_SET:
            return {};
          case SortOrder::ascending:
            return "ascending";
          case SortOrder::descending:
            return "descending";
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
  } // namespace CodeDeploy
} // namespace Aws
