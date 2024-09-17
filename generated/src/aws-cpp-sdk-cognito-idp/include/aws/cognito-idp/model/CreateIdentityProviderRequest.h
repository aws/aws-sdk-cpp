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


    ///@{
    /**
     * <p>The user pool ID.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline CreateIdentityProviderRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline CreateIdentityProviderRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline CreateIdentityProviderRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IdP name.</p>
     */
    inline const Aws::String& GetProviderName() const{ return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    inline void SetProviderName(const Aws::String& value) { m_providerNameHasBeenSet = true; m_providerName = value; }
    inline void SetProviderName(Aws::String&& value) { m_providerNameHasBeenSet = true; m_providerName = std::move(value); }
    inline void SetProviderName(const char* value) { m_providerNameHasBeenSet = true; m_providerName.assign(value); }
    inline CreateIdentityProviderRequest& WithProviderName(const Aws::String& value) { SetProviderName(value); return *this;}
    inline CreateIdentityProviderRequest& WithProviderName(Aws::String&& value) { SetProviderName(std::move(value)); return *this;}
    inline CreateIdentityProviderRequest& WithProviderName(const char* value) { SetProviderName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IdP type.</p>
     */
    inline const IdentityProviderTypeType& GetProviderType() const{ return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(const IdentityProviderTypeType& value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline void SetProviderType(IdentityProviderTypeType&& value) { m_providerTypeHasBeenSet = true; m_providerType = std::move(value); }
    inline CreateIdentityProviderRequest& WithProviderType(const IdentityProviderTypeType& value) { SetProviderType(value); return *this;}
    inline CreateIdentityProviderRequest& WithProviderType(IdentityProviderTypeType&& value) { SetProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scopes, URLs, and identifiers for your external identity provider. The
     * following examples describe the provider detail keys for each IdP type. These
     * values and their schema are subject to change. Social IdP
     * <code>authorize_scopes</code> values must match the values listed here.</p> <dl>
     * <dt>OpenID Connect (OIDC)</dt> <dd> <p>Amazon Cognito accepts the following
     * elements when it can't discover endpoint URLs from <code>oidc_issuer</code>:
     * <code>attributes_url</code>, <code>authorize_url</code>, <code>jwks_uri</code>,
     * <code>token_url</code>.</p> <p>Create or update request:
     * <code>"ProviderDetails": { "attributes_request_method": "GET", "attributes_url":
     * "https://auth.example.com/userInfo", "authorize_scopes": "openid profile email",
     * "authorize_url": "https://auth.example.com/authorize", "client_id":
     * "1example23456789", "client_secret": "provider-app-client-secret", "jwks_uri":
     * "https://auth.example.com/.well-known/jwks.json", "oidc_issuer":
     * "https://auth.example.com", "token_url": "https://example.com/token" }</code>
     * </p> <p>Describe response: <code>"ProviderDetails": {
     * "attributes_request_method": "GET", "attributes_url":
     * "https://auth.example.com/userInfo", "attributes_url_add_attributes": "false",
     * "authorize_scopes": "openid profile email", "authorize_url":
     * "https://auth.example.com/authorize", "client_id": "1example23456789",
     * "client_secret": "provider-app-client-secret", "jwks_uri":
     * "https://auth.example.com/.well-known/jwks.json", "oidc_issuer":
     * "https://auth.example.com", "token_url": "https://example.com/token" }</code>
     * </p> </dd> <dt>SAML</dt> <dd> <p>Create or update request with Metadata URL:
     * <code>"ProviderDetails": { "IDPInit": "true", "IDPSignout": "true",
     * "EncryptedResponses" : "true", "MetadataURL":
     * "https://auth.example.com/sso/saml/metadata", "RequestSigningAlgorithm":
     * "rsa-sha256" }</code> </p> <p>Create or update request with Metadata file:
     * <code>"ProviderDetails": { "IDPInit": "true", "IDPSignout": "true",
     * "EncryptedResponses" : "true", "MetadataFile": "[metadata XML]",
     * "RequestSigningAlgorithm": "rsa-sha256" }</code> </p> <p>The value of
     * <code>MetadataFile</code> must be the plaintext metadata document with all quote
     * (") characters escaped by backslashes.</p> <p>Describe response:
     * <code>"ProviderDetails": { "IDPInit": "true", "IDPSignout": "true",
     * "EncryptedResponses" : "true", "ActiveEncryptionCertificate": "[certificate]",
     * "MetadataURL": "https://auth.example.com/sso/saml/metadata",
     * "RequestSigningAlgorithm": "rsa-sha256", "SLORedirectBindingURI":
     * "https://auth.example.com/slo/saml", "SSORedirectBindingURI":
     * "https://auth.example.com/sso/saml" }</code> </p> </dd> <dt>LoginWithAmazon</dt>
     * <dd> <p>Create or update request: <code>"ProviderDetails": { "authorize_scopes":
     * "profile postal_code", "client_id":
     * "amzn1.application-oa2-client.1example23456789", "client_secret":
     * "provider-app-client-secret"</code> </p> <p>Describe response:
     * <code>"ProviderDetails": { "attributes_url":
     * "https://api.amazon.com/user/profile", "attributes_url_add_attributes": "false",
     * "authorize_scopes": "profile postal_code", "authorize_url":
     * "https://www.amazon.com/ap/oa", "client_id":
     * "amzn1.application-oa2-client.1example23456789", "client_secret":
     * "provider-app-client-secret", "token_request_method": "POST", "token_url":
     * "https://api.amazon.com/auth/o2/token" }</code> </p> </dd> <dt>Google</dt> <dd>
     * <p>Create or update request: <code>"ProviderDetails": { "authorize_scopes":
     * "email profile openid", "client_id":
     * "1example23456789.apps.googleusercontent.com", "client_secret":
     * "provider-app-client-secret" }</code> </p> <p>Describe response:
     * <code>"ProviderDetails": { "attributes_url":
     * "https://people.googleapis.com/v1/people/me?personFields=",
     * "attributes_url_add_attributes": "true", "authorize_scopes": "email profile
     * openid", "authorize_url": "https://accounts.google.com/o/oauth2/v2/auth",
     * "client_id": "1example23456789.apps.googleusercontent.com", "client_secret":
     * "provider-app-client-secret", "oidc_issuer": "https://accounts.google.com",
     * "token_request_method": "POST", "token_url":
     * "https://www.googleapis.com/oauth2/v4/token" }</code> </p> </dd>
     * <dt>SignInWithApple</dt> <dd> <p>Create or update request:
     * <code>"ProviderDetails": { "authorize_scopes": "email name", "client_id":
     * "com.example.cognito", "private_key": "1EXAMPLE", "key_id": "2EXAMPLE",
     * "team_id": "3EXAMPLE" }</code> </p> <p>Describe response:
     * <code>"ProviderDetails": { "attributes_url_add_attributes": "false",
     * "authorize_scopes": "email name", "authorize_url":
     * "https://appleid.apple.com/auth/authorize", "client_id": "com.example.cognito",
     * "key_id": "1EXAMPLE", "oidc_issuer": "https://appleid.apple.com", "team_id":
     * "2EXAMPLE", "token_request_method": "POST", "token_url":
     * "https://appleid.apple.com/auth/token" }</code> </p> </dd> <dt>Facebook</dt>
     * <dd> <p>Create or update request: <code>"ProviderDetails": { "api_version":
     * "v17.0", "authorize_scopes": "public_profile, email", "client_id":
     * "1example23456789", "client_secret": "provider-app-client-secret" }</code> </p>
     * <p>Describe response: <code>"ProviderDetails": { "api_version": "v17.0",
     * "attributes_url": "https://graph.facebook.com/v17.0/me?fields=",
     * "attributes_url_add_attributes": "true", "authorize_scopes": "public_profile,
     * email", "authorize_url": "https://www.facebook.com/v17.0/dialog/oauth",
     * "client_id": "1example23456789", "client_secret": "provider-app-client-secret",
     * "token_request_method": "GET", "token_url":
     * "https://graph.facebook.com/v17.0/oauth/access_token" }</code> </p> </dd> </dl>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const{ return m_providerDetails; }
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }
    inline void SetProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = value; }
    inline void SetProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::move(value); }
    inline CreateIdentityProviderRequest& WithProviderDetails(const Aws::Map<Aws::String, Aws::String>& value) { SetProviderDetails(value); return *this;}
    inline CreateIdentityProviderRequest& WithProviderDetails(Aws::Map<Aws::String, Aws::String>&& value) { SetProviderDetails(std::move(value)); return *this;}
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const Aws::String& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(const Aws::String& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, Aws::String&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(Aws::String&& key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::move(key), value); return *this; }
    inline CreateIdentityProviderRequest& AddProviderDetails(const char* key, const char* value) { m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const{ return m_attributeMapping; }
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }
    inline void SetAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = value; }
    inline void SetAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::move(value); }
    inline CreateIdentityProviderRequest& WithAttributeMapping(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributeMapping(value); return *this;}
    inline CreateIdentityProviderRequest& WithAttributeMapping(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributeMapping(std::move(value)); return *this;}
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const Aws::String& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(const Aws::String& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, Aws::String&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(Aws::String&& key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::move(key), value); return *this; }
    inline CreateIdentityProviderRequest& AddAttributeMapping(const char* key, const char* value) { m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IdP identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdpIdentifiers() const{ return m_idpIdentifiers; }
    inline bool IdpIdentifiersHasBeenSet() const { return m_idpIdentifiersHasBeenSet; }
    inline void SetIdpIdentifiers(const Aws::Vector<Aws::String>& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = value; }
    inline void SetIdpIdentifiers(Aws::Vector<Aws::String>&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = std::move(value); }
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(const Aws::Vector<Aws::String>& value) { SetIdpIdentifiers(value); return *this;}
    inline CreateIdentityProviderRequest& WithIdpIdentifiers(Aws::Vector<Aws::String>&& value) { SetIdpIdentifiers(std::move(value)); return *this;}
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const Aws::String& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(Aws::String&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(std::move(value)); return *this; }
    inline CreateIdentityProviderRequest& AddIdpIdentifiers(const char* value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.push_back(value); return *this; }
    ///@}
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
