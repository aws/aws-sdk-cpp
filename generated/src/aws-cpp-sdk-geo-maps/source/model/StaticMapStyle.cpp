/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/StaticMapStyle.h>
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
      namespace StaticMapStyleMapper
      {

        static const int Satellite_HASH = HashingUtils::HashString("Satellite");
        static const int Standard_HASH = HashingUtils::HashString("Standard");


        StaticMapStyle GetStaticMapStyleForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Satellite_HASH)
          {
            return StaticMapStyle::Satellite;
          }
          else if (hashCode == Standard_HASH)
          {
            return StaticMapStyle::Standard;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StaticMapStyle>(hashCode);
          }

          return StaticMapStyle::NOT_SET;
        }

        Aws::String GetNameForStaticMapStyle(StaticMapStyle enumValue)
        {
          switch(enumValue)
          {
          case StaticMapStyle::NOT_SET:
            return {};
          case StaticMapStyle::Satellite:
            return "Satellite";
          case StaticMapStyle::Standard:
            return "Standard";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StaticMapStyleMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
