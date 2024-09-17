/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ThemeStyling.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace AppStream
  {
    namespace Model
    {
      namespace ThemeStylingMapper
      {

        static const int LIGHT_BLUE_HASH = HashingUtils::HashString("LIGHT_BLUE");
        static const int BLUE_HASH = HashingUtils::HashString("BLUE");
        static const int PINK_HASH = HashingUtils::HashString("PINK");
        static const int RED_HASH = HashingUtils::HashString("RED");


        ThemeStyling GetThemeStylingForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIGHT_BLUE_HASH)
          {
            return ThemeStyling::LIGHT_BLUE;
          }
          else if (hashCode == BLUE_HASH)
          {
            return ThemeStyling::BLUE;
          }
          else if (hashCode == PINK_HASH)
          {
            return ThemeStyling::PINK;
          }
          else if (hashCode == RED_HASH)
          {
            return ThemeStyling::RED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThemeStyling>(hashCode);
          }

          return ThemeStyling::NOT_SET;
        }

        Aws::String GetNameForThemeStyling(ThemeStyling enumValue)
        {
          switch(enumValue)
          {
          case ThemeStyling::NOT_SET:
            return {};
          case ThemeStyling::LIGHT_BLUE:
            return "LIGHT_BLUE";
          case ThemeStyling::BLUE:
            return "BLUE";
          case ThemeStyling::PINK:
            return "PINK";
          case ThemeStyling::RED:
            return "RED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThemeStylingMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
