/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AssetCategoryType.h>
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
      namespace AssetCategoryTypeMapper
      {

        static const int FAVICON_ICO_HASH = HashingUtils::HashString("FAVICON_ICO");
        static const int FAVICON_SVG_HASH = HashingUtils::HashString("FAVICON_SVG");
        static const int EMAIL_GRAPHIC_HASH = HashingUtils::HashString("EMAIL_GRAPHIC");
        static const int SMS_GRAPHIC_HASH = HashingUtils::HashString("SMS_GRAPHIC");
        static const int AUTH_APP_GRAPHIC_HASH = HashingUtils::HashString("AUTH_APP_GRAPHIC");
        static const int PASSWORD_GRAPHIC_HASH = HashingUtils::HashString("PASSWORD_GRAPHIC");
        static const int PASSKEY_GRAPHIC_HASH = HashingUtils::HashString("PASSKEY_GRAPHIC");
        static const int PAGE_HEADER_LOGO_HASH = HashingUtils::HashString("PAGE_HEADER_LOGO");
        static const int PAGE_HEADER_BACKGROUND_HASH = HashingUtils::HashString("PAGE_HEADER_BACKGROUND");
        static const int PAGE_FOOTER_LOGO_HASH = HashingUtils::HashString("PAGE_FOOTER_LOGO");
        static const int PAGE_FOOTER_BACKGROUND_HASH = HashingUtils::HashString("PAGE_FOOTER_BACKGROUND");
        static const int PAGE_BACKGROUND_HASH = HashingUtils::HashString("PAGE_BACKGROUND");
        static const int FORM_BACKGROUND_HASH = HashingUtils::HashString("FORM_BACKGROUND");
        static const int FORM_LOGO_HASH = HashingUtils::HashString("FORM_LOGO");
        static const int IDP_BUTTON_ICON_HASH = HashingUtils::HashString("IDP_BUTTON_ICON");


        AssetCategoryType GetAssetCategoryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FAVICON_ICO_HASH)
          {
            return AssetCategoryType::FAVICON_ICO;
          }
          else if (hashCode == FAVICON_SVG_HASH)
          {
            return AssetCategoryType::FAVICON_SVG;
          }
          else if (hashCode == EMAIL_GRAPHIC_HASH)
          {
            return AssetCategoryType::EMAIL_GRAPHIC;
          }
          else if (hashCode == SMS_GRAPHIC_HASH)
          {
            return AssetCategoryType::SMS_GRAPHIC;
          }
          else if (hashCode == AUTH_APP_GRAPHIC_HASH)
          {
            return AssetCategoryType::AUTH_APP_GRAPHIC;
          }
          else if (hashCode == PASSWORD_GRAPHIC_HASH)
          {
            return AssetCategoryType::PASSWORD_GRAPHIC;
          }
          else if (hashCode == PASSKEY_GRAPHIC_HASH)
          {
            return AssetCategoryType::PASSKEY_GRAPHIC;
          }
          else if (hashCode == PAGE_HEADER_LOGO_HASH)
          {
            return AssetCategoryType::PAGE_HEADER_LOGO;
          }
          else if (hashCode == PAGE_HEADER_BACKGROUND_HASH)
          {
            return AssetCategoryType::PAGE_HEADER_BACKGROUND;
          }
          else if (hashCode == PAGE_FOOTER_LOGO_HASH)
          {
            return AssetCategoryType::PAGE_FOOTER_LOGO;
          }
          else if (hashCode == PAGE_FOOTER_BACKGROUND_HASH)
          {
            return AssetCategoryType::PAGE_FOOTER_BACKGROUND;
          }
          else if (hashCode == PAGE_BACKGROUND_HASH)
          {
            return AssetCategoryType::PAGE_BACKGROUND;
          }
          else if (hashCode == FORM_BACKGROUND_HASH)
          {
            return AssetCategoryType::FORM_BACKGROUND;
          }
          else if (hashCode == FORM_LOGO_HASH)
          {
            return AssetCategoryType::FORM_LOGO;
          }
          else if (hashCode == IDP_BUTTON_ICON_HASH)
          {
            return AssetCategoryType::IDP_BUTTON_ICON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetCategoryType>(hashCode);
          }

          return AssetCategoryType::NOT_SET;
        }

        Aws::String GetNameForAssetCategoryType(AssetCategoryType enumValue)
        {
          switch(enumValue)
          {
          case AssetCategoryType::NOT_SET:
            return {};
          case AssetCategoryType::FAVICON_ICO:
            return "FAVICON_ICO";
          case AssetCategoryType::FAVICON_SVG:
            return "FAVICON_SVG";
          case AssetCategoryType::EMAIL_GRAPHIC:
            return "EMAIL_GRAPHIC";
          case AssetCategoryType::SMS_GRAPHIC:
            return "SMS_GRAPHIC";
          case AssetCategoryType::AUTH_APP_GRAPHIC:
            return "AUTH_APP_GRAPHIC";
          case AssetCategoryType::PASSWORD_GRAPHIC:
            return "PASSWORD_GRAPHIC";
          case AssetCategoryType::PASSKEY_GRAPHIC:
            return "PASSKEY_GRAPHIC";
          case AssetCategoryType::PAGE_HEADER_LOGO:
            return "PAGE_HEADER_LOGO";
          case AssetCategoryType::PAGE_HEADER_BACKGROUND:
            return "PAGE_HEADER_BACKGROUND";
          case AssetCategoryType::PAGE_FOOTER_LOGO:
            return "PAGE_FOOTER_LOGO";
          case AssetCategoryType::PAGE_FOOTER_BACKGROUND:
            return "PAGE_FOOTER_BACKGROUND";
          case AssetCategoryType::PAGE_BACKGROUND:
            return "PAGE_BACKGROUND";
          case AssetCategoryType::FORM_BACKGROUND:
            return "FORM_BACKGROUND";
          case AssetCategoryType::FORM_LOGO:
            return "FORM_LOGO";
          case AssetCategoryType::IDP_BUTTON_ICON:
            return "IDP_BUTTON_ICON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetCategoryTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
