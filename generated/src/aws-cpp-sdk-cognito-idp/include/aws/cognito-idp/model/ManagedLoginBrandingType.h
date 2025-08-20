/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/AssetType.h>
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
   * <p>A managed login branding style that's assigned to a user pool app
   * client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ManagedLoginBrandingType">AWS
   * API Reference</a></p>
   */
  class ManagedLoginBrandingType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the managed login branding style.</p>
     */
    inline const Aws::String& GetManagedLoginBrandingId() const { return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    void SetManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::forward<ManagedLoginBrandingIdT>(value); }
    template<typename ManagedLoginBrandingIdT = Aws::String>
    ManagedLoginBrandingType& WithManagedLoginBrandingId(ManagedLoginBrandingIdT&& value) { SetManagedLoginBrandingId(std::forward<ManagedLoginBrandingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool where the branding style is assigned.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    ManagedLoginBrandingType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When true, applies the default branding style options. This option reverts to
     * default style options that are managed by Amazon Cognito. You can modify them
     * later in the branding editor.</p> <p>When you specify <code>true</code> for this
     * option, you must also omit values for <code>Settings</code> and
     * <code>Assets</code> in the request.</p>
     */
    inline bool GetUseCognitoProvidedValues() const { return m_useCognitoProvidedValues; }
    inline bool UseCognitoProvidedValuesHasBeenSet() const { return m_useCognitoProvidedValuesHasBeenSet; }
    inline void SetUseCognitoProvidedValues(bool value) { m_useCognitoProvidedValuesHasBeenSet = true; m_useCognitoProvidedValues = value; }
    inline ManagedLoginBrandingType& WithUseCognitoProvidedValues(bool value) { SetUseCognitoProvidedValues(value); return *this;}
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
    ManagedLoginBrandingType& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of image files that you want to apply to roles like backgrounds,
     * logos, and icons. Each object must also indicate whether it is for dark mode,
     * light mode, or browser-adaptive mode.</p>
     */
    inline const Aws::Vector<AssetType>& GetAssets() const { return m_assets; }
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }
    template<typename AssetsT = Aws::Vector<AssetType>>
    void SetAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets = std::forward<AssetsT>(value); }
    template<typename AssetsT = Aws::Vector<AssetType>>
    ManagedLoginBrandingType& WithAssets(AssetsT&& value) { SetAssets(std::forward<AssetsT>(value)); return *this;}
    template<typename AssetsT = AssetType>
    ManagedLoginBrandingType& AddAssets(AssetsT&& value) { m_assetsHasBeenSet = true; m_assets.emplace_back(std::forward<AssetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ManagedLoginBrandingType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = Aws::Utils::DateTime>
    ManagedLoginBrandingType& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedLoginBrandingId;
    bool m_managedLoginBrandingIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    bool m_useCognitoProvidedValues{false};
    bool m_useCognitoProvidedValuesHasBeenSet = false;

    Aws::Utils::Document m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<AssetType> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
