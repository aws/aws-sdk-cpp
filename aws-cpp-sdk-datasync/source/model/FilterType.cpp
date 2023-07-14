/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FilterType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace DataSync
  {
    namespace Model
    {
      namespace FilterTypeMapper
      {

        static const int SIMPLE_PATTERN_HASH = HashingUtils::HashString("SIMPLE_PATTERN");


        FilterType GetFilterTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SIMPLE_PATTERN_HASH)
          {
            return FilterType::SIMPLE_PATTERN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FilterType>(hashCode);
          }

          return FilterType::NOT_SET;
        }

        Aws::String GetNameForFilterType(FilterType enumValue)
        {
          switch(enumValue)
          {
          case FilterType::SIMPLE_PATTERN:
            return "SIMPLE_PATTERN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FilterTypeMapper
    } // namespace Model
  } // namespace DataSync
} // namespace Aws
