/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/AssetExtensionType.h>
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
      namespace AssetExtensionTypeMapper
      {

        static const int ICO_HASH = HashingUtils::HashString("ICO");
        static const int JPEG_HASH = HashingUtils::HashString("JPEG");
        static const int PNG_HASH = HashingUtils::HashString("PNG");
        static const int SVG_HASH = HashingUtils::HashString("SVG");
        static const int WEBP_HASH = HashingUtils::HashString("WEBP");


        AssetExtensionType GetAssetExtensionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ICO_HASH)
          {
            return AssetExtensionType::ICO;
          }
          else if (hashCode == JPEG_HASH)
          {
            return AssetExtensionType::JPEG;
          }
          else if (hashCode == PNG_HASH)
          {
            return AssetExtensionType::PNG;
          }
          else if (hashCode == SVG_HASH)
          {
            return AssetExtensionType::SVG;
          }
          else if (hashCode == WEBP_HASH)
          {
            return AssetExtensionType::WEBP;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AssetExtensionType>(hashCode);
          }

          return AssetExtensionType::NOT_SET;
        }

        Aws::String GetNameForAssetExtensionType(AssetExtensionType enumValue)
        {
          switch(enumValue)
          {
          case AssetExtensionType::NOT_SET:
            return {};
          case AssetExtensionType::ICO:
            return "ICO";
          case AssetExtensionType::JPEG:
            return "JPEG";
          case AssetExtensionType::PNG:
            return "PNG";
          case AssetExtensionType::SVG:
            return "SVG";
          case AssetExtensionType::WEBP:
            return "WEBP";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AssetExtensionTypeMapper
    } // namespace Model
  } // namespace CognitoIdentityProvider
} // namespace Aws
