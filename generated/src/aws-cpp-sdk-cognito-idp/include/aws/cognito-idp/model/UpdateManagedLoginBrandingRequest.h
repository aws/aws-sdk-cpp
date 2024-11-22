/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AssetType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class UpdateManagedLoginBrandingRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API UpdateManagedLoginBrandingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateManagedLoginBranding"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool that contains the managed login branding style that
     * you want to update.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline UpdateManagedLoginBrandingRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the managed login branding style that you want to update.</p>
     */
    inline const Aws::String& GetManagedLoginBrandingId() const{ return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    inline void SetManagedLoginBrandingId(const Aws::String& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = value; }
    inline void SetManagedLoginBrandingId(Aws::String&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::move(value); }
    inline void SetManagedLoginBrandingId(const char* value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId.assign(value); }
    inline UpdateManagedLoginBrandingRequest& WithManagedLoginBrandingId(const Aws::String& value) { SetManagedLoginBrandingId(value); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithManagedLoginBrandingId(Aws::String&& value) { SetManagedLoginBrandingId(std::move(value)); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithManagedLoginBrandingId(const char* value) { SetManagedLoginBrandingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, applies the default branding style options. This option reverts to
     * default style options that are managed by Amazon Cognito. You can modify them
     * later in the branding designer.</p> <p>When you specify <code>true</code> for
     * this option, you must also omit values for <code>Settings</code> and
     * <code>Assets</code> in the request.</p>
     */
    inline bool GetUseCognitoProvidedValues() const{ return m_useCognitoProvidedValues; }
    inline bool UseCognitoProvidedValuesHasBeenSet() const { return m_useCognitoProvidedValuesHasBeenSet; }
    inline void SetUseCognitoProvidedValues(bool value) { m_useCognitoProvidedValuesHasBeenSet = true; m_useCognitoProvidedValues = value; }
    inline UpdateManagedLoginBrandingRequest& WithUseCognitoProvidedValues(bool value) { SetUseCognitoProvidedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON file, encoded as a <code>Document</code> type, with the the settings
     * that you want to apply to your style.</p>
     */
    inline Aws::Utils::DocumentView GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const Aws::Utils::Document& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(Aws::Utils::Document&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline UpdateManagedLoginBrandingRequest& WithSettings(const Aws::Utils::Document& value) { SetSettings(value); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithSettings(Aws::Utils::Document&& value) { SetSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of image files that you want to apply to roles like backgrounds,
     * logos, and icons. Each object must also indicate whether it is for dark mode,
     * light mode, or browser-adaptive mode.</p>
     */
    inline const Aws::Vector<AssetType>& GetAssets() const{ return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    inline void SetAssets(const Aws::Vector<AssetType>& value) { m_assetsHasBeenSet = true; m_assets = value; }
    inline void SetAssets(Aws::Vector<AssetType>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }
    inline UpdateManagedLoginBrandingRequest& WithAssets(const Aws::Vector<AssetType>& value) { SetAssets(value); return *this;}
    inline UpdateManagedLoginBrandingRequest& WithAssets(Aws::Vector<AssetType>&& value) { SetAssets(std::move(value)); return *this;}
    inline UpdateManagedLoginBrandingRequest& AddAssets(const AssetType& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }
    inline UpdateManagedLoginBrandingRequest& AddAssets(AssetType&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_managedLoginBrandingId;
    bool m_managedLoginBrandingIdHasBeenSet = false;

    bool m_useCognitoProvidedValues;
    bool m_useCognitoProvidedValuesHasBeenSet = false;

    Aws::Utils::Document m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<AssetType> m_assets;
    bool m_assetsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
