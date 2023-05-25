/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/FilterKey.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CodeCatalyst
  {
    namespace Model
    {
      namespace FilterKeyMapper
      {

        static const int hasAccessTo_HASH = HashingUtils::HashString("hasAccessTo");


        FilterKey GetFilterKeyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == hasAccessTo_HASH)
          {
            return FilterKey::hasAccessTo;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterKey>(hashCode);
          }

          return FilterKey::NOT_SET;
        }

        Aws::String GetNameForFilterKey(FilterKey enumValue)
        {
          switch(enumValue)
          {
          case FilterKey::hasAccessTo:
            return "hasAccessTo";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterKeyMapper
    } // namespace Model
  } // namespace CodeCatalyst
} // namespace Aws
