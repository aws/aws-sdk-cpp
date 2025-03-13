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
   * <p>An image file from a managed login branding style in a user
   * pool.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/AssetType">AWS
   * API Reference</a></p>
   */
  class AssetType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API AssetType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API AssetType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API AssetType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category that the image corresponds to in your managed login
     * configuration. Managed login has asset categories for different types of logos,
     * backgrounds, and icons.</p>
     */
    inline AssetCategoryType GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(AssetCategoryType value) { m_categoryHasBeenSet = true; m_category = value; }
    inline AssetType& WithCategory(AssetCategoryType value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display-mode target of the asset: light, dark, or browser-adaptive. For
     * example, Amazon Cognito displays a dark-mode image only when the browser or
     * application is in dark mode, but displays a browser-adaptive file in all
     * contexts.</p>
     */
    inline ColorSchemeModeType GetColorMode() const { return m_colorMode; }
    inline bool ColorModeHasBeenSet() const { return m_colorModeHasBeenSet; }
    inline void SetColorMode(ColorSchemeModeType value) { m_colorModeHasBeenSet = true; m_colorMode = value; }
    inline AssetType& WithColorMode(ColorSchemeModeType value) { SetColorMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file type of the image file.</p>
     */
    inline AssetExtensionType GetExtension() const { return m_extension; }
    inline bool ExtensionHasBeenSet() const { return m_extensionHasBeenSet; }
    inline void SetExtension(AssetExtensionType value) { m_extensionHasBeenSet = true; m_extension = value; }
    inline AssetType& WithExtension(AssetExtensionType value) { SetExtension(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image file, in Base64-encoded binary.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    void SetBytes(BytesT&& value) { m_bytesHasBeenSet = true; m_bytes = std::forward<BytesT>(value); }
    template<typename BytesT = Aws::Utils::ByteBuffer>
    AssetType& WithBytes(BytesT&& value) { SetBytes(std::forward<BytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    AssetType& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}
  private:

    AssetCategoryType m_category{AssetCategoryType::NOT_SET};
    bool m_categoryHasBeenSet = false;

    ColorSchemeModeType m_colorMode{ColorSchemeModeType::NOT_SET};
    bool m_colorModeHasBeenSet = false;

    AssetExtensionType m_extension{AssetExtensionType::NOT_SET};
    bool m_extensionHasBeenSet = false;

    Aws::Utils::ByteBuffer m_bytes{};
    bool m_bytesHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
