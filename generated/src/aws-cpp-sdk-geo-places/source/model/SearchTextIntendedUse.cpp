/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchTextIntendedUse.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoPlaces
  {
    namespace Model
    {
      namespace SearchTextIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");
        static const int Storage_HASH = HashingUtils::HashString("Storage");


        SearchTextIntendedUse GetSearchTextIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return SearchTextIntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return SearchTextIntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchTextIntendedUse>(hashCode);
          }

          return SearchTextIntendedUse::NOT_SET;
        }

        Aws::String GetNameForSearchTextIntendedUse(SearchTextIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case SearchTextIntendedUse::NOT_SET:
            return {};
          case SearchTextIntendedUse::SingleUse:
            return "SingleUse";
          case SearchTextIntendedUse::Storage:
            return "Storage";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchTextIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
