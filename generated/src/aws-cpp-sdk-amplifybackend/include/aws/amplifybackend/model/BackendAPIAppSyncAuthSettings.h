/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifybackend/AmplifyBackend_EXPORTS.h>
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
namespace AmplifyBackend
{
namespace Model
{

  /**
   * <p>The authentication settings for accessing provisioned data models in your
   * Amplify project.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifybackend-2020-08-11/BackendAPIAppSyncAuthSettings">AWS
   * API Reference</a></p>
   */
  class BackendAPIAppSyncAuthSettings
  {
  public:
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings() = default;
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline const Aws::String& GetCognitoUserPoolId() const { return m_cognitoUserPoolId; }
    inline bool CognitoUserPoolIdHasBeenSet() const { return m_cognitoUserPoolIdHasBeenSet; }
    template<typename CognitoUserPoolIdT = Aws::String>
    void SetCognitoUserPoolId(CognitoUserPoolIdT&& value) { m_cognitoUserPoolIdHasBeenSet = true; m_cognitoUserPoolId = std::forward<CognitoUserPoolIdT>(value); }
    template<typename CognitoUserPoolIdT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithCognitoUserPoolId(CognitoUserPoolIdT&& value) { SetCognitoUserPoolId(std::forward<CognitoUserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API key expiration time for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline double GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    inline void SetExpirationTime(double value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }
    inline BackendAPIAppSyncAuthSettings& WithExpirationTime(double value) { SetExpirationTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline const Aws::String& GetOpenIDAuthTTL() const { return m_openIDAuthTTL; }
    inline bool OpenIDAuthTTLHasBeenSet() const { return m_openIDAuthTTLHasBeenSet; }
    template<typename OpenIDAuthTTLT = Aws::String>
    void SetOpenIDAuthTTL(OpenIDAuthTTLT&& value) { m_openIDAuthTTLHasBeenSet = true; m_openIDAuthTTL = std::forward<OpenIDAuthTTLT>(value); }
    template<typename OpenIDAuthTTLT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithOpenIDAuthTTL(OpenIDAuthTTLT&& value) { SetOpenIDAuthTTL(std::forward<OpenIDAuthTTLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline const Aws::String& GetOpenIDClientId() const { return m_openIDClientId; }
    inline bool OpenIDClientIdHasBeenSet() const { return m_openIDClientIdHasBeenSet; }
    template<typename OpenIDClientIdT = Aws::String>
    void SetOpenIDClientId(OpenIDClientIdT&& value) { m_openIDClientIdHasBeenSet = true; m_openIDClientId = std::forward<OpenIDClientIdT>(value); }
    template<typename OpenIDClientIdT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithOpenIDClientId(OpenIDClientIdT&& value) { SetOpenIDClientId(std::forward<OpenIDClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline const Aws::String& GetOpenIDIatTTL() const { return m_openIDIatTTL; }
    inline bool OpenIDIatTTLHasBeenSet() const { return m_openIDIatTTLHasBeenSet; }
    template<typename OpenIDIatTTLT = Aws::String>
    void SetOpenIDIatTTL(OpenIDIatTTLT&& value) { m_openIDIatTTLHasBeenSet = true; m_openIDIatTTL = std::forward<OpenIDIatTTLT>(value); }
    template<typename OpenIDIatTTLT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithOpenIDIatTTL(OpenIDIatTTLT&& value) { SetOpenIDIatTTL(std::forward<OpenIDIatTTLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline const Aws::String& GetOpenIDIssueURL() const { return m_openIDIssueURL; }
    inline bool OpenIDIssueURLHasBeenSet() const { return m_openIDIssueURLHasBeenSet; }
    template<typename OpenIDIssueURLT = Aws::String>
    void SetOpenIDIssueURL(OpenIDIssueURLT&& value) { m_openIDIssueURLHasBeenSet = true; m_openIDIssueURL = std::forward<OpenIDIssueURLT>(value); }
    template<typename OpenIDIssueURLT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithOpenIDIssueURL(OpenIDIssueURLT&& value) { SetOpenIDIssueURL(std::forward<OpenIDIssueURLT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline const Aws::String& GetOpenIDProviderName() const { return m_openIDProviderName; }
    inline bool OpenIDProviderNameHasBeenSet() const { return m_openIDProviderNameHasBeenSet; }
    template<typename OpenIDProviderNameT = Aws::String>
    void SetOpenIDProviderName(OpenIDProviderNameT&& value) { m_openIDProviderNameHasBeenSet = true; m_openIDProviderName = std::forward<OpenIDProviderNameT>(value); }
    template<typename OpenIDProviderNameT = Aws::String>
    BackendAPIAppSyncAuthSettings& WithOpenIDProviderName(OpenIDProviderNameT&& value) { SetOpenIDProviderName(std::forward<OpenIDProviderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cognitoUserPoolId;
    bool m_cognitoUserPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_expirationTime{0.0};
    bool m_expirationTimeHasBeenSet = false;

    Aws::String m_openIDAuthTTL;
    bool m_openIDAuthTTLHasBeenSet = false;

    Aws::String m_openIDClientId;
    bool m_openIDClientIdHasBeenSet = false;

    Aws::String m_openIDIatTTL;
    bool m_openIDIatTTLHasBeenSet = false;

    Aws::String m_openIDIssueURL;
    bool m_openIDIssueURLHasBeenSet = false;

    Aws::String m_openIDProviderName;
    bool m_openIDProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
