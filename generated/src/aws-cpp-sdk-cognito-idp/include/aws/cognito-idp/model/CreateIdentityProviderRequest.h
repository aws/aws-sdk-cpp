/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/IdentityProviderTypeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   */
  class CreateIdentityProviderRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API CreateIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateIdentityProvider"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID.</p>
     */
    inline CreateIdentityProviderRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>The IdP name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }

    /**
     * <p>The IdP name.</p>
     */
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }

    /**
     * <p>The IdP name.</p>
     */
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }

    /**
     * <p>The IdP name.</p>
     */
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }

    /**
     * <p>The IdP name.</p>
     */
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }

    /**
     * <p>The IdP name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}

    /**
     * <p>The IdP name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}

    /**
     * <p>The IdP name.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}


    /**
     * <p>The IdP type.</p>
     */
    inline const IdentityProviderTypeType& GetProviderType() const{ return m_providerType; }

    /**
     * <p>The IdP type.</p>
     */
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }

    /**
     * <p>The IdP type.</p>
     */
    inline void SetProviderType(const IdentityProviderTypeType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }

    /**
     * <p>The IdP type.</p>
     */
    inline void SetProviderType(IdentityProviderTypeType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }

    /**
     * <p>The IdP type.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderType(const IdentityProviderTypeType& value) { SetProviderType(value); return *this;}

    /**
     * <p>The IdP type.</p>
     */
    inline CreateIdentityProviderRequest& WithProviderType(IdentityProviderTypeType&& value) { SetProviderType(std::move(value)); return *this;}


    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const{ return m_providerDetails; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline void SetProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = value; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline void SetProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::move(value); }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& WithProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetProviderDetails(value); return *this;}

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& WithProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetProviderDetails(std::move(value)); return *this;}

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }

    /**
     * <p>The IdP details. The following list describes the provider detail keys for
     * each IdP type.</p> <ul> <li> <p>For Google and Login with Amazon:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For Facebook:</p> <ul> <li>
     * <p>client_id</p> </li> <li> <p>client_secret</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>api_version</p> </li> </ul> </li> <li>
     * <p>For Sign in with Apple:</p> <ul> <li> <p>client_id</p> </li> <li>
     * <p>team_id</p> </li> <li> <p>key_id</p> </li> <li> <p>private_key</p> </li> <li>
     * <p>authorize_scopes</p> </li> </ul> </li> <li> <p>For OpenID Connect (OIDC)
     * providers:</p> <ul> <li> <p>client_id</p> </li> <li> <p>client_secret</p> </li>
     * <li> <p>attributes_request_method</p> </li> <li> <p>oidc_issuer</p> </li> <li>
     * <p>authorize_scopes</p> </li> <li> <p>The following keys are only present if
     * Amazon Cognito didn't discover them at the <code>oidc_issuer</code> URL.</p>
     * <ul> <li> <p>authorize_url </p> </li> <li> <p>token_url </p> </li> <li>
     * <p>attributes_url </p> </li> <li> <p>jwks_uri </p> </li> </ul> </li> <li>
     * <p>Amazon Cognito sets the value of the following keys automatically. They are
     * read-only.</p> <ul> <li> <p>attributes_url_add_attributes </p> </li> </ul> </li>
     * </ul> </li> <li> <p>For SAML providers:</p> <ul> <li> <p>MetadataFile or
     * MetadataURL</p> </li> <li> <p>IDPSignout <i>optional</i> </p> </li> </ul> </li>
     * </ul>
     */
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }


    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const{ return m_attributeMapping; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline void SetAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = value; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline void SetAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::move(value); }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& WithAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMapping(value); return *this;}

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& WithAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMapping(std::move(value)); return *this;}

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }


    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdpIdentifiers() const{ return m_idpIdentifiers; }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline bool IdpIdentifiersHasBeenSet() const { return m_idpIdentifiersHasBeenSet; }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline void SetIdpIdentifiers(const Aws::Vector<Aws::String>& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = value; }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline void SetIdpIdentifiers(Aws::Vector<Aws::String>&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = std::move(value); }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdpIdentifiers(value); return *this;}

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdpIdentifiers(std::move(value)); return *this;}

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const Aws::String& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(Aws::String&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const char* value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    IdentityProviderTypeType m_providerType;
    bool m_providerTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_providerDetails;
    bool m_providerDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributeMapping;
    bool m_attributeMappingHasBeenSet = false;

    Aws::Vector<Aws::String> m_idpIdentifiers;
    bool m_idpIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
