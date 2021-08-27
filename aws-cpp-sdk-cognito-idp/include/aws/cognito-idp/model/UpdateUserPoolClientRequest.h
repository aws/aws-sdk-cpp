/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/TokenValidityUnitsType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cognito-idp/model/AnalyticsConfigurationType.h>
#include <aws/cognito-idp/model/PreventUserExistenceErrorTypes.h>
#include <aws/cognito-idp/model/ExplicitAuthFlowsType.h>
#include <aws/cognito-idp/model/OAuthFlowType.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to update the user pool client.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UpdateUserPoolClientRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API UpdateUserPoolClientRequest : public CognitoIdentityProviderRequest
  {
  public:
    UpdateUserPoolClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUserPoolClient"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline UpdateUserPoolClientRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline UpdateUserPoolClientRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to update the user pool
     * client.</p>
     */
    inline UpdateUserPoolClientRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


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
    inline UpdateUserPoolClientRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The ID of the client associated with the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline UpdateUserPoolClientRequest& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline UpdateUserPoolClientRequest& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The client name from the update user pool client request.</p>
     */
    inline UpdateUserPoolClientRequest& WithClientName(const char* value) { SetClientName(value); return *this;}


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
    inline UpdateUserPoolClientRequest& WithRefreshTokenValidity(int value) { SetRefreshTokenValidity(value); return *this;}


    /**
     * <p>The time limit, after which the access token is no longer valid and cannot be
     * used.</p>
     */
    inline int GetAccessTokenValidity() const{ return m_accessTokenValidity; }

    /**
     * <p>The time limit, after which the access token is no longer valid and cannot be
     * used.</p>
     */
    inline bool AccessTokenValidityHasBeenSet() const { return m_accessTokenValidityHasBeenSet; }

    /**
     * <p>The time limit, after which the access token is no longer valid and cannot be
     * used.</p>
     */
    inline void SetAccessTokenValidity(int value) { m_accessTokenValidityHasBeenSet = true; m_accessTokenValidity = value; }

    /**
     * <p>The time limit, after which the access token is no longer valid and cannot be
     * used.</p>
     */
    inline UpdateUserPoolClientRequest& WithAccessTokenValidity(int value) { SetAccessTokenValidity(value); return *this;}


    /**
     * <p>The time limit, after which the ID token is no longer valid and cannot be
     * used.</p>
     */
    inline int GetIdTokenValidity() const{ return m_idTokenValidity; }

    /**
     * <p>The time limit, after which the ID token is no longer valid and cannot be
     * used.</p>
     */
    inline bool IdTokenValidityHasBeenSet() const { return m_idTokenValidityHasBeenSet; }

    /**
     * <p>The time limit, after which the ID token is no longer valid and cannot be
     * used.</p>
     */
    inline void SetIdTokenValidity(int value) { m_idTokenValidityHasBeenSet = true; m_idTokenValidity = value; }

    /**
     * <p>The time limit, after which the ID token is no longer valid and cannot be
     * used.</p>
     */
    inline UpdateUserPoolClientRequest& WithIdTokenValidity(int value) { SetIdTokenValidity(value); return *this;}


    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline const TokenValidityUnitsType& GetTokenValidityUnits() const{ return m_tokenValidityUnits; }

    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline bool TokenValidityUnitsHasBeenSet() const { return m_tokenValidityUnitsHasBeenSet; }

    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline void SetTokenValidityUnits(const TokenValidityUnitsType& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = value; }

    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline void SetTokenValidityUnits(TokenValidityUnitsType&& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = std::move(value); }

    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline UpdateUserPoolClientRequest& WithTokenValidityUnits(const TokenValidityUnitsType& value) { SetTokenValidityUnits(value); return *this;}

    /**
     * <p>The units in which the validity times are represented in. Default for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline UpdateUserPoolClientRequest& WithTokenValidityUnits(TokenValidityUnitsType&& value) { SetTokenValidityUnits(std::move(value)); return *this;}


    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAttributes() const{ return m_readAttributes; }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline bool ReadAttributesHasBeenSet() const { return m_readAttributesHasBeenSet; }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline void SetReadAttributes(const Aws::Vector<Aws::String>& value) { m_readAttributesHasBeenSet = true; m_readAttributes = value; }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline void SetReadAttributes(Aws::Vector<Aws::String>&& value) { m_readAttributesHasBeenSet = true; m_readAttributes = std::move(value); }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithReadAttributes(const Aws::Vector<Aws::String>& value) { SetReadAttributes(value); return *this;}

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithReadAttributes(Aws::Vector<Aws::String>&& value) { SetReadAttributes(std::move(value)); return *this;}

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddReadAttributes(const Aws::String& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddReadAttributes(Aws::String&& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The read-only attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddReadAttributes(const char* value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }


    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAttributes() const{ return m_writeAttributes; }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline bool WriteAttributesHasBeenSet() const { return m_writeAttributesHasBeenSet; }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline void SetWriteAttributes(const Aws::Vector<Aws::String>& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = value; }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline void SetWriteAttributes(Aws::Vector<Aws::String>&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = std::move(value); }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithWriteAttributes(const Aws::Vector<Aws::String>& value) { SetWriteAttributes(value); return *this;}

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& WithWriteAttributes(Aws::Vector<Aws::String>&& value) { SetWriteAttributes(std::move(value)); return *this;}

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddWriteAttributes(const Aws::String& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddWriteAttributes(Aws::String&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The writeable attributes of the user pool.</p>
     */
    inline UpdateUserPoolClientRequest& AddWriteAttributes(const char* value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }


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
    inline UpdateUserPoolClientRequest& WithExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { SetExplicitAuthFlows(value); return *this;}

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
    inline UpdateUserPoolClientRequest& WithExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { SetExplicitAuthFlows(std::move(value)); return *this;}

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
    inline UpdateUserPoolClientRequest& AddExplicitAuthFlows(const ExplicitAuthFlowsType& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(value); return *this; }

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
    inline UpdateUserPoolClientRequest& AddExplicitAuthFlows(ExplicitAuthFlowsType&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(std::move(value)); return *this; }


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
    inline UpdateUserPoolClientRequest& WithSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { SetSupportedIdentityProviders(value); return *this;}

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UpdateUserPoolClientRequest& WithSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { SetSupportedIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UpdateUserPoolClientRequest& AddSupportedIdentityProviders(const Aws::String& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UpdateUserPoolClientRequest& AddSupportedIdentityProviders(Aws::String&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of provider names for the identity providers that are supported on
     * this client.</p>
     */
    inline UpdateUserPoolClientRequest& AddSupportedIdentityProviders(const char* value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }


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
    inline UpdateUserPoolClientRequest& WithCallbackURLs(const Aws::Vector<Aws::String>& value) { SetCallbackURLs(value); return *this;}

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
    inline UpdateUserPoolClientRequest& WithCallbackURLs(Aws::Vector<Aws::String>&& value) { SetCallbackURLs(std::move(value)); return *this;}

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
    inline UpdateUserPoolClientRequest& AddCallbackURLs(const Aws::String& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }

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
    inline UpdateUserPoolClientRequest& AddCallbackURLs(Aws::String&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(std::move(value)); return *this; }

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
    inline UpdateUserPoolClientRequest& AddCallbackURLs(const char* value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }


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
    inline UpdateUserPoolClientRequest& WithLogoutURLs(const Aws::Vector<Aws::String>& value) { SetLogoutURLs(value); return *this;}

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UpdateUserPoolClientRequest& WithLogoutURLs(Aws::Vector<Aws::String>&& value) { SetLogoutURLs(std::move(value)); return *this;}

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UpdateUserPoolClientRequest& AddLogoutURLs(const Aws::String& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UpdateUserPoolClientRequest& AddLogoutURLs(Aws::String&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed logout URLs for the identity providers.</p>
     */
    inline UpdateUserPoolClientRequest& AddLogoutURLs(const char* value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }


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
    inline UpdateUserPoolClientRequest& WithDefaultRedirectURI(const Aws::String& value) { SetDefaultRedirectURI(value); return *this;}

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
    inline UpdateUserPoolClientRequest& WithDefaultRedirectURI(Aws::String&& value) { SetDefaultRedirectURI(std::move(value)); return *this;}

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
    inline UpdateUserPoolClientRequest& WithDefaultRedirectURI(const char* value) { SetDefaultRedirectURI(value); return *this;}


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
    inline UpdateUserPoolClientRequest& WithAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { SetAllowedOAuthFlows(value); return *this;}

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
    inline UpdateUserPoolClientRequest& WithAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { SetAllowedOAuthFlows(std::move(value)); return *this;}

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
    inline UpdateUserPoolClientRequest& AddAllowedOAuthFlows(const OAuthFlowType& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(value); return *this; }

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
    inline UpdateUserPoolClientRequest& AddAllowedOAuthFlows(OAuthFlowType&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(std::move(value)); return *this; }


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
    inline UpdateUserPoolClientRequest& WithAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { SetAllowedOAuthScopes(value); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UpdateUserPoolClientRequest& WithAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { SetAllowedOAuthScopes(std::move(value)); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UpdateUserPoolClientRequest& AddAllowedOAuthScopes(const Aws::String& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UpdateUserPoolClientRequest& AddAllowedOAuthScopes(Aws::String&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are:
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by AWS are:
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline UpdateUserPoolClientRequest& AddAllowedOAuthScopes(const char* value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }


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
    inline UpdateUserPoolClientRequest& WithAllowedOAuthFlowsUserPoolClient(bool value) { SetAllowedOAuthFlowsUserPoolClient(value); return *this;}


    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline const AnalyticsConfigurationType& GetAnalyticsConfiguration() const{ return m_analyticsConfiguration; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline void SetAnalyticsConfiguration(const AnalyticsConfigurationType& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = value; }

    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline void SetAnalyticsConfiguration(AnalyticsConfigurationType&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::move(value); }

    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline UpdateUserPoolClientRequest& WithAnalyticsConfiguration(const AnalyticsConfigurationType& value) { SetAnalyticsConfiguration(value); return *this;}

    /**
     * <p>The Amazon Pinpoint analytics configuration for collecting metrics for this
     * user pool.</p>  <p>In regions where Pinpoint is not available, Cognito
     * User Pools only supports sending events to Amazon Pinpoint projects in
     * us-east-1. In regions where Pinpoint is available, Cognito User Pools will
     * support sending events to Amazon Pinpoint projects within that same region. </p>
     * 
     */
    inline UpdateUserPoolClientRequest& WithAnalyticsConfiguration(AnalyticsConfigurationType&& value) { SetAnalyticsConfiguration(std::move(value)); return *this;}


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
    inline UpdateUserPoolClientRequest& WithPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { SetPreventUserExistenceErrors(value); return *this;}

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
    inline UpdateUserPoolClientRequest& WithPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { SetPreventUserExistenceErrors(std::move(value)); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet;

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
