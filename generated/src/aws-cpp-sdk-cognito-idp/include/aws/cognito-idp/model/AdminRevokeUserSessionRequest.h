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
class AdminRevokeUserSessionRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API AdminRevokeUserSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AdminRevokeUserSession"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool that contains the session.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  AdminRevokeUserSessionRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username of the user who owns the session. The username must match the
   * user associated with the <code>SessionId</code>, to confirm they are the
   * intended target user.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  AdminRevokeUserSessionRequest& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the session to revoke. This is a 28-character string of lowercase
   * letters and digits, prefixed with <code>tkn</code> for a token session or
   * <code>sso</code> for an SSO session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  AdminRevokeUserSessionRequest& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether to also revoke the sessions that are linked to the targeted
   * session. <code>NONE</code>, the default, revokes only the targeted session.
   * <code>LINKED</code> also revokes the directly linked session or sessions,
   * interpreted relative to the type of the targeted session: revoking a token
   * session also revokes the parent SSO session it came through, and revoking an SSO
   * session also revokes the token sessions that came through it. The set of linked
   * sessions is eventually consistent, so associated sessions are typically revoked
   * within a few seconds.</p>
   */
  inline RevokeAssociatedSessionsType GetRevokeAssociatedSessions() const { return m_revokeAssociatedSessions; }
  inline bool RevokeAssociatedSessionsHasBeenSet() const { return m_revokeAssociatedSessionsHasBeenSet; }
  inline void SetRevokeAssociatedSessions(RevokeAssociatedSessionsType value) {
    m_revokeAssociatedSessionsHasBeenSet = true;
    m_revokeAssociatedSessions = value;
  }
  inline AdminRevokeUserSessionRequest& WithRevokeAssociatedSessions(RevokeAssociatedSessionsType value) {
    SetRevokeAssociatedSessions(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_username;

  Aws::String m_sessionId;

  RevokeAssociatedSessionsType m_revokeAssociatedSessions{RevokeAssociatedSessionsType::NOT_SET};
  bool m_userPoolIdHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_revokeAssociatedSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
