/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/TitleSortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Inspector2
  {
    namespace Model
    {
      namespace TitleSortByMapper
      {

        static const int CRITICAL_HASH = HashingUtils::HashString("CRITICAL");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        TitleSortBy GetTitleSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CRITICAL_HASH)
          {
            return TitleSortBy::CRITICAL;
          }
          else if (hashCode == HIGH_HASH)
          {
            return TitleSortBy::HIGH;
          }
          else if (hashCode == ALL_HASH)
          {
            return TitleSortBy::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TitleSortBy>(hashCode);
          }

          return TitleSortBy::NOT_SET;
        }

        Aws::String GetNameForTitleSortBy(TitleSortBy enumValue)
        {
          switch(enumValue)
          {
          case TitleSortBy::NOT_SET:
            return {};
          case TitleSortBy::CRITICAL:
            return "CRITICAL";
          case TitleSortBy::HIGH:
            return "HIGH";
          case TitleSortBy::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TitleSortByMapper
    } // namespace Model
  } // namespace Inspector2
} // namespace Aws
