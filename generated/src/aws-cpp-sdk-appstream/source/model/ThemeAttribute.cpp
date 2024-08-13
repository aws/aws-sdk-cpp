/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ThemeAttribute.h>
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
      namespace ThemeAttributeMapper
      {

        static const int FOOTER_LINKS_HASH = HashingUtils::HashString("FOOTER_LINKS");


        ThemeAttribute GetThemeAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOOTER_LINKS_HASH)
          {
            return ThemeAttribute::FOOTER_LINKS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThemeAttribute>(hashCode);
          }

          return ThemeAttribute::NOT_SET;
        }

        Aws::String GetNameForThemeAttribute(ThemeAttribute enumValue)
        {
          switch(enumValue)
          {
          case ThemeAttribute::NOT_SET:
            return {};
          case ThemeAttribute::FOOTER_LINKS:
            return "FOOTER_LINKS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThemeAttributeMapper
    } // namespace Model
  } // namespace AppStream
} // namespace Aws
