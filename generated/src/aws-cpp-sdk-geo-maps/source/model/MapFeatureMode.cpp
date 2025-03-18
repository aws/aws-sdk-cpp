/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/MapFeatureMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace GeoMaps
  {
    namespace Model
    {
      namespace MapFeatureModeMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        MapFeatureMode GetMapFeatureModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return MapFeatureMode::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return MapFeatureMode::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapFeatureMode>(hashCode);
          }

          return MapFeatureMode::NOT_SET;
        }

        Aws::String GetNameForMapFeatureMode(MapFeatureMode enumValue)
        {
          switch(enumValue)
          {
          case MapFeatureMode::NOT_SET:
            return {};
          case MapFeatureMode::Enabled:
            return "Enabled";
          case MapFeatureMode::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapFeatureModeMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
