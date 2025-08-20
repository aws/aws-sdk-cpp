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
    AWS_COGNITOIDENTITYPROVIDER_API CreateManagedLoginBrandingRequest() = default;

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
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    CreateManagedLoginBrandingRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The app client that you want to create the branding style for. Each style is
     * linked to an app client until you delete it.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CreateManagedLoginBrandingRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, applies the default branding style options. These default options
     * are managed by Amazon Cognito. You can modify them later in the branding
     * editor.</p> <p>When you specify <code>true</code> for this option, you must also
     * omit values for <code>Settings</code> and <code>Assets</code> in the
     * request.</p>
     */
    inline bool GetUseCognitoProvidedValues() const { return m_useCognitoProvidedValues; }
    inline bool UseCognitoProvidedValuesHasBeenSet() const { return m_useCognitoProvidedValuesHasBeenSet; }
    inline void SetUseCognitoProvidedValues(bool value) { m_useCognitoProvidedValuesHasBeenSet = true; m_useCognitoProvidedValues = value; }
    inline CreateManagedLoginBrandingRequest& WithUseCognitoProvidedValues(bool value) { SetUseCognitoProvidedValues(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON file, encoded as a <code>Document</code> type, with the the settings
     * that you want to apply to your style.</p> <p>The following components are not
     * currently implemented and reserved for future use:</p> <ul> <li> <p>
     * <code>signUp</code> </p> </li> <li> <p> <code>instructions</code> </p> </li>
     * <li> <p> <code>sessionTimerDisplay</code> </p> </li> <li> <p>
     * <code>languageSelector</code> (for localization, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-managed-login.html#managed-login-localization">Managed
     * login localization)</a> </p> </li> </ul>
     */
    inline Aws::Utils::DocumentView GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Utils::Document>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Utils::Document>
    CreateManagedLoginBrandingRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of image files that you want to apply to functions like backgrounds,
     * logos, and icons. Each object must also indicate whether it is for dark mode,
     * light mode, or browser-adaptive mode.</p>
     */
    inline const Aws::Vector<AssetType>& GetAssets() const { return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    template<typename AssetsT = Aws::Vector<AssetType>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Vector<AssetType>>
    CreateManagedLoginBrandingRequest& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsT = AssetType>
    CreateManagedLoginBrandingRequest& AddAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets.emplace_back(std::forward<AssetsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    bool m_useCognitoProvidedValues{false};
    bool m_useCognitoProvidedValuesHasBeenSet = false;

    Aws::Utils::Document m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<AssetType> m_assets;
    bool m_assetsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
