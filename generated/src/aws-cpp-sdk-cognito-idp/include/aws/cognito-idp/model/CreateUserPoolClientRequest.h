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
   * <p>Represents the request to create a user pool client.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/CreateUserPoolClientRequest">AWS
   * API Reference</a></p>
   */
  class CreateUserPoolClientRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolClientRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUserPoolClient"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool where you want to create a user pool
     * client.</p>
     */
    inline CreateUserPoolClientRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline const Aws::String& GetClientName() const{ return m_clientName; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline bool ClientNameHasBeenSet() const { return m_clientNameHasBeenSet; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(const Aws::String& value) { m_clientNameHasBeenSet = true; m_clientName = value; }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(Aws::String&& value) { m_clientNameHasBeenSet = true; m_clientName = std::move(value); }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline void SetClientName(const char* value) { m_clientNameHasBeenSet = true; m_clientName.assign(value); }

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(const Aws::String& value) { SetClientName(value); return *this;}

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(Aws::String&& value) { SetClientName(std::move(value)); return *this;}

    /**
     * <p>The client name for the user pool client you would like to create.</p>
     */
    inline CreateUserPoolClientRequest& WithClientName(const char* value) { SetClientName(value); return *this;}


    /**
     * <p>Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline bool GetGenerateSecret() const{ return m_generateSecret; }

    /**
     * <p>Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline bool GenerateSecretHasBeenSet() const { return m_generateSecretHasBeenSet; }

    /**
     * <p>Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline void SetGenerateSecret(bool value) { m_generateSecretHasBeenSet = true; m_generateSecret = value; }

    /**
     * <p>Boolean to specify whether you want to generate a secret for the user pool
     * client being created.</p>
     */
    inline CreateUserPoolClientRequest& WithGenerateSecret(bool value) { SetGenerateSecret(value); return *this;}


    /**
     * <p>The refresh token time limit. After this limit expires, your user can't use
     * their refresh token. To specify the time unit for
     * <code>RefreshTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>RefreshTokenValidity</code> as <code>10</code> and
     * <code>TokenValidityUnits</code> as <code>days</code>, your user can refresh
     * their session and retrieve new access and ID tokens for 10 days.</p> <p>The
     * default time unit for <code>RefreshTokenValidity</code> in an API request is
     * days. You can't set <code>RefreshTokenValidity</code> to 0. If you do, Amazon
     * Cognito overrides the value with the default value of 30 days. <i>Valid
     * range</i> is displayed below in seconds.</p> <p>If you don't specify otherwise
     * in the configuration of your app client, your refresh tokens are valid for 30
     * days.</p>
     */
    inline int GetRefreshTokenValidity() const{ return m_refreshTokenValidity; }

    /**
     * <p>The refresh token time limit. After this limit expires, your user can't use
     * their refresh token. To specify the time unit for
     * <code>RefreshTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>RefreshTokenValidity</code> as <code>10</code> and
     * <code>TokenValidityUnits</code> as <code>days</code>, your user can refresh
     * their session and retrieve new access and ID tokens for 10 days.</p> <p>The
     * default time unit for <code>RefreshTokenValidity</code> in an API request is
     * days. You can't set <code>RefreshTokenValidity</code> to 0. If you do, Amazon
     * Cognito overrides the value with the default value of 30 days. <i>Valid
     * range</i> is displayed below in seconds.</p> <p>If you don't specify otherwise
     * in the configuration of your app client, your refresh tokens are valid for 30
     * days.</p>
     */
    inline bool RefreshTokenValidityHasBeenSet() const { return m_refreshTokenValidityHasBeenSet; }

    /**
     * <p>The refresh token time limit. After this limit expires, your user can't use
     * their refresh token. To specify the time unit for
     * <code>RefreshTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>RefreshTokenValidity</code> as <code>10</code> and
     * <code>TokenValidityUnits</code> as <code>days</code>, your user can refresh
     * their session and retrieve new access and ID tokens for 10 days.</p> <p>The
     * default time unit for <code>RefreshTokenValidity</code> in an API request is
     * days. You can't set <code>RefreshTokenValidity</code> to 0. If you do, Amazon
     * Cognito overrides the value with the default value of 30 days. <i>Valid
     * range</i> is displayed below in seconds.</p> <p>If you don't specify otherwise
     * in the configuration of your app client, your refresh tokens are valid for 30
     * days.</p>
     */
    inline void SetRefreshTokenValidity(int value) { m_refreshTokenValidityHasBeenSet = true; m_refreshTokenValidity = value; }

    /**
     * <p>The refresh token time limit. After this limit expires, your user can't use
     * their refresh token. To specify the time unit for
     * <code>RefreshTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>RefreshTokenValidity</code> as <code>10</code> and
     * <code>TokenValidityUnits</code> as <code>days</code>, your user can refresh
     * their session and retrieve new access and ID tokens for 10 days.</p> <p>The
     * default time unit for <code>RefreshTokenValidity</code> in an API request is
     * days. You can't set <code>RefreshTokenValidity</code> to 0. If you do, Amazon
     * Cognito overrides the value with the default value of 30 days. <i>Valid
     * range</i> is displayed below in seconds.</p> <p>If you don't specify otherwise
     * in the configuration of your app client, your refresh tokens are valid for 30
     * days.</p>
     */
    inline CreateUserPoolClientRequest& WithRefreshTokenValidity(int value) { SetRefreshTokenValidity(value); return *this;}


    /**
     * <p>The access token time limit. After this limit expires, your user can't use
     * their access token. To specify the time unit for
     * <code>AccessTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>AccessTokenValidity</code> to <code>10</code> and
     * <code>TokenValidityUnits</code> to <code>hours</code>, your user can authorize
     * access with their access token for 10 hours.</p> <p>The default time unit for
     * <code>AccessTokenValidity</code> in an API request is hours. <i>Valid range</i>
     * is displayed below in seconds.</p> <p>If you don't specify otherwise in the
     * configuration of your app client, your access tokens are valid for one hour.</p>
     */
    inline int GetAccessTokenValidity() const{ return m_accessTokenValidity; }

    /**
     * <p>The access token time limit. After this limit expires, your user can't use
     * their access token. To specify the time unit for
     * <code>AccessTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>AccessTokenValidity</code> to <code>10</code> and
     * <code>TokenValidityUnits</code> to <code>hours</code>, your user can authorize
     * access with their access token for 10 hours.</p> <p>The default time unit for
     * <code>AccessTokenValidity</code> in an API request is hours. <i>Valid range</i>
     * is displayed below in seconds.</p> <p>If you don't specify otherwise in the
     * configuration of your app client, your access tokens are valid for one hour.</p>
     */
    inline bool AccessTokenValidityHasBeenSet() const { return m_accessTokenValidityHasBeenSet; }

    /**
     * <p>The access token time limit. After this limit expires, your user can't use
     * their access token. To specify the time unit for
     * <code>AccessTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>AccessTokenValidity</code> to <code>10</code> and
     * <code>TokenValidityUnits</code> to <code>hours</code>, your user can authorize
     * access with their access token for 10 hours.</p> <p>The default time unit for
     * <code>AccessTokenValidity</code> in an API request is hours. <i>Valid range</i>
     * is displayed below in seconds.</p> <p>If you don't specify otherwise in the
     * configuration of your app client, your access tokens are valid for one hour.</p>
     */
    inline void SetAccessTokenValidity(int value) { m_accessTokenValidityHasBeenSet = true; m_accessTokenValidity = value; }

    /**
     * <p>The access token time limit. After this limit expires, your user can't use
     * their access token. To specify the time unit for
     * <code>AccessTokenValidity</code> as <code>seconds</code>, <code>minutes</code>,
     * <code>hours</code>, or <code>days</code>, set a <code>TokenValidityUnits</code>
     * value in your API request.</p> <p>For example, when you set
     * <code>AccessTokenValidity</code> to <code>10</code> and
     * <code>TokenValidityUnits</code> to <code>hours</code>, your user can authorize
     * access with their access token for 10 hours.</p> <p>The default time unit for
     * <code>AccessTokenValidity</code> in an API request is hours. <i>Valid range</i>
     * is displayed below in seconds.</p> <p>If you don't specify otherwise in the
     * configuration of your app client, your access tokens are valid for one hour.</p>
     */
    inline CreateUserPoolClientRequest& WithAccessTokenValidity(int value) { SetAccessTokenValidity(value); return *this;}


    /**
     * <p>The ID token time limit. After this limit expires, your user can't use their
     * ID token. To specify the time unit for <code>IdTokenValidity</code> as
     * <code>seconds</code>, <code>minutes</code>, <code>hours</code>, or
     * <code>days</code>, set a <code>TokenValidityUnits</code> value in your API
     * request.</p> <p>For example, when you set <code>IdTokenValidity</code> as
     * <code>10</code> and <code>TokenValidityUnits</code> as <code>hours</code>, your
     * user can authenticate their session with their ID token for 10 hours.</p> <p>The
     * default time unit for <code>IdTokenValidity</code> in an API request is hours.
     * <i>Valid range</i> is displayed below in seconds.</p> <p>If you don't specify
     * otherwise in the configuration of your app client, your ID tokens are valid for
     * one hour.</p>
     */
    inline int GetIdTokenValidity() const{ return m_idTokenValidity; }

    /**
     * <p>The ID token time limit. After this limit expires, your user can't use their
     * ID token. To specify the time unit for <code>IdTokenValidity</code> as
     * <code>seconds</code>, <code>minutes</code>, <code>hours</code>, or
     * <code>days</code>, set a <code>TokenValidityUnits</code> value in your API
     * request.</p> <p>For example, when you set <code>IdTokenValidity</code> as
     * <code>10</code> and <code>TokenValidityUnits</code> as <code>hours</code>, your
     * user can authenticate their session with their ID token for 10 hours.</p> <p>The
     * default time unit for <code>IdTokenValidity</code> in an API request is hours.
     * <i>Valid range</i> is displayed below in seconds.</p> <p>If you don't specify
     * otherwise in the configuration of your app client, your ID tokens are valid for
     * one hour.</p>
     */
    inline bool IdTokenValidityHasBeenSet() const { return m_idTokenValidityHasBeenSet; }

    /**
     * <p>The ID token time limit. After this limit expires, your user can't use their
     * ID token. To specify the time unit for <code>IdTokenValidity</code> as
     * <code>seconds</code>, <code>minutes</code>, <code>hours</code>, or
     * <code>days</code>, set a <code>TokenValidityUnits</code> value in your API
     * request.</p> <p>For example, when you set <code>IdTokenValidity</code> as
     * <code>10</code> and <code>TokenValidityUnits</code> as <code>hours</code>, your
     * user can authenticate their session with their ID token for 10 hours.</p> <p>The
     * default time unit for <code>IdTokenValidity</code> in an API request is hours.
     * <i>Valid range</i> is displayed below in seconds.</p> <p>If you don't specify
     * otherwise in the configuration of your app client, your ID tokens are valid for
     * one hour.</p>
     */
    inline void SetIdTokenValidity(int value) { m_idTokenValidityHasBeenSet = true; m_idTokenValidity = value; }

    /**
     * <p>The ID token time limit. After this limit expires, your user can't use their
     * ID token. To specify the time unit for <code>IdTokenValidity</code> as
     * <code>seconds</code>, <code>minutes</code>, <code>hours</code>, or
     * <code>days</code>, set a <code>TokenValidityUnits</code> value in your API
     * request.</p> <p>For example, when you set <code>IdTokenValidity</code> as
     * <code>10</code> and <code>TokenValidityUnits</code> as <code>hours</code>, your
     * user can authenticate their session with their ID token for 10 hours.</p> <p>The
     * default time unit for <code>IdTokenValidity</code> in an API request is hours.
     * <i>Valid range</i> is displayed below in seconds.</p> <p>If you don't specify
     * otherwise in the configuration of your app client, your ID tokens are valid for
     * one hour.</p>
     */
    inline CreateUserPoolClientRequest& WithIdTokenValidity(int value) { SetIdTokenValidity(value); return *this;}


    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline const TokenValidityUnitsType& GetTokenValidityUnits() const{ return m_tokenValidityUnits; }

    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline bool TokenValidityUnitsHasBeenSet() const { return m_tokenValidityUnitsHasBeenSet; }

    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline void SetTokenValidityUnits(const TokenValidityUnitsType& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = value; }

    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline void SetTokenValidityUnits(TokenValidityUnitsType&& value) { m_tokenValidityUnitsHasBeenSet = true; m_tokenValidityUnits = std::move(value); }

    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline CreateUserPoolClientRequest& WithTokenValidityUnits(const TokenValidityUnitsType& value) { SetTokenValidityUnits(value); return *this;}

    /**
     * <p>The units in which the validity times are represented. The default unit for
     * RefreshToken is days, and default for ID and access tokens are hours.</p>
     */
    inline CreateUserPoolClientRequest& WithTokenValidityUnits(TokenValidityUnitsType&& value) { SetTokenValidityUnits(std::move(value)); return *this;}


    /**
     * <p>The read attributes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReadAttributes() const{ return m_readAttributes; }

    /**
     * <p>The read attributes.</p>
     */
    inline bool ReadAttributesHasBeenSet() const { return m_readAttributesHasBeenSet; }

    /**
     * <p>The read attributes.</p>
     */
    inline void SetReadAttributes(const Aws::Vector<Aws::String>& value) { m_readAttributesHasBeenSet = true; m_readAttributes = value; }

    /**
     * <p>The read attributes.</p>
     */
    inline void SetReadAttributes(Aws::Vector<Aws::String>&& value) { m_readAttributesHasBeenSet = true; m_readAttributes = std::move(value); }

    /**
     * <p>The read attributes.</p>
     */
    inline CreateUserPoolClientRequest& WithReadAttributes(const Aws::Vector<Aws::String>& value) { SetReadAttributes(value); return *this;}

    /**
     * <p>The read attributes.</p>
     */
    inline CreateUserPoolClientRequest& WithReadAttributes(Aws::Vector<Aws::String>&& value) { SetReadAttributes(std::move(value)); return *this;}

    /**
     * <p>The read attributes.</p>
     */
    inline CreateUserPoolClientRequest& AddReadAttributes(const Aws::String& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }

    /**
     * <p>The read attributes.</p>
     */
    inline CreateUserPoolClientRequest& AddReadAttributes(Aws::String&& value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The read attributes.</p>
     */
    inline CreateUserPoolClientRequest& AddReadAttributes(const char* value) { m_readAttributesHasBeenSet = true; m_readAttributes.push_back(value); return *this; }


    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWriteAttributes() const{ return m_writeAttributes; }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline bool WriteAttributesHasBeenSet() const { return m_writeAttributesHasBeenSet; }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline void SetWriteAttributes(const Aws::Vector<Aws::String>& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = value; }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline void SetWriteAttributes(Aws::Vector<Aws::String>&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes = std::move(value); }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline CreateUserPoolClientRequest& WithWriteAttributes(const Aws::Vector<Aws::String>& value) { SetWriteAttributes(value); return *this;}

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline CreateUserPoolClientRequest& WithWriteAttributes(Aws::Vector<Aws::String>&& value) { SetWriteAttributes(std::move(value)); return *this;}

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline CreateUserPoolClientRequest& AddWriteAttributes(const Aws::String& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline CreateUserPoolClientRequest& AddWriteAttributes(Aws::String&& value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(std::move(value)); return *this; }

    /**
     * <p>The user pool attributes that the app client can write to.</p> <p>If your app
     * client allows users to sign in through an IdP, this array must include all
     * attributes that you have mapped to IdP attributes. Amazon Cognito updates mapped
     * attributes when users sign in to your application through an IdP. If your app
     * client does not have write access to a mapped attribute, Amazon Cognito throws
     * an error when it tries to update the attribute. For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pools-specifying-attribute-mapping.html">Specifying
     * IdP Attribute Mappings for Your user pool</a>.</p>
     */
    inline CreateUserPoolClientRequest& AddWriteAttributes(const char* value) { m_writeAttributesHasBeenSet = true; m_writeAttributes.push_back(value); return *this; }


    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline const Aws::Vector<ExplicitAuthFlowsType>& GetExplicitAuthFlows() const{ return m_explicitAuthFlows; }

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline bool ExplicitAuthFlowsHasBeenSet() const { return m_explicitAuthFlowsHasBeenSet; }

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline void SetExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = value; }

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline void SetExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows = std::move(value); }

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline CreateUserPoolClientRequest& WithExplicitAuthFlows(const Aws::Vector<ExplicitAuthFlowsType>& value) { SetExplicitAuthFlows(value); return *this;}

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline CreateUserPoolClientRequest& WithExplicitAuthFlows(Aws::Vector<ExplicitAuthFlowsType>&& value) { SetExplicitAuthFlows(std::move(value)); return *this;}

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline CreateUserPoolClientRequest& AddExplicitAuthFlows(const ExplicitAuthFlowsType& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(value); return *this; }

    /**
     * <p>The authentication flows that you want your user pool client to support. For
     * each app client in your user pool, you can sign in your users with any
     * combination of one or more flows, including with a user name and Secure Remote
     * Password (SRP), a user name and password, or a custom authentication process
     * that you define with Lambda functions.</p>  <p>If you don't specify a
     * value for <code>ExplicitAuthFlows</code>, your user client supports
     * <code>ALLOW_REFRESH_TOKEN_AUTH</code>, <code>ALLOW_USER_SRP_AUTH</code>, and
     * <code>ALLOW_CUSTOM_AUTH</code>.</p>  <p>Valid values include:</p> <ul>
     * <li> <p> <code>ALLOW_ADMIN_USER_PASSWORD_AUTH</code>: Enable admin based user
     * password authentication flow <code>ADMIN_USER_PASSWORD_AUTH</code>. This setting
     * replaces the <code>ADMIN_NO_SRP_AUTH</code> setting. With this authentication
     * flow, your app passes a user name and password to Amazon Cognito in the request,
     * instead of using the Secure Remote Password (SRP) protocol to securely transmit
     * the password.</p> </li> <li> <p> <code>ALLOW_CUSTOM_AUTH</code>: Enable Lambda
     * trigger based authentication.</p> </li> <li> <p>
     * <code>ALLOW_USER_PASSWORD_AUTH</code>: Enable user password-based
     * authentication. In this flow, Amazon Cognito receives the password in the
     * request instead of using the SRP protocol to verify passwords.</p> </li> <li>
     * <p> <code>ALLOW_USER_SRP_AUTH</code>: Enable SRP-based authentication.</p> </li>
     * <li> <p> <code>ALLOW_REFRESH_TOKEN_AUTH</code>: Enable authflow to refresh
     * tokens.</p> </li> </ul> <p>In some environments, you will see the values
     * <code>ADMIN_NO_SRP_AUTH</code>, <code>CUSTOM_AUTH_FLOW_ONLY</code>, or
     * <code>USER_PASSWORD_AUTH</code>. You can't assign these legacy
     * <code>ExplicitAuthFlows</code> values to user pool clients at the same time as
     * values that begin with <code>ALLOW_</code>, like
     * <code>ALLOW_USER_SRP_AUTH</code>.</p>
     */
    inline CreateUserPoolClientRequest& AddExplicitAuthFlows(ExplicitAuthFlowsType&& value) { m_explicitAuthFlowsHasBeenSet = true; m_explicitAuthFlows.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSupportedIdentityProviders() const{ return m_supportedIdentityProviders; }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline bool SupportedIdentityProvidersHasBeenSet() const { return m_supportedIdentityProvidersHasBeenSet; }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline void SetSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = value; }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline void SetSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders = std::move(value); }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline CreateUserPoolClientRequest& WithSupportedIdentityProviders(const Aws::Vector<Aws::String>& value) { SetSupportedIdentityProviders(value); return *this;}

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline CreateUserPoolClientRequest& WithSupportedIdentityProviders(Aws::Vector<Aws::String>&& value) { SetSupportedIdentityProviders(std::move(value)); return *this;}

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline CreateUserPoolClientRequest& AddSupportedIdentityProviders(const Aws::String& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline CreateUserPoolClientRequest& AddSupportedIdentityProviders(Aws::String&& value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of provider names for the identity providers (IdPs) that are supported
     * on this client. The following are supported: <code>COGNITO</code>,
     * <code>Facebook</code>, <code>Google</code>, <code>SignInWithApple</code>, and
     * <code>LoginWithAmazon</code>. You can also specify the names that you configured
     * for the SAML and OIDC IdPs in your user pool, for example <code>MySAMLIdP</code>
     * or <code>MyOIDCIdP</code>.</p>
     */
    inline CreateUserPoolClientRequest& AddSupportedIdentityProviders(const char* value) { m_supportedIdentityProvidersHasBeenSet = true; m_supportedIdentityProviders.push_back(value); return *this; }


    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCallbackURLs() const{ return m_callbackURLs; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline bool CallbackURLsHasBeenSet() const { return m_callbackURLsHasBeenSet; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetCallbackURLs(const Aws::Vector<Aws::String>& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = value; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline void SetCallbackURLs(Aws::Vector<Aws::String>&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs = std::move(value); }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline CreateUserPoolClientRequest& WithCallbackURLs(const Aws::Vector<Aws::String>& value) { SetCallbackURLs(value); return *this;}

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline CreateUserPoolClientRequest& WithCallbackURLs(Aws::Vector<Aws::String>&& value) { SetCallbackURLs(std::move(value)); return *this;}

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddCallbackURLs(const Aws::String& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddCallbackURLs(Aws::String&& value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed redirect (callback) URLs for the IdPs.</p> <p>A redirect
     * URI must:</p> <ul> <li> <p>Be an absolute URI.</p> </li> <li> <p>Be registered
     * with the authorization server.</p> </li> <li> <p>Not include a fragment
     * component.</p> </li> </ul> <p>See <a
     * href="https://tools.ietf.org/html/rfc6749#section-3.1.2">OAuth 2.0 - Redirection
     * Endpoint</a>.</p> <p>Amazon Cognito requires HTTPS over HTTP except for
     * http://localhost for testing purposes only.</p> <p>App callback URLs such as
     * myapp://example are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddCallbackURLs(const char* value) { m_callbackURLsHasBeenSet = true; m_callbackURLs.push_back(value); return *this; }


    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLogoutURLs() const{ return m_logoutURLs; }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline bool LogoutURLsHasBeenSet() const { return m_logoutURLsHasBeenSet; }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline void SetLogoutURLs(const Aws::Vector<Aws::String>& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = value; }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline void SetLogoutURLs(Aws::Vector<Aws::String>&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs = std::move(value); }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline CreateUserPoolClientRequest& WithLogoutURLs(const Aws::Vector<Aws::String>& value) { SetLogoutURLs(value); return *this;}

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline CreateUserPoolClientRequest& WithLogoutURLs(Aws::Vector<Aws::String>&& value) { SetLogoutURLs(std::move(value)); return *this;}

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline CreateUserPoolClientRequest& AddLogoutURLs(const Aws::String& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline CreateUserPoolClientRequest& AddLogoutURLs(Aws::String&& value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of allowed logout URLs for the IdPs.</p>
     */
    inline CreateUserPoolClientRequest& AddLogoutURLs(const char* value) { m_logoutURLsHasBeenSet = true; m_logoutURLs.push_back(value); return *this; }


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
    inline CreateUserPoolClientRequest& WithDefaultRedirectURI(const Aws::String& value) { SetDefaultRedirectURI(value); return *this;}

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
    inline CreateUserPoolClientRequest& WithDefaultRedirectURI(Aws::String&& value) { SetDefaultRedirectURI(std::move(value)); return *this;}

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
    inline CreateUserPoolClientRequest& WithDefaultRedirectURI(const char* value) { SetDefaultRedirectURI(value); return *this;}


    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline const Aws::Vector<OAuthFlowType>& GetAllowedOAuthFlows() const{ return m_allowedOAuthFlows; }

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline bool AllowedOAuthFlowsHasBeenSet() const { return m_allowedOAuthFlowsHasBeenSet; }

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline void SetAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = value; }

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline void SetAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows = std::move(value); }

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline CreateUserPoolClientRequest& WithAllowedOAuthFlows(const Aws::Vector<OAuthFlowType>& value) { SetAllowedOAuthFlows(value); return *this;}

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline CreateUserPoolClientRequest& WithAllowedOAuthFlows(Aws::Vector<OAuthFlowType>&& value) { SetAllowedOAuthFlows(std::move(value)); return *this;}

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline CreateUserPoolClientRequest& AddAllowedOAuthFlows(const OAuthFlowType& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(value); return *this; }

    /**
     * <p>The allowed OAuth flows.</p> <dl> <dt>code</dt> <dd> <p>Use a code grant
     * flow, which provides an authorization code as the response. This code can be
     * exchanged for access tokens with the <code>/oauth2/token</code> endpoint.</p>
     * </dd> <dt>implicit</dt> <dd> <p>Issue the access token (and, optionally, ID
     * token, based on scopes) directly to your user.</p> </dd>
     * <dt>client_credentials</dt> <dd> <p>Issue the access token from the
     * <code>/oauth2/token</code> endpoint directly to a non-person user using a
     * combination of the client ID and client secret.</p> </dd> </dl>
     */
    inline CreateUserPoolClientRequest& AddAllowedOAuthFlows(OAuthFlowType&& value) { m_allowedOAuthFlowsHasBeenSet = true; m_allowedOAuthFlows.push_back(std::move(value)); return *this; }


    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedOAuthScopes() const{ return m_allowedOAuthScopes; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline bool AllowedOAuthScopesHasBeenSet() const { return m_allowedOAuthScopesHasBeenSet; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline void SetAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = value; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline void SetAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes = std::move(value); }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline CreateUserPoolClientRequest& WithAllowedOAuthScopes(const Aws::Vector<Aws::String>& value) { SetAllowedOAuthScopes(value); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline CreateUserPoolClientRequest& WithAllowedOAuthScopes(Aws::Vector<Aws::String>&& value) { SetAllowedOAuthScopes(std::move(value)); return *this;}

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddAllowedOAuthScopes(const Aws::String& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddAllowedOAuthScopes(Aws::String&& value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The allowed OAuth scopes. Possible values provided by OAuth are
     * <code>phone</code>, <code>email</code>, <code>openid</code>, and
     * <code>profile</code>. Possible values provided by Amazon Web Services are
     * <code>aws.cognito.signin.user.admin</code>. Custom scopes created in Resource
     * Servers are also supported.</p>
     */
    inline CreateUserPoolClientRequest& AddAllowedOAuthScopes(const char* value) { m_allowedOAuthScopesHasBeenSet = true; m_allowedOAuthScopes.push_back(value); return *this; }


    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 features in your user pool app
     * client.</p> <p> <code>AllowedOAuthFlowsUserPoolClient</code> must be
     * <code>true</code> before you can configure the following features in your app
     * client.</p> <ul> <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li>
     * <li> <p> <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use OAuth 2.0
     * features, configure one of these features in the Amazon Cognito console or set
     * <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>.</p>
     */
    inline bool GetAllowedOAuthFlowsUserPoolClient() const{ return m_allowedOAuthFlowsUserPoolClient; }

    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 features in your user pool app
     * client.</p> <p> <code>AllowedOAuthFlowsUserPoolClient</code> must be
     * <code>true</code> before you can configure the following features in your app
     * client.</p> <ul> <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li>
     * <li> <p> <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use OAuth 2.0
     * features, configure one of these features in the Amazon Cognito console or set
     * <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>.</p>
     */
    inline bool AllowedOAuthFlowsUserPoolClientHasBeenSet() const { return m_allowedOAuthFlowsUserPoolClientHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 features in your user pool app
     * client.</p> <p> <code>AllowedOAuthFlowsUserPoolClient</code> must be
     * <code>true</code> before you can configure the following features in your app
     * client.</p> <ul> <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li>
     * <li> <p> <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use OAuth 2.0
     * features, configure one of these features in the Amazon Cognito console or set
     * <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>.</p>
     */
    inline void SetAllowedOAuthFlowsUserPoolClient(bool value) { m_allowedOAuthFlowsUserPoolClientHasBeenSet = true; m_allowedOAuthFlowsUserPoolClient = value; }

    /**
     * <p>Set to <code>true</code> to use OAuth 2.0 features in your user pool app
     * client.</p> <p> <code>AllowedOAuthFlowsUserPoolClient</code> must be
     * <code>true</code> before you can configure the following features in your app
     * client.</p> <ul> <li> <p> <code>CallBackURLs</code>: Callback URLs.</p> </li>
     * <li> <p> <code>LogoutURLs</code>: Sign-out redirect URLs.</p> </li> <li> <p>
     * <code>AllowedOAuthScopes</code>: OAuth 2.0 scopes.</p> </li> <li> <p>
     * <code>AllowedOAuthFlows</code>: Support for authorization code, implicit, and
     * client credentials OAuth 2.0 grants.</p> </li> </ul> <p>To use OAuth 2.0
     * features, configure one of these features in the Amazon Cognito console or set
     * <code>AllowedOAuthFlowsUserPoolClient</code> to <code>true</code> in a
     * <code>CreateUserPoolClient</code> or <code>UpdateUserPoolClient</code> API
     * request. If you don't set a value for
     * <code>AllowedOAuthFlowsUserPoolClient</code> in a request with the CLI or SDKs,
     * it defaults to <code>false</code>.</p>
     */
    inline CreateUserPoolClientRequest& WithAllowedOAuthFlowsUserPoolClient(bool value) { SetAllowedOAuthFlowsUserPoolClient(value); return *this;}


    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline const AnalyticsConfigurationType& GetAnalyticsConfiguration() const{ return m_analyticsConfiguration; }

    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline bool AnalyticsConfigurationHasBeenSet() const { return m_analyticsConfigurationHasBeenSet; }

    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline void SetAnalyticsConfiguration(const AnalyticsConfigurationType& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = value; }

    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline void SetAnalyticsConfiguration(AnalyticsConfigurationType&& value) { m_analyticsConfigurationHasBeenSet = true; m_analyticsConfiguration = std::move(value); }

    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline CreateUserPoolClientRequest& WithAnalyticsConfiguration(const AnalyticsConfigurationType& value) { SetAnalyticsConfiguration(value); return *this;}

    /**
     * <p>The user pool analytics configuration for collecting metrics and sending them
     * to your Amazon Pinpoint campaign.</p>  <p>In Amazon Web Services Regions
     * where Amazon Pinpoint isn't available, user pools only support sending events to
     * Amazon Pinpoint projects in Amazon Web Services Region us-east-1. In Regions
     * where Amazon Pinpoint is available, user pools support sending events to Amazon
     * Pinpoint projects within that same Region.</p> 
     */
    inline CreateUserPoolClientRequest& WithAnalyticsConfiguration(AnalyticsConfigurationType&& value) { SetAnalyticsConfiguration(std::move(value)); return *this;}


    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline const PreventUserExistenceErrorTypes& GetPreventUserExistenceErrors() const{ return m_preventUserExistenceErrors; }

    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline bool PreventUserExistenceErrorsHasBeenSet() const { return m_preventUserExistenceErrorsHasBeenSet; }

    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline void SetPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = value; }

    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline void SetPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { m_preventUserExistenceErrorsHasBeenSet = true; m_preventUserExistenceErrors = std::move(value); }

    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline CreateUserPoolClientRequest& WithPreventUserExistenceErrors(const PreventUserExistenceErrorTypes& value) { SetPreventUserExistenceErrors(value); return *this;}

    /**
     * <p>Errors and responses that you want Amazon Cognito APIs to return during
     * authentication, account confirmation, and password recovery when the user
     * doesn't exist in the user pool. When set to <code>ENABLED</code> and the user
     * doesn't exist, authentication returns an error indicating either the username or
     * password was incorrect. Account confirmation and password recovery return a
     * response indicating a code was sent to a simulated destination. When set to
     * <code>LEGACY</code>, those APIs return a <code>UserNotFoundException</code>
     * exception if the user doesn't exist in the user pool.</p> <p>Valid values
     * include:</p> <ul> <li> <p> <code>ENABLED</code> - This prevents user
     * existence-related errors.</p> </li> <li> <p> <code>LEGACY</code> - This
     * represents the early behavior of Amazon Cognito where user existence related
     * errors aren't prevented.</p> </li> </ul>
     */
    inline CreateUserPoolClientRequest& WithPreventUserExistenceErrors(PreventUserExistenceErrorTypes&& value) { SetPreventUserExistenceErrors(std::move(value)); return *this;}


    /**
     * <p>Activates or deactivates token revocation. For more information about
     * revoking tokens, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
     * <p>If you don't include this parameter, token revocation is automatically
     * activated for the new user pool client.</p>
     */
    inline bool GetEnableTokenRevocation() const{ return m_enableTokenRevocation; }

    /**
     * <p>Activates or deactivates token revocation. For more information about
     * revoking tokens, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
     * <p>If you don't include this parameter, token revocation is automatically
     * activated for the new user pool client.</p>
     */
    inline bool EnableTokenRevocationHasBeenSet() const { return m_enableTokenRevocationHasBeenSet; }

    /**
     * <p>Activates or deactivates token revocation. For more information about
     * revoking tokens, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
     * <p>If you don't include this parameter, token revocation is automatically
     * activated for the new user pool client.</p>
     */
    inline void SetEnableTokenRevocation(bool value) { m_enableTokenRevocationHasBeenSet = true; m_enableTokenRevocation = value; }

    /**
     * <p>Activates or deactivates token revocation. For more information about
     * revoking tokens, see <a
     * href="https://docs.aws.amazon.com/cognito-user-identity-pools/latest/APIReference/API_RevokeToken.html">RevokeToken</a>.</p>
     * <p>If you don't include this parameter, token revocation is automatically
     * activated for the new user pool client.</p>
     */
    inline CreateUserPoolClientRequest& WithEnableTokenRevocation(bool value) { SetEnableTokenRevocation(value); return *this;}


    /**
     * <p>Activates the propagation of additional user context data. For more
     * information about propagation of user context data, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * Adding advanced security to a user pool</a>. If you don’t include this
     * parameter, you can't send device fingerprint information, including source IP
     * address, to Amazon Cognito advanced security. You can only activate
     * <code>EnablePropagateAdditionalUserContextData</code> in an app client that has
     * a client secret.</p>
     */
    inline bool GetEnablePropagateAdditionalUserContextData() const{ return m_enablePropagateAdditionalUserContextData; }

    /**
     * <p>Activates the propagation of additional user context data. For more
     * information about propagation of user context data, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * Adding advanced security to a user pool</a>. If you don’t include this
     * parameter, you can't send device fingerprint information, including source IP
     * address, to Amazon Cognito advanced security. You can only activate
     * <code>EnablePropagateAdditionalUserContextData</code> in an app client that has
     * a client secret.</p>
     */
    inline bool EnablePropagateAdditionalUserContextDataHasBeenSet() const { return m_enablePropagateAdditionalUserContextDataHasBeenSet; }

    /**
     * <p>Activates the propagation of additional user context data. For more
     * information about propagation of user context data, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * Adding advanced security to a user pool</a>. If you don’t include this
     * parameter, you can't send device fingerprint information, including source IP
     * address, to Amazon Cognito advanced security. You can only activate
     * <code>EnablePropagateAdditionalUserContextData</code> in an app client that has
     * a client secret.</p>
     */
    inline void SetEnablePropagateAdditionalUserContextData(bool value) { m_enablePropagateAdditionalUserContextDataHasBeenSet = true; m_enablePropagateAdditionalUserContextData = value; }

    /**
     * <p>Activates the propagation of additional user context data. For more
     * information about propagation of user context data, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/cognito-user-pool-settings-advanced-security.html">
     * Adding advanced security to a user pool</a>. If you don’t include this
     * parameter, you can't send device fingerprint information, including source IP
     * address, to Amazon Cognito advanced security. You can only activate
     * <code>EnablePropagateAdditionalUserContextData</code> in an app client that has
     * a client secret.</p>
     */
    inline CreateUserPoolClientRequest& WithEnablePropagateAdditionalUserContextData(bool value) { SetEnablePropagateAdditionalUserContextData(value); return *this;}


    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline int GetAuthSessionValidity() const{ return m_authSessionValidity; }

    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline bool AuthSessionValidityHasBeenSet() const { return m_authSessionValidityHasBeenSet; }

    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline void SetAuthSessionValidity(int value) { m_authSessionValidityHasBeenSet = true; m_authSessionValidity = value; }

    /**
     * <p>Amazon Cognito creates a session token for each API request in an
     * authentication flow. <code>AuthSessionValidity</code> is the duration, in
     * minutes, of that session token. Your user pool native user must respond to each
     * authentication challenge before the session expires.</p>
     */
    inline CreateUserPoolClientRequest& WithAuthSessionValidity(int value) { SetAuthSessionValidity(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_clientName;
    bool m_clientNameHasBeenSet = false;

    bool m_generateSecret;
    bool m_generateSecretHasBeenSet = false;

    int m_refreshTokenValidity;
    bool m_refreshTokenValidityHasBeenSet = false;

    int m_accessTokenValidity;
    bool m_accessTokenValidityHasBeenSet = false;

    int m_idTokenValidity;
    bool m_idTokenValidityHasBeenSet = false;

    TokenValidityUnitsType m_tokenValidityUnits;
    bool m_tokenValidityUnitsHasBeenSet = false;

    Aws::Vector<Aws::String> m_readAttributes;
    bool m_readAttributesHasBeenSet = false;

    Aws::Vector<Aws::String> m_writeAttributes;
    bool m_writeAttributesHasBeenSet = false;

    Aws::Vector<ExplicitAuthFlowsType> m_explicitAuthFlows;
    bool m_explicitAuthFlowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_supportedIdentityProviders;
    bool m_supportedIdentityProvidersHasBeenSet = false;

    Aws::Vector<Aws::String> m_callbackURLs;
    bool m_callbackURLsHasBeenSet = false;

    Aws::Vector<Aws::String> m_logoutURLs;
    bool m_logoutURLsHasBeenSet = false;

    Aws::String m_defaultRedirectURI;
    bool m_defaultRedirectURIHasBeenSet = false;

    Aws::Vector<OAuthFlowType> m_allowedOAuthFlows;
    bool m_allowedOAuthFlowsHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedOAuthScopes;
    bool m_allowedOAuthScopesHasBeenSet = false;

    bool m_allowedOAuthFlowsUserPoolClient;
    bool m_allowedOAuthFlowsUserPoolClientHasBeenSet = false;

    AnalyticsConfigurationType m_analyticsConfiguration;
    bool m_analyticsConfigurationHasBeenSet = false;

    PreventUserExistenceErrorTypes m_preventUserExistenceErrors;
    bool m_preventUserExistenceErrorsHasBeenSet = false;

    bool m_enableTokenRevocation;
    bool m_enableTokenRevocationHasBeenSet = false;

    bool m_enablePropagateAdditionalUserContextData;
    bool m_enablePropagateAdditionalUserContextDataHasBeenSet = false;

    int m_authSessionValidity;
    bool m_authSessionValidityHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
