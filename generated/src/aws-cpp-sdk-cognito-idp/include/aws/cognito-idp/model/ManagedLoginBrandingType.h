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
   * <p>A managed login branding style that's assigned to a user pool app client.</p>
   * <p>This data type is a response parameter of <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_CreateManagedLoginBranding.html">CreateManagedLoginBranding</a>,
   * <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_UpdateManagedLoginBranding.html">UpdateManagedLoginBranding</a>,
   * <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeManagedLoginBranding.html">DescribeManagedLoginBranding</a>,
   * and <a
   * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_DescribeManagedLoginBrandingByClient.html">DescribeManagedLoginBrandingByClient</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ManagedLoginBrandingType">AWS
   * API Reference</a></p>
   */
  class ManagedLoginBrandingType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType();
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API ManagedLoginBrandingType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the managed login branding style.</p>
     */
    inline const Aws::String& GetManagedLoginBrandingId() const{ return m_managedLoginBrandingId; }
    inline bool ManagedLoginBrandingIdHasBeenSet() const { return m_managedLoginBrandingIdHasBeenSet; }
    inline void SetManagedLoginBrandingId(const Aws::String& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = value; }
    inline void SetManagedLoginBrandingId(Aws::String&& value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId = std::move(value); }
    inline void SetManagedLoginBrandingId(const char* value) { m_managedLoginBrandingIdHasBeenSet = true; m_managedLoginBrandingId.assign(value); }
    inline ManagedLoginBrandingType& WithManagedLoginBrandingId(const Aws::String& value) { SetManagedLoginBrandingId(value); return *this;}
    inline ManagedLoginBrandingType& WithManagedLoginBrandingId(Aws::String&& value) { SetManagedLoginBrandingId(std::move(value)); return *this;}
    inline ManagedLoginBrandingType& WithManagedLoginBrandingId(const char* value) { SetManagedLoginBrandingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user pool where the branding style is assigned.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline ManagedLoginBrandingType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline ManagedLoginBrandingType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline ManagedLoginBrandingType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
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
    inline ManagedLoginBrandingType& WithUseCognitoProvidedValues(bool value) { SetUseCognitoProvidedValues(value); return *this;}
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
    inline ManagedLoginBrandingType& WithSettings(const Aws::Utils::Document& value) { SetSettings(value); return *this;}
    inline ManagedLoginBrandingType& WithSettings(Aws::Utils::Document&& value) { SetSettings(std::move(value)); return *this;}
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
    inline ManagedLoginBrandingType& WithAssets(const Aws::Vector<AssetType>& value) { SetAssets(value); return *this;}
    inline ManagedLoginBrandingType& WithAssets(Aws::Vector<AssetType>&& value) { SetAssets(std::move(value)); return *this;}
    inline ManagedLoginBrandingType& AddAssets(const AssetType& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }
    inline ManagedLoginBrandingType& AddAssets(AssetType&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was created. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ManagedLoginBrandingType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ManagedLoginBrandingType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the item was modified. Amazon Cognito returns this
     * timestamp in UNIX epoch time format. Your SDK might render the output in a
     * human-readable format like ISO 8601 or a Java <code>Date</code> object.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ManagedLoginBrandingType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}
    inline ManagedLoginBrandingType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedLoginBrandingId;
    bool m_managedLoginBrandingIdHasBeenSet = false;

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    bool m_useCognitoProvidedValues;
    bool m_useCognitoProvidedValuesHasBeenSet = false;

    Aws::Utils::Document m_settings;
    bool m_settingsHasBeenSet = false;

    Aws::Vector<AssetType> m_assets;
    bool m_assetsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
