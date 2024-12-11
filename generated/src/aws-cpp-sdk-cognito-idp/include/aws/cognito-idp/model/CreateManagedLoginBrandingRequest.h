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
  class CreateManagedLoginBrandingRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateManagedLoginBrandingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateManagedLoginBranding"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to create a new branding style.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline CreateManagedLoginBrandingRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline CreateManagedLoginBrandingRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline CreateManagedLoginBrandingRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client that you want to create the branding style for. Each style is
     * permanently linked to an app client. To change the style for an app client,
     * delete the existing style with <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DeleteManagedLoginBranding.html">DeleteManagedLoginBranding</a>
     * and create a new one.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CreateManagedLoginBrandingRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CreateManagedLoginBrandingRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CreateManagedLoginBrandingRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, applies the default branding style options. These default options
     * are managed by Amazon Cognito. You can modify them later in the branding
     * designer.</p> <p>When you specify <code>true</code> for this option, you must
     * also omit values for <code>Settings</code> and <code>Assets</code> in the
     * request.</p>
     */
    inline bool GetUseCognitoProvidedValues() const{ return m_useCognitoProvidedValues; }
    inline bool UseCognitoProvidedValuesHasBeenSet() const { return m_useCognitoProvidedValuesHasBeenSet; }
    inline void SetUseCognitoProvidedValues(bool value) { m_useCognitoProvidedValuesHasBeenSet = true; m_useCognitoProvidedValues = value; }
    inline CreateManagedLoginBrandingRequest& WithUseCognitoProvidedValues(bool value) { SetUseCognitoProvidedValues(value); return *this;}
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
    inline CreateManagedLoginBrandingRequest& WithSettings(const Aws::Utils::Document& value) { SetSettings(value); return *this;}
    inline CreateManagedLoginBrandingRequest& WithSettings(Aws::Utils::Document&& value) { SetSettings(std::move(value)); return *this;}
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
    inline CreateManagedLoginBrandingRequest& WithAssets(const Aws::Vector<AssetType>& value) { SetAssets(value); return *this;}
    inline CreateManagedLoginBrandingRequest& WithAssets(Aws::Vector<AssetType>&& value) { SetAssets(std::move(value)); return *this;}
    inline CreateManagedLoginBrandingRequest& AddAssets(const AssetType& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }
    inline CreateManagedLoginBrandingRequest& AddAssets(AssetType&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

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
