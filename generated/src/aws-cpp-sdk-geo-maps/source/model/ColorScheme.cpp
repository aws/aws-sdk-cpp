/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-maps/model/ColorScheme.h>
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
      namespace ColorSchemeMapper
      {

        static const int Light_HASH = HashingUtils::HashString("Light");
        static const int Dark_HASH = HashingUtils::HashString("Dark");


        ColorScheme GetColorSchemeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Light_HASH)
          {
            return ColorScheme::Light;
          }
          else if (hashCode == Dark_HASH)
          {
            return ColorScheme::Dark;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorScheme>(hashCode);
          }

          return ColorScheme::NOT_SET;
        }

        Aws::String GetNameForColorScheme(ColorScheme enumValue)
        {
          switch(enumValue)
          {
          case ColorScheme::NOT_SET:
            return {};
          case ColorScheme::Light:
            return "Light";
          case ColorScheme::Dark:
            return "Dark";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorSchemeMapper
    } // namespace Model
  } // namespace GeoMaps
} // namespace Aws
