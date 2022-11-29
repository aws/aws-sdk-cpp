/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FilterNullOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FilterNullOptionMapper
      {

        static const int ALL_VALUES_HASH = HashingUtils::HashString("ALL_VALUES");
        static const int NULLS_ONLY_HASH = HashingUtils::HashString("NULLS_ONLY");
        static const int NON_NULLS_ONLY_HASH = HashingUtils::HashString("NON_NULLS_ONLY");


        FilterNullOption GetFilterNullOptionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_VALUES_HASH)
          {
            return FilterNullOption::ALL_VALUES;
          }
          else if (hashCode == NULLS_ONLY_HASH)
          {
            return FilterNullOption::NULLS_ONLY;
          }
          else if (hashCode == NON_NULLS_ONLY_HASH)
          {
            return FilterNullOption::NON_NULLS_ONLY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterNullOption>(hashCode);
          }

          return FilterNullOption::NOT_SET;
        }

        Aws::String GetNameForFilterNullOption(FilterNullOption enumValue)
        {
          switch(enumValue)
          {
          case FilterNullOption::ALL_VALUES:
            return "ALL_VALUES";
          case FilterNullOption::NULLS_ONLY:
            return "NULLS_ONLY";
          case FilterNullOption::NON_NULLS_ONLY:
            return "NON_NULLS_ONLY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterNullOptionMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
