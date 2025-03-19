/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-idp/model/IdentityProviderTypeType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A user pool identity provider (IdP). Contains information about a third-party
   * IdP to a user pool, the attributes that it populates to user profiles, and the
   * trust relationship between the IdP and your user pool.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/IdentityProviderType">AWS
   * API Reference</a></p>
   */
  class IdentityProviderType
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API IdentityProviderType() = default;
    AWS_COGNITOIDENTITYPROVIDER_API IdentityProviderType(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API IdentityProviderType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the user pool associated with the IdP.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    IdentityProviderType& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the IdP.</p>
     */
    inline const Aws::String& GetProviderName() const { return m_providerName; }
    inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
    template<typename ProviderNameT = Aws::String>
    void SetProviderName(ProviderNameT&& value) { m_providerNameHasBeenSet = true; m_providerName = std::forward<ProviderNameT>(value); }
    template<typename ProviderNameT = Aws::String>
    IdentityProviderType& WithProviderName(ProviderNameT&& value) { SetProviderName(std::forward<ProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of IdP. Either SAML, OIDC, or a named social identity provider.</p>
     */
    inline IdentityProviderTypeType GetProviderType() const { return m_providerType; }
    inline bool ProviderTypeHasBeenSet() const { return m_providerTypeHasBeenSet; }
    inline void SetProviderType(IdentityProviderTypeType value) { m_providerTypeHasBeenSet = true; m_providerType = value; }
    inline IdentityProviderType& WithProviderType(IdentityProviderTypeType value) { SetProviderType(value); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetProviderDetails() const { return m_providerDetails; }
    inline bool ProviderDetailsHasBeenSet() const { return m_providerDetailsHasBeenSet; }
    template<typename ProviderDetailsT = Aws::Map<Aws::String, Aws::String>>
    void SetProviderDetails(ProviderDetailsT&& value) { m_providerDetailsHasBeenSet = true; m_providerDetails = std::forward<ProviderDetailsT>(value); }
    template<typename ProviderDetailsT = Aws::Map<Aws::String, Aws::String>>
    IdentityProviderType& WithProviderDetails(ProviderDetailsT&& value) { SetProviderDetails(std::forward<ProviderDetailsT>(value)); return *this;}
    template<typename ProviderDetailsKeyT = Aws::String, typename ProviderDetailsValueT = Aws::String>
    IdentityProviderType& AddProviderDetails(ProviderDetailsKeyT&& key, ProviderDetailsValueT&& value) {
      m_providerDetailsHasBeenSet = true; m_providerDetails.emplace(std::forward<ProviderDetailsKeyT>(key), std::forward<ProviderDetailsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A mapping of IdP attributes to standard and custom user pool attributes.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributeMapping() const { return m_attributeMapping; }
    inline bool AttributeMappingHasBeenSet() const { return m_attributeMappingHasBeenSet; }
    template<typename AttributeMappingT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributeMapping(AttributeMappingT&& value) { m_attributeMappingHasBeenSet = true; m_attributeMapping = std::forward<AttributeMappingT>(value); }
    template<typename AttributeMappingT = Aws::Map<Aws::String, Aws::String>>
    IdentityProviderType& WithAttributeMapping(AttributeMappingT&& value) { SetAttributeMapping(std::forward<AttributeMappingT>(value)); return *this;}
    template<typename AttributeMappingKeyT = Aws::String, typename AttributeMappingValueT = Aws::String>
    IdentityProviderType& AddAttributeMapping(AttributeMappingKeyT&& key, AttributeMappingValueT&& value) {
      m_attributeMappingHasBeenSet = true; m_attributeMapping.emplace(std::forward<AttributeMappingKeyT>(key), std::forward<AttributeMappingValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A list of IdP identifiers. IdP identifiers are strings that represent
     * friendly names or domain names of IdPs, for example <code>MyIdP</code> or
     * <code>auth.example.com</code>. You can choose to route user authorization
     * requests to the right IdP with either IdP identifiers or IdP names. For more
     * information, see <code>identity_provider</code> and <code>idp_identifier</code>
     * at <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/authorization-endpoint.html#get-authorize-request-parameters">Authorize
     * endpoint</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdpIdentifiers() const { return m_idpIdentifiers; }
    inline bool IdpIdentifiersHasBeenSet() const { return m_idpIdentifiersHasBeenSet; }
    template<typename IdpIdentifiersT = Aws::Vector<Aws::String>>
    void SetIdpIdentifiers(IdpIdentifiersT&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers = std::forward<IdpIdentifiersT>(value); }
    template<typename IdpIdentifiersT = Aws::Vector<Aws::String>>
    IdentityProviderType& WithIdpIdentifiers(IdpIdentifiersT&& value) { SetIdpIdentifiers(std::forward<IdpIdentifiersT>(value)); return *this;}
    template<typename IdpIdentifiersT = Aws::String>
    IdentityProviderType& AddIdpIdentifiers(IdpIdentifiersT&& value) { m_idpIdentifiersHasBeenSet = true; m_idpIdentifiers.emplace_back(std::forward<IdpIdentifiersT>(value)); return *this; }
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
    IdentityProviderType& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
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
    IdentityProviderType& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::String m_providerName;
    bool m_providerNameHasBeenSet = false;

    IdentityProviderTypeType m_providerType{IdentityProviderTypeType::NOT_SET};
    bool m_providerTypeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_providerDetails;
    bool m_providerDetailsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributeMapping;
    bool m_attributeMappingHasBeenSet = false;

    Aws::Vector<Aws::String> m_idpIdentifiers;
    bool m_idpIdentifiersHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate{};
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
