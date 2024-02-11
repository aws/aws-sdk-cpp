/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/SortBy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ConfigService
  {
    namespace Model
    {
      namespace SortByMapper
      {

        static const int SCORE_HASH = HashingUtils::HashString("SCORE");


        SortBy GetSortByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SCORE_HASH)
          {
            return SortBy::SCORE;
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
          case SortBy::SCORE:
            return "SCORE";
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
  } // namespace ConfigService
} // namespace Aws
