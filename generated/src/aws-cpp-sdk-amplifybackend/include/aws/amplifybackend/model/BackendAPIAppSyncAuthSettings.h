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
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings();
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API BackendAPIAppSyncAuthSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYBACKEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline const Aws::String& GetCognitoUserPoolId() const{ return m_cognitoUserPoolId; }

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline bool CognitoUserPoolIdHasBeenSet() const { return m_cognitoUserPoolIdHasBeenSet; }

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline void SetCognitoUserPoolId(const Aws::String& value) { m_cognitoUserPoolIdHasBeenSet = true; m_cognitoUserPoolId = value; }

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline void SetCognitoUserPoolId(Aws::String&& value) { m_cognitoUserPoolIdHasBeenSet = true; m_cognitoUserPoolId = std::move(value); }

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline void SetCognitoUserPoolId(const char* value) { m_cognitoUserPoolIdHasBeenSet = true; m_cognitoUserPoolId.assign(value); }

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithCognitoUserPoolId(const Aws::String& value) { SetCognitoUserPoolId(value); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithCognitoUserPoolId(Aws::String&& value) { SetCognitoUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Cognito user pool ID, if Amazon Cognito was used as an
     * authentication setting to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithCognitoUserPoolId(const char* value) { SetCognitoUserPoolId(value); return *this;}


    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The API key description for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The API key expiration time for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline double GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The API key expiration time for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The API key expiration time for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline void SetExpirationTime(double value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The API key expiration time for API_KEY, if it was used as an authentication
     * mechanism to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithExpirationTime(double value) { SetExpirationTime(value); return *this;}


    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline const Aws::String& GetOpenIDAuthTTL() const{ return m_openIDAuthTTL; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline bool OpenIDAuthTTLHasBeenSet() const { return m_openIDAuthTTLHasBeenSet; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDAuthTTL(const Aws::String& value) { m_openIDAuthTTLHasBeenSet = true; m_openIDAuthTTL = value; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDAuthTTL(Aws::String&& value) { m_openIDAuthTTLHasBeenSet = true; m_openIDAuthTTL = std::move(value); }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDAuthTTL(const char* value) { m_openIDAuthTTLHasBeenSet = true; m_openIDAuthTTL.assign(value); }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDAuthTTL(const Aws::String& value) { SetOpenIDAuthTTL(value); return *this;}

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDAuthTTL(Aws::String&& value) { SetOpenIDAuthTTL(std::move(value)); return *this;}

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDAuthTTL(const char* value) { SetOpenIDAuthTTL(value); return *this;}


    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline const Aws::String& GetOpenIDClientId() const{ return m_openIDClientId; }

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline bool OpenIDClientIdHasBeenSet() const { return m_openIDClientIdHasBeenSet; }

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDClientId(const Aws::String& value) { m_openIDClientIdHasBeenSet = true; m_openIDClientId = value; }

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDClientId(Aws::String&& value) { m_openIDClientIdHasBeenSet = true; m_openIDClientId = std::move(value); }

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDClientId(const char* value) { m_openIDClientIdHasBeenSet = true; m_openIDClientId.assign(value); }

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDClientId(const Aws::String& value) { SetOpenIDClientId(value); return *this;}

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDClientId(Aws::String&& value) { SetOpenIDClientId(std::move(value)); return *this;}

    /**
     * <p>The clientID for openID, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDClientId(const char* value) { SetOpenIDClientId(value); return *this;}


    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline const Aws::String& GetOpenIDIatTTL() const{ return m_openIDIatTTL; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline bool OpenIDIatTTLHasBeenSet() const { return m_openIDIatTTLHasBeenSet; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDIatTTL(const Aws::String& value) { m_openIDIatTTLHasBeenSet = true; m_openIDIatTTL = value; }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDIatTTL(Aws::String&& value) { m_openIDIatTTLHasBeenSet = true; m_openIDIatTTL = std::move(value); }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline void SetOpenIDIatTTL(const char* value) { m_openIDIatTTLHasBeenSet = true; m_openIDIatTTL.assign(value); }

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIatTTL(const Aws::String& value) { SetOpenIDIatTTL(value); return *this;}

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIatTTL(Aws::String&& value) { SetOpenIDIatTTL(std::move(value)); return *this;}

    /**
     * <p>The expiry time for the OpenID authentication mechanism.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIatTTL(const char* value) { SetOpenIDIatTTL(value); return *this;}


    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline const Aws::String& GetOpenIDIssueURL() const{ return m_openIDIssueURL; }

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline bool OpenIDIssueURLHasBeenSet() const { return m_openIDIssueURLHasBeenSet; }

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDIssueURL(const Aws::String& value) { m_openIDIssueURLHasBeenSet = true; m_openIDIssueURL = value; }

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDIssueURL(Aws::String&& value) { m_openIDIssueURLHasBeenSet = true; m_openIDIssueURL = std::move(value); }

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline void SetOpenIDIssueURL(const char* value) { m_openIDIssueURLHasBeenSet = true; m_openIDIssueURL.assign(value); }

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIssueURL(const Aws::String& value) { SetOpenIDIssueURL(value); return *this;}

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIssueURL(Aws::String&& value) { SetOpenIDIssueURL(std::move(value)); return *this;}

    /**
     * <p>The openID issuer URL, if openID was used as an authentication setting to
     * access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDIssueURL(const char* value) { SetOpenIDIssueURL(value); return *this;}


    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline const Aws::String& GetOpenIDProviderName() const{ return m_openIDProviderName; }

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline bool OpenIDProviderNameHasBeenSet() const { return m_openIDProviderNameHasBeenSet; }

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline void SetOpenIDProviderName(const Aws::String& value) { m_openIDProviderNameHasBeenSet = true; m_openIDProviderName = value; }

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline void SetOpenIDProviderName(Aws::String&& value) { m_openIDProviderNameHasBeenSet = true; m_openIDProviderName = std::move(value); }

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline void SetOpenIDProviderName(const char* value) { m_openIDProviderNameHasBeenSet = true; m_openIDProviderName.assign(value); }

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDProviderName(const Aws::String& value) { SetOpenIDProviderName(value); return *this;}

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDProviderName(Aws::String&& value) { SetOpenIDProviderName(std::move(value)); return *this;}

    /**
     * <p>The OpenID provider name, if OpenID was used as an authentication mechanism
     * to access your data models.</p>
     */
    inline BackendAPIAppSyncAuthSettings& WithOpenIDProviderName(const char* value) { SetOpenIDProviderName(value); return *this;}

  private:

    Aws::String m_cognitoUserPoolId;
    bool m_cognitoUserPoolIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_expirationTime;
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
