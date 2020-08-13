/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cognito-idp/model/TokenValidityUnitsType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AnalyticsConfigurationType.h>
#include <aws/cognito-idp/model/PreventUserExistenceErrorTypes.h>
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/cognito-idp/model/OAuthFlowType.h>
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
   * <p>Contains information about a user pool client.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolClientType">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UserPoolClientType
  {
  public:
    UserPoolClientType();
    UserPoolClientType(Aws::Utils::Json::JsonView jsonValue);
    UserPoolClientType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline UserPoolClientType& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline UserPoolClientType& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool client.</p>
     */
    inline UserPoolClientType& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The client name from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientName(const char* value) { SetClientName(value); return *this;}


    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientType& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientType& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UserPoolClientType& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecretHasBeenSet = true; m_clientSecret = value; }

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::move(value); }

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecretHasBeenSet = true; m_clientSecret.assign(value); }

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>The client secret from the user pool request of the client type.</p>
     */
    inline UserPoolClientType& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline UserPoolClientType& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The date the user pool client was last modified.</p>
     */
    inline UserPoolClientType& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}


    /**
     * <p>The date the user pool client was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date the user pool client was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date the user pool client was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date the user pool client was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date the user pool client was created.</p>
     */
    inline UserPoolClientType& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date the user pool client was created.</p>
     */
    inline UserPoolClientType& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The time limit, in days, after which the refresh token is no longer valid and
     * cannot be used.</p>
     */
    inline int GetRefreshTokenValidity() const{ return m_refreshTokenValidity; }

    /**
     * <p>The time limit, in days, after which the refresh token is no longer valid and
     * cannot be used.</p>
     */
    inline bool RefreshTokenValidityHasBeenSet() const { return m_refreshTokenValidityHasBeenSet; }

    /**
     * <p>The time limit, in days, after which the refresh token is no longer valid and
     * cannot be used.</p>
     */
    inline void SetRefreshTokenValidity(int value) { m_refreshTokenValidityHasBeenSet = true; m_refreshTokenValidity = value; }

    /**
     * <p>The time limit, in days, after which the refresh token is no longer valid and
     * cannot be used.</p>
     */
    inline UserPoolClientType& WithRefreshTokenValidity(int value) { SetRefreshTokenValidity(value); return *this;}


    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the access token is no longer valid and cannot be used.</p>
     */
    inline int GetAccessTokenValidity() const{ return m_accessTokenValidity; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the access token is no longer valid and cannot be used.</p>
     */
    inline bool AccessTokenValidityHasBeenSet() const { return m_accessTokenValidityHasBeenSet; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the access token is no longer valid and cannot be used.</p>
     */
    inline void SetAccessTokenValidity(int value) { m_accessTokenValidityHasBeenSet = true; m_accessTokenValidity = value; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the access token is no longer valid and cannot be used.</p>
     */
    inline UserPoolClientType& WithAccessTokenValidity(int value) { SetAccessTokenValidity(value); return *this;}


    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the refresh token is no longer valid and cannot be used.</p>
     */
    inline int GetIdTokenValidity() const{ return m_idTokenValidity; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the refresh token is no longer valid and cannot be used.</p>
     */
    inline bool IdTokenValidityHasBeenSet() const { return m_idTokenValidityHasBeenSet; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the refresh token is no longer valid and cannot be used.</p>
     */
    inline void SetIdTokenValidity(int value) { m_idTokenValidityHasBeenSet = true; m_idTokenValidity = value; }

    /**
     * <p>The time limit, specified by tokenValidityUnits, defaulting to hours, after
     * which the refresh token is no longer valid and cannot be used.</p>
     */
    inline UserPoolClientType& WithIdTokenValidity(int value) { SetIdTokenValidity(value); return *this;}


    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline const TokenValidityUnitsType& GetTokenValidityUnits() const{ return m_tokenValidityUnits; }

    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline bool TokenValidityUnitsHasBeenSet() const { return m_tokenValidityUnitsHasBeenSet; }

    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline void SetTokenValidityUnits(const TokenValidityUnitsType& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = value; }

    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline void SetTokenValidityUnits(TokenValidityUnitsType&& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = std::move(value); }

    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline UserPoolClientType& WithTokenValidityUnits(const TokenValidityUnitsType& value) { SetTokenValidityUnits(value); return *this;}

    /**
     * <p>The time units used to specify the token validity times of their respective
     * token.</p>
     */
    inline UserPoolClientType& WithTokenValidityUnits(TokenValidityUnitsType&& value) { SetTokenValidityUnits(std::move(value)); return *this;}


    /**
     * <p>The Read-only attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAttributes() const{ return m_readAttributes; }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline bool ReadAttributesHasBeenSet() const { return m_readAttributesHasBeenSet; }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline void SetReadAttributes(const Aws::Vector<Aws::String>& value) { m_readAttributesHasBeenSet = true; m_readAttributes = value; }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline void SetReadAttributes(Aws::Vector<Aws::String>&& value) { m_readAttributesHasBeenSet = true; m_readAttributes = std::move(value); }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline UserPoolClientType& WithReadAttributes(const Aws::Vector<Aws::String>& value) { SetReadAttributes(value); return *this;}

    /**
     * <p>The Read-only attributes.</p>
     */
    inline UserPoolClientType& WithReadAttributes(Aws::Vector<Aws::String>&& value) { SetReadAttributes(std::move(value)); return *this;}

    /**
     * <p>The Read-only attributes.</p>
     */
    inline UserPoolClientType& AddReadAttributes(const Aws::String& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline UserPoolClientType& AddReadAttributes(Aws::String&& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The Read-only attributes.</p>
     */
    inline UserPoolClientType& AddReadAttributes(const char* value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }


    /**
     * <p>The writeable attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAttributes() const{ return m_writeAttributes; }

    /**
     * <p>The writeable attributes.</p>
     */
    inline bool WriteAttributesHasBeenSet() const { return m_writeAttributesHasBeenSet; }

    /**
     * <p>The writeable attributes.</p>
     */
    inline void SetWriteAttributes(const Aws::Vector<Aws::String>& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = value; }

    /**
     * <p>The writeable attributes.</p>
     */
    inline void SetWriteAttributes(Aws::Vector<Aws::String>&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = std::move(value); }

    /**
     * <p>The writeable attributes.</p>
     */
    inline UserPoolClientType& WithWriteAttributes(const Aws::Vector<Aws::String>& value) { SetWriteAttributes(value); return *this;}

    /**
     * <p>The writeable attributes.</p>
     */
    inline UserPoolClientType& WithWriteAttributes(Aws::Vector<Aws::String>&& value) { SetWriteAttributes(std::move(value)); return *this;}

    /**
     * <p>The writeable attributes.</p>
     */
    inline UserPoolClientType& AddWriteAttributes(const Aws::String& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }

    /**
     * <p>The writeable attributes.</p>
     */
    inline UserPoolClientType& AddWriteAttributes(Aws::String&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The writeable attributes.</p>
     */
    inline UserPoolClientType& AddWriteAttributes(const char* value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }


    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline const Aws::Vector<ExplicitAuthFlowsType>& GetExplicitAuthFlows() const{ return m_explicitAuthFlows; }

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline bool ExplicitAuthFlowsHasBeenSet() const { return m_explicitAuthFlowsHasBeenSet; }

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline void SetExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = value; }

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline void SetExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = std::move(value); }

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline UserPoolClientType& WithExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { SetExplicitAuthFlows(value); return *this;}

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline UserPoolClientType& WithExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { SetExplicitAuthFlows(std::move(value)); return *this;}

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline UserPoolClientType& AddExplicitAuthFlows(const ExplicitAuthFlowsType& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(value); return *this; }

    /**
     * <p>The authentication flows that are supported by the user pool clients. Flow
     * names without the <code>ALLOW_</code> prefix are deprecated in favor of new
     * names with the <code>ALLOW_</code> prefix. Note that values with
     * <code>ALLOW_</code> prefix cannot be used along with values without
     * <code>ALLOW_</code> prefix.</p> <p>Valid values include:</p> <ul> <li> <p>
     * <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user password
     * authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting replaces
     * the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication flow,
     * Cognito receives the password in the request instead of using the SRP (Secure
     * Remote Password protocol) protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda trigger based authentication.</p>
     * </li> <li> <p> <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Cognito receives the password in the request
     * instead of using the SRP protocol to verify passwords.</p> </li> <li> <p>
     * <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul>
     */
    inline UserPoolClientType& AddExplicitAuthFlows(ExplicitAuthFlowsType&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIdentityProviders() const{ return m_supportedIdentityProviders; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline bool SupportedIdentityProvidersHasBeenSet() const { return m_supportedIdentityProvidersHasBeenSet; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline void SetSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = value; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline void SetSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = std::move(value); }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UserPoolClientType& WithSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { SetSupportedIdentityProviders(value); return *this;}

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UserPoolClientType& WithSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { SetSupportedIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UserPoolClientType& AddSupportedIdentityProviders(const Aws::String& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UserPoolClientType& AddSupportedIdentityProviders(Aws::String&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UserPoolClientType& AddSupportedIdentityProviders(const char* value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }


    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallbackURLs() const{ return m_callbackURLs; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline bool CallbackURLsHasBeenSet() const { return m_callbackURLsHasBeenSet; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetCallbackURLs(const Aws::Vector<Aws::String>& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = value; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetCallbackURLs(Aws::Vector<Aws::String>&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = std::move(value); }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& WithCallbackURLs(const Aws::Vector<Aws::String>& value) { SetCallbackURLs(value); return *this;}

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& WithCallbackURLs(Aws::Vector<Aws::String>&& value) { SetCallbackURLs(std::move(value)); return *this;}

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& AddCallbackURLs(const Aws::String& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& AddCallbackURLs(Aws::String&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the identity providers.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& AddCallbackURLs(const char* value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }


    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogoutURLs() const{ return m_logoutURLs; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline bool LogoutURLsHasBeenSet() const { return m_logoutURLsHasBeenSet; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline void SetLogoutURLs(const Aws::Vector<Aws::String>& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = value; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline void SetLogoutURLs(Aws::Vector<Aws::String>&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = std::move(value); }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UserPoolClientType& WithLogoutURLs(const Aws::Vector<Aws::String>& value) { SetLogoutURLs(value); return *this;}

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UserPoolClientType& WithLogoutURLs(Aws::Vector<Aws::String>&& value) { SetLogoutURLs(std::move(value)); return *this;}

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UserPoolClientType& AddLogoutURLs(const Aws::String& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UserPoolClientType& AddLogoutURLs(Aws::String&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UserPoolClientType& AddLogoutURLs(const char* value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }


    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline const Aws::String& GetDefaultRedirectURI() const{ return m_defaultRedirectURI; }

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline bool DefaultRedirectURIHasBeenSet() const { return m_defaultRedirectURIHasBeenSet; }

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetDefaultRedirectURI(const Aws::String& value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI = value; }

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetDefaultRedirectURI(Aws::String&& value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI = std::move(value); }

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetDefaultRedirectURI(const char* value) { m_defaultRedirectURIHasBeenSet = true; m_defaultRedirectURI.assign(value); }

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& WithDefaultRedirectURI(const Aws::String& value) { SetDefaultRedirectURI(value); return *this;}

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& WithDefaultRedirectURI(Aws::String&& value) { SetDefaultRedirectURI(std::move(value)); return *this;}

    /**
     * <p>The default redirect URI. Must be in the <code>CallbackURLs</code> list.</p>
     * <p>A redirect URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li>
     * <p>Be registered with the authorization server.</p> </li> <li> <p>Not include a
     * fragment component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline UserPoolClientType& WithDefaultRedirectURI(const char* value) { SetDefaultRedirectURI(value); return *this;}


    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline const Aws::Vector<OAuthFlowType>& GetAllowedOAuthFlows() const{ return m_allowedOAuthFlows; }

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline bool AllowedOAuthFlowsHasBeenSet() const { return m_allowedOAuthFlowsHasBeenSet; }

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline void SetAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = value; }

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline void SetAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = std::move(value); }

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline UserPoolClientType& WithAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { SetAllowedOAuthFlows(value); return *this;}

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline UserPoolClientType& WithAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { SetAllowedOAuthFlows(std::move(value)); return *this;}

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline UserPoolClientType& AddAllowedOAuthFlows(const OAuthFlowType& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(value); return *this; }

    /**
     * <p>The allowed OAuth flows.</p> <p>Set to <code>code</code> to initiate a code
     * grant flow, which provides an authorization code as the response. This code can
     * be exchanged for access tokens with the token endpoint.</p> <p>Set to
     * <code>implicit</code> to specify that the client should get the access token
     * (and, optionally, ID token, based on scopes) directly.</p> <p>Set to
     * <code>client_credentials</code> to specify that the client should get the access
     * token (and, optionally, ID token, based on scopes) from the token endpoint using
     * a combination of client and client_secret.</p>
     */
    inline UserPoolClientType& AddAllowedOAuthFlows(OAuthFlowType&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(std::move(value)); return *this; }


    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOAuthScopes() const{ return m_allowedOAuthScopes; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline bool AllowedOAuthScopesHasBeenSet() const { return m_allowedOAuthScopesHasBeenSet; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline void SetAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = value; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline void SetAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = std::move(value); }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UserPoolClientType& WithAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { SetAllowedOAuthScopes(value); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UserPoolClientType& WithAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { SetAllowedOAuthScopes(std::move(value)); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UserPoolClientType& AddAllowedOAuthScopes(const Aws::String& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UserPoolClientType& AddAllowedOAuthScopes(Aws::String&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UserPoolClientType& AddAllowedOAuthScopes(const char* value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }


    /**
     * <p>Set to true if the client is allowed to follow the OAuth protocol when
     * interacting with Cognito user pools.</p>
     */
    inline bool GetAllowedOAuthFlowsUserPoolClient() const{ return m_allowedOAuthFlowsUserPoolClient; }

    /**
     * <p>Set to true if the client is allowed to follow the OAuth protocol when
     * interacting with Cognito user pools.</p>
     */
    inline bool AllowedOAuthFlowsUserPoolClientHasBeenSet() const { return m_allowedOAuthFlowsUserPoolClientHasBeenSet; }

    /**
     * <p>Set to true if the client is allowed to follow the OAuth protocol when
     * interacting with Cognito user pools.</p>
     */
    inline void SetAllowedOAuthFlowsUserPoolClient(bool value) { m_allowedOAuthFlowsUserPoolClientHasBeenSet = true; m_allowedOAuthFlowsUserPoolClient = value; }

    /**
     * <p>Set to true if the client is allowed to follow the OAuth protocol when
     * interacting with Cognito user pools.</p>
     */
    inline UserPoolClientType& WithAllowedOAuthFlowsUserPoolClient(bool value) { SetAllowedOAuthFlowsUserPoolClient(value); return *this;}


    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline const AnalyticsConfigurationType& GetAnalyticsConfiguration() const{ return m_analyticsConfiguration; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline void SetAnalyticsConfiguration(const AnalyticsConfigurationType& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = value; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline void SetAnalyticsConfiguration(AnalyticsConfigurationType&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::move(value); }

    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline UserPoolClientType& WithAnalyticsConfiguration(const AnalyticsConfigurationType& value) { SetAnalyticsConfiguration(value); return *this;}

    /**
     * <p>The Amazon Pinpoint analytics configuration for the user pool client.</p>
     *  <p>Cognito User Pools only supports sending events to Amazon Pinpoint
     * projects in the US East (N. Virginia) us-east-1 Region, regardless of the region
     * in which the user pool resides.</p> 
     */
    inline UserPoolClientType& WithAnalyticsConfiguration(AnalyticsConfigurationType&& value) { SetAnalyticsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline const PreventUserExistenceErrorTypes& GetPreventUserExistenceErrors() const{ return m_preventUserExistenceErrors; }

    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline bool PreventUserExistenceErrorsHasBeenSet() const { return m_preventUserExistenceErrorsHasBeenSet; }

    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline void SetPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = value; }

    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline void SetPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = std::move(value); }

    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline UserPoolClientType& WithPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { SetPreventUserExistenceErrors(value); return *this;}

    /**
     * <p>Use this setting to choose which errors and responses are returned by Cognito
     * APIs during authentication, account confirmation, and password recovery when the
     * user does not exist in the user pool. When set to <code>ENABLED</code> and the
     * user does not exist, authentication returns an error indicating either the
     * username or password was incorrect, and account confirmation and password
     * recovery return a response indicating a code was sent to a simulated
     * destination. When set to <code>LEGACY</code>, those APIs will return a
     * <code>UserNotFoundException</code> exception if the user does not exist in the
     * user pool.</p> <p>Valid values include:</p> <ul> <li> <p> <code>ENABLED</code> -
     * This prevents user existence-related errors.</p> </li> <li> <p>
     * <code>LEGACY</code> - This represents the old behavior of Cognito where user
     * existence related errors are not prevented.</p> </li> </ul>  <p>After
     * February 15th 2020, the value of <code>PreventUserExistenceErrors</code> will
     * default to <code>ENABLED</code> for newly created user pool clients if no value
     * is provided.</p> 
     */
    inline UserPoolClientType& WithPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { SetPreventUserExistenceErrors(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;

    int m_refreshTokenValidity;
    bool m_refreshTokenValidityHasBeenSet;

    int m_accessTokenValidity;
    bool m_accessTokenValidityHasBeenSet;

    int m_idTokenValidity;
    bool m_idTokenValidityHasBeenSet;

    TokenValidityUnitsType m_tokenValidityUnits;
    bool m_tokenValidityUnitsHasBeenSet;

    Aws::Vector<Aws::String> m_readAttributes;
    bool m_readAttributesHasBeenSet;

    Aws::Vector<Aws::String> m_writeAttributes;
    bool m_writeAttributesHasBeenSet;

    Aws::Vector<ExplicitAuthFlowsType> m_explicitAuthFlows;
    bool m_explicitAuthFlowsHasBeenSet;

    Aws::Vector<Aws::String> m_supportedIdentityProviders;
    bool m_supportedIdentityProvidersHasBeenSet;

    Aws::Vector<Aws::String> m_callbackURLs;
    bool m_callbackURLsHasBeenSet;

    Aws::Vector<Aws::String> m_logoutURLs;
    bool m_logoutURLsHasBeenSet;

    Aws::String m_defaultRedirectURI;
    bool m_defaultRedirectURIHasBeenSet;

    Aws::Vector<OAuthFlowType> m_allowedOAuthFlows;
    bool m_allowedOAuthFlowsHasBeenSet;

    Aws::Vector<Aws::String> m_allowedOAuthScopes;
    bool m_allowedOAuthScopesHasBeenSet;

    bool m_allowedOAuthFlowsUserPoolClient;
    bool m_allowedOAuthFlowsUserPoolClientHasBeenSet;

    AnalyticsConfigurationType m_analyticsConfiguration;
    bool m_analyticsConfigurationHasBeenSet;

    PreventUserExistenceErrorTypes m_preventUserExistenceErrors;
    bool m_preventUserExistenceErrorsHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
