/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/MapStyle.h>
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
      namespace MapStyleMapper
      {

        static const int Standard_HASH = HashingUtils::HashString("Standard");
        static const int Monochrome_HASH = HashingUtils::HashString("Monochrome");
        static const int Hybrid_HASH = HashingUtils::HashString("Hybrid");
        static const int Satellite_HASH = HashingUtils::HashString("Satellite");


        MapStyle GetMapStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Standard_HASH)
          {
            return MapStyle::Standard;
          }
          else if (hashCode == Monochrome_HASH)
          {
            return MapStyle::Monochrome;
          }
          else if (hashCode == Hybrid_HASH)
          {
            return MapStyle::Hybrid;
          }
          else if (hashCode == Satellite_HASH)
          {
            return MapStyle::Satellite;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MapStyle>(hashCode);
          }

          return MapStyle::NOT_SET;
        }

        Aws::String GetNameForMapStyle(MapStyle enumValue)
        {
          switch(enumValue)
          {
          case MapStyle::NOT_SET:
            return {};
          case MapStyle::Standard:
            return "Standard";
          case MapStyle::Monochrome:
            return "Monochrome";
          case MapStyle::Hybrid:
            return "Hybrid";
          case MapStyle::Satellite:
            return "Satellite";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MapStyleMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
