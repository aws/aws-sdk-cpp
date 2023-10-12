/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ACM
  {
    namespace Model
    {
      namespace SortByMapper
      {

        static constexpr uint32_t CREATED_AT_HASH = ConstExprHashingUtils::HashString("CREATED_AT");


        SortBy GetSortByForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_AT_HASH)
          {
            return SortBy::CREATED_AT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SortBy>(hashCode);
          }

          return SortBy::NOT_SET;
        }

        Aws::String GetNameForSortBy(SortBy enumValue)
        {
          switch(enumValue)
          {
          case SortBy::NOT_SET:
            return {};
          case SortBy::CREATED_AT:
            return "CREATED_AT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SortByMapper
    } // namespace Model
  } // namespace ACM
} // namespace Aws
