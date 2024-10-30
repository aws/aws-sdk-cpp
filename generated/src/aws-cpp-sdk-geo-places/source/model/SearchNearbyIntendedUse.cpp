/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/SearchNearbyIntendedUse.h>
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
      namespace SearchNearbyIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");
        static const int Storage_HASH = HashingUtils::HashString("Storage");


        SearchNearbyIntendedUse GetSearchNearbyIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return SearchNearbyIntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return SearchNearbyIntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchNearbyIntendedUse>(hashCode);
          }

          return SearchNearbyIntendedUse::NOT_SET;
        }

        Aws::String GetNameForSearchNearbyIntendedUse(SearchNearbyIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case SearchNearbyIntendedUse::NOT_SET:
            return {};
          case SearchNearbyIntendedUse::SingleUse:
            return "SingleUse";
          case SearchNearbyIntendedUse::Storage:
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

      } // namespace SearchNearbyIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
