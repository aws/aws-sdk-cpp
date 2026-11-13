/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/RevokeAssociatedSessionsType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class RevokeTokenRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RevokeTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RevokeToken"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The refresh token that you want to revoke.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  RevokeTokenRequest& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the app client where the token that you want to revoke was
   * issued.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  RevokeTokenRequest& WithClientId(ClientIdT&& value) {
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
  RevokeTokenRequest& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to also revoke the SSO session that is linked to the token
   * session being revoked. <code>NONE</code>, the default, revokes only the token
   * session that is associated with the refresh token. <code>LINKED</code> also
   * revokes the parent SSO session that the token session came through; the other
   * token sessions that came through that SSO session aren't revoked.
   * <code>LINKED</code> has no effect when session tracking is disabled or when the
   * token session has no parent SSO session.</p>
   */
  inline RevokeAssociatedSessionsType GetRevokeAssociatedSessions() const { return m_revokeAssociatedSessions; }
  inline bool RevokeAssociatedSessionsHasBeenSet() const { return m_revokeAssociatedSessionsHasBeenSet; }
  inline void SetRevokeAssociatedSessions(RevokeAssociatedSessionsType value) {
    m_revokeAssociatedSessionsHasBeenSet = true;
    m_revokeAssociatedSessions = value;
  }
  inline RevokeTokenRequest& WithRevokeAssociatedSessions(RevokeAssociatedSessionsType value) {
    SetRevokeAssociatedSessions(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;

  Aws::String m_clientId;

  Aws::String m_clientSecret;

  RevokeAssociatedSessionsType m_revokeAssociatedSessions{RevokeAssociatedSessionsType::NOT_SET};
  bool m_tokenHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_revokeAssociatedSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
