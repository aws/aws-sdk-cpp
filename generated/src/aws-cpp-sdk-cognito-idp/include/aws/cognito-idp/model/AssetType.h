/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/AssetCategoryType.h>
#include <aws/cognito-idp/model/ColorSchemeModeType.h>
#include <aws/cognito-idp/model/AssetExtensionType.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>An image file from a managed login branding style in a user pool.</p> <p>This
   * data type is a request parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateManagedLoginBranding.html">CreateManagedLoginBranding</a>
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateManagedLoginBranding.html">UpdateManagedLoginBranding</a>,
   * and a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeManagedLoginBranding.html">DescribeManagedLoginBranding</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssetType">AWS
   * API Reference</a></p>
   */
  class AssetType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AssetType();
    AWS_COGNITOIDENTITYPROVIDER_API AssetType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AssetType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category that the image corresponds to in your managed login
     * configuration. Managed login has asset categories for different types of logos,
     * backgrounds, and icons.</p>
     */
    inline const AssetCategoryType& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const AssetCategoryType& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(AssetCategoryType&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline AssetType& WithCategory(const AssetCategoryType& value) { SetCategory(value); return *this;}
    inline AssetType& WithCategory(AssetCategoryType&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display-mode target of the asset: light, dark, or browser-adaptive. For
     * example, Amazon Cognito displays a dark-mode image only when the browser or
     * application is in dark mode, but displays a browser-adaptive file in all
     * contexts.</p>
     */
    inline const ColorSchemeModeType& GetColorMode() const{ return m_colorMode; }
    inline bool ColorModeHasBeenSet() const { return m_colorModeHasBeenSet; }
    inline void SetColorMode(const ColorSchemeModeType& value) { m_colorModeHasBeenSet = true; m_colorMode = value; }
    inline void SetColorMode(ColorSchemeModeType&& value) { m_colorModeHasBeenSet = true; m_colorMode = std::move(value); }
    inline AssetType& WithColorMode(const ColorSchemeModeType& value) { SetColorMode(value); return *this;}
    inline AssetType& WithColorMode(ColorSchemeModeType&& value) { SetColorMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the image file.</p>
     */
    inline const AssetExtensionType& GetExtension() const{ return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    inline void SetExtension(const AssetExtensionType& value) { m_extensionHasBeenSet = true; m_extension = value; }
    inline void SetExtension(AssetExtensionType&& value) { m_extensionHasBeenSet = true; m_extension = std::move(value); }
    inline AssetType& WithExtension(const AssetExtensionType& value) { SetExtension(value); return *this;}
    inline AssetType& WithExtension(AssetExtensionType&& value) { SetExtension(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image file, in Base64-encoded binary.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const{ return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(const Aws::Utils::ByteBuffer& value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline void SetBytes(Aws::Utils::ByteBuffer&& value) { m_bytesHasBeenSet = true; m_bytes = std::move(value); }
    inline AssetType& WithBytes(const Aws::Utils::ByteBuffer& value) { SetBytes(value); return *this;}
    inline AssetType& WithBytes(Aws::Utils::ByteBuffer&& value) { SetBytes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline AssetType& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline AssetType& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline AssetType& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}
  private:

    AssetCategoryType m_category;
    bool m_categoryHasBeenSet = false;

    ColorSchemeModeType m_colorMode;
    bool m_colorModeHasBeenSet = false;

    AssetExtensionType m_extension;
    bool m_extensionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bytes;
    bool m_bytesHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
