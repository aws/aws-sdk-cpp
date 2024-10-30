/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/GeocodeIntendedUse.h>
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
      namespace GeocodeIntendedUseMapper
      {

        static const int SingleUse_HASH = HashingUtils::HashString("SingleUse");
        static const int Storage_HASH = HashingUtils::HashString("Storage");


        GeocodeIntendedUse GetGeocodeIntendedUseForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SingleUse_HASH)
          {
            return GeocodeIntendedUse::SingleUse;
          }
          else if (hashCode == Storage_HASH)
          {
            return GeocodeIntendedUse::Storage;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GeocodeIntendedUse>(hashCode);
          }

          return GeocodeIntendedUse::NOT_SET;
        }

        Aws::String GetNameForGeocodeIntendedUse(GeocodeIntendedUse enumValue)
        {
          switch(enumValue)
          {
          case GeocodeIntendedUse::NOT_SET:
            return {};
          case GeocodeIntendedUse::SingleUse:
            return "SingleUse";
          case GeocodeIntendedUse::Storage:
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

      } // namespace GeocodeIntendedUseMapper
    } // namespace Model
  } // namespace GeoPlaces
} // namespace Aws
