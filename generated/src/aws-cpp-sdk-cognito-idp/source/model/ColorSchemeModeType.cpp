/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/ColorSchemeModeType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CognitoIdentityProvider
  {
    namespace Model
    {
      namespace ColorSchemeModeTypeMapper
      {

        static const int LIGHT_HASH = HashingUtils::HashString("LIGHT");
        static const int DARK_HASH = HashingUtils::HashString("DARK");
        static const int DYNAMIC_HASH = HashingUtils::HashString("DYNAMIC");


        ColorSchemeModeType GetColorSchemeModeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LIGHT_HASH)
          {
            return ColorSchemeModeType::LIGHT;
          }
          else if (hashCode == DARK_HASH)
          {
            return ColorSchemeModeType::DARK;
          }
          else if (hashCode == DYNAMIC_HASH)
          {
            return ColorSchemeModeType::DYNAMIC;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ColorSchemeModeType>(hashCode);
          }

          return ColorSchemeModeType::NOT_SET;
        }

        Aws::String GetNameForColorSchemeModeType(ColorSchemeModeType enumValue)
        {
          switch(enumValue)
          {
          case ColorSchemeModeType::NOT_SET:
            return {};
          case ColorSchemeModeType::LIGHT:
            return "LIGHT";
          case ColorSchemeModeType::DARK:
            return "DARK";
          case ColorSchemeModeType::DYNAMIC:
            return "DYNAMIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorSchemeModeTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
