/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ThemeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace ThemeTypeMapper
      {

        static const int QUICKSIGHT_HASH = HashingUtils::HashString("QUICKSIGHT");
        static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
        static const int ALL_HASH = HashingUtils::HashString("ALL");


        ThemeType GetThemeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == QUICKSIGHT_HASH)
          {
            return ThemeType::QUICKSIGHT;
          }
          else if (hashCode == CUSTOM_HASH)
          {
            return ThemeType::CUSTOM;
          }
          else if (hashCode == ALL_HASH)
          {
            return ThemeType::ALL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ThemeType>(hashCode);
          }

          return ThemeType::NOT_SET;
        }

        Aws::String GetNameForThemeType(ThemeType enumValue)
        {
          switch(enumValue)
          {
          case ThemeType::QUICKSIGHT:
            return "QUICKSIGHT";
          case ThemeType::CUSTOM:
            return "CUSTOM";
          case ThemeType::ALL:
            return "ALL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ThemeTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
