/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/IssuedTokenTypeIdentifierType.h>
#include <aws/cognito-idp/model/TokenTypeIdentifierType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Represents the request to exchange a subject token for a new
 * token.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/GetDerivedTokenRequest">AWS
 * API Reference</a></p>
 */
class GetDerivedTokenRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API GetDerivedTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDerivedToken"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the app client that requests the token exchange.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  GetDerivedTokenRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret of the requested app client, if the client has a
   * secret.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  GetDerivedTokenRequest& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token that you want to exchange for a new token. This is the credential
   * that represents the identity of the party on behalf of whom the request is being
   * made.</p>
   */
  inline const Aws::String& GetSubjectToken() const { return m_subjectToken; }
  inline bool SubjectTokenHasBeenSet() const { return m_subjectTokenHasBeenSet; }
  template <typename SubjectTokenT = Aws::String>
  void SetSubjectToken(SubjectTokenT&& value) {
    m_subjectTokenHasBeenSet = true;
    m_subjectToken = std::forward<SubjectTokenT>(value);
  }
  template <typename SubjectTokenT = Aws::String>
  GetDerivedTokenRequest& WithSubjectToken(SubjectTokenT&& value) {
    SetSubjectToken(std::forward<SubjectTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the <code>SubjectToken</code> that you want to exchange. Valid
   * values:</p> <ul> <li> <p> <code>ACCESS_TOKEN</code> – The subject token is an
   * access token.</p> </li> <li> <p> <code>ID_TOKEN</code> – The subject token is an
   * ID token.</p> </li> <li> <p> <code>SAML2</code> – The subject token is a SAML
   * 2.0 assertion.</p> </li> </ul>
   */
  inline TokenTypeIdentifierType GetSubjectTokenType() const { return m_subjectTokenType; }
  inline bool SubjectTokenTypeHasBeenSet() const { return m_subjectTokenTypeHasBeenSet; }
  inline void SetSubjectTokenType(TokenTypeIdentifierType value) {
    m_subjectTokenTypeHasBeenSet = true;
    m_subjectTokenType = value;
  }
  inline GetDerivedTokenRequest& WithSubjectTokenType(TokenTypeIdentifierType value) {
    SetSubjectTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the third-party identity provider that issued the
   * <code>SubjectToken</code>, if the subject token isn't a Amazon Cognito token.
   * Provide this value when your <code>SubjectToken</code> came from a SAML or OIDC
   * provider that you registered with your user pool, so that Amazon Cognito can
   * validate it against that provider's configuration. Omit this parameter for a
   * Amazon Cognito ID or access token.</p>
   */
  inline const Aws::String& GetSubjectTokenProviderName() const { return m_subjectTokenProviderName; }
  inline bool SubjectTokenProviderNameHasBeenSet() const { return m_subjectTokenProviderNameHasBeenSet; }
  template <typename SubjectTokenProviderNameT = Aws::String>
  void SetSubjectTokenProviderName(SubjectTokenProviderNameT&& value) {
    m_subjectTokenProviderNameHasBeenSet = true;
    m_subjectTokenProviderName = std::forward<SubjectTokenProviderNameT>(value);
  }
  template <typename SubjectTokenProviderNameT = Aws::String>
  GetDerivedTokenRequest& WithSubjectTokenProviderName(SubjectTokenProviderNameT&& value) {
    SetSubjectTokenProviderName(std::forward<SubjectTokenProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token that identifies the intermediary service that is exchanging the token
   * on behalf of the user. When you provide an <code>ActorToken</code>, the token
   * that Amazon Cognito issues carries an <code>act</code> claim that identifies the
   * intermediary, so that downstream services can distinguish a user acting directly
   * from an intermediary acting on the user's behalf.</p>
   */
  inline const Aws::String& GetActorToken() const { return m_actorToken; }
  inline bool ActorTokenHasBeenSet() const { return m_actorTokenHasBeenSet; }
  template <typename ActorTokenT = Aws::String>
  void SetActorToken(ActorTokenT&& value) {
    m_actorTokenHasBeenSet = true;
    m_actorToken = std::forward<ActorTokenT>(value);
  }
  template <typename ActorTokenT = Aws::String>
  GetDerivedTokenRequest& WithActorToken(ActorTokenT&& value) {
    SetActorToken(std::forward<ActorTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the <code>ActorToken</code> that you provide. Required when you
   * provide an <code>ActorToken</code>. Valid values:</p> <ul> <li> <p>
   * <code>ACCESS_TOKEN</code> – The actor token is an access token.</p> </li> <li>
   * <p> <code>ID_TOKEN</code> – The actor token is an ID token.</p> </li> <li> <p>
   * <code>SAML2</code> – The actor token is a SAML 2.0 assertion.</p> </li> </ul>
   */
  inline TokenTypeIdentifierType GetActorTokenType() const { return m_actorTokenType; }
  inline bool ActorTokenTypeHasBeenSet() const { return m_actorTokenTypeHasBeenSet; }
  inline void SetActorTokenType(TokenTypeIdentifierType value) {
    m_actorTokenTypeHasBeenSet = true;
    m_actorTokenType = value;
  }
  inline GetDerivedTokenRequest& WithActorTokenType(TokenTypeIdentifierType value) {
    SetActorTokenType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the third-party identity provider that issued the
   * <code>ActorToken</code>, if the actor token isn't a Amazon Cognito token.</p>
   */
  inline const Aws::String& GetActorTokenProviderName() const { return m_actorTokenProviderName; }
  inline bool ActorTokenProviderNameHasBeenSet() const { return m_actorTokenProviderNameHasBeenSet; }
  template <typename ActorTokenProviderNameT = Aws::String>
  void SetActorTokenProviderName(ActorTokenProviderNameT&& value) {
    m_actorTokenProviderNameHasBeenSet = true;
    m_actorTokenProviderName = std::forward<ActorTokenProviderNameT>(value);
  }
  template <typename ActorTokenProviderNameT = Aws::String>
  GetDerivedTokenRequest& WithActorTokenProviderName(ActorTokenProviderNameT&& value) {
    SetActorTokenProviderName(std::forward<ActorTokenProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scopes that you want the new token to have. Amazon Cognito issues a token
   * with the intersection of these requested scopes, the scopes of your
   * <code>SubjectToken</code>, and the scopes that are allowed for the requesting
   * app client. If you don't specify any scopes, Amazon Cognito issues a token with
   * the same scopes as your <code>SubjectToken</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
  inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  void SetScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes = std::forward<ScopesT>(value);
  }
  template <typename ScopesT = Aws::Vector<Aws::String>>
  GetDerivedTokenRequest& WithScopes(ScopesT&& value) {
    SetScopes(std::forward<ScopesT>(value));
    return *this;
  }
  template <typename ScopesT = Aws::String>
  GetDerivedTokenRequest& AddScopes(ScopesT&& value) {
    m_scopesHasBeenSet = true;
    m_scopes.emplace_back(std::forward<ScopesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logical name of the target service where you intend to use the issued
   * token. You can't request both <code>Audiences</code> and <code>Resources</code>
   * in the same request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAudiences() const { return m_audiences; }
  inline bool AudiencesHasBeenSet() const { return m_audiencesHasBeenSet; }
  template <typename AudiencesT = Aws::Vector<Aws::String>>
  void SetAudiences(AudiencesT&& value) {
    m_audiencesHasBeenSet = true;
    m_audiences = std::forward<AudiencesT>(value);
  }
  template <typename AudiencesT = Aws::Vector<Aws::String>>
  GetDerivedTokenRequest& WithAudiences(AudiencesT&& value) {
    SetAudiences(std::forward<AudiencesT>(value));
    return *this;
  }
  template <typename AudiencesT = Aws::String>
  GetDerivedTokenRequest& AddAudiences(AudiencesT&& value) {
    m_audiencesHasBeenSet = true;
    m_audiences.emplace_back(std::forward<AudiencesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of a resource server in your user pool where you intend to use
   * the issued token. You can't request both <code>Resources</code> and
   * <code>Audiences</code> in the same request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetResources() const { return m_resources; }
  inline bool ResourcesHasBeenSet() const { return m_resourcesHasBeenSet; }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  void SetResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources = std::forward<ResourcesT>(value);
  }
  template <typename ResourcesT = Aws::Vector<Aws::String>>
  GetDerivedTokenRequest& WithResources(ResourcesT&& value) {
    SetResources(std::forward<ResourcesT>(value));
    return *this;
  }
  template <typename ResourcesT = Aws::String>
  GetDerivedTokenRequest& AddResources(ResourcesT&& value) {
    m_resourcesHasBeenSet = true;
    m_resources.emplace_back(std::forward<ResourcesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of token that you want Amazon Cognito to issue. Valid values:</p>
   * <ul> <li> <p> <code>ACCESS_TOKEN</code> – Issues an access token.</p> </li> <li>
   * <p> <code>ID_TOKEN</code> – Issues an ID token.</p> </li> </ul> <p>Amazon
   * Cognito can't issue a SAML assertion, so <code>SAML2</code> isn't a valid value
   * for this parameter.</p>
   */
  inline IssuedTokenTypeIdentifierType GetRequestedTokenType() const { return m_requestedTokenType; }
  inline bool RequestedTokenTypeHasBeenSet() const { return m_requestedTokenTypeHasBeenSet; }
  inline void SetRequestedTokenType(IssuedTokenTypeIdentifierType value) {
    m_requestedTokenTypeHasBeenSet = true;
    m_requestedTokenType = value;
  }
  inline GetDerivedTokenRequest& WithRequestedTokenType(IssuedTokenTypeIdentifierType value) {
    SetRequestedTokenType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_clientSecret;

  Aws::String m_subjectToken;

  TokenTypeIdentifierType m_subjectTokenType{TokenTypeIdentifierType::NOT_SET};

  Aws::String m_subjectTokenProviderName;

  Aws::String m_actorToken;

  TokenTypeIdentifierType m_actorTokenType{TokenTypeIdentifierType::NOT_SET};

  Aws::String m_actorTokenProviderName;

  Aws::Vector<Aws::String> m_scopes;

  Aws::Vector<Aws::String> m_audiences;

  Aws::Vector<Aws::String> m_resources;

  IssuedTokenTypeIdentifierType m_requestedTokenType{IssuedTokenTypeIdentifierType::NOT_SET};
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_subjectTokenHasBeenSet = false;
  bool m_subjectTokenTypeHasBeenSet = false;
  bool m_subjectTokenProviderNameHasBeenSet = false;
  bool m_actorTokenHasBeenSet = false;
  bool m_actorTokenTypeHasBeenSet = false;
  bool m_actorTokenProviderNameHasBeenSet = false;
  bool m_scopesHasBeenSet = false;
  bool m_audiencesHasBeenSet = false;
  bool m_resourcesHasBeenSet = false;
  bool m_requestedTokenTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
