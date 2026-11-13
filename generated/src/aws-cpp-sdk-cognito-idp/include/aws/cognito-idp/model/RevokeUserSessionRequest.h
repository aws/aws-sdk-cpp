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
class RevokeUserSessionRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RevokeUserSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RevokeUserSession"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A valid access token that Amazon Cognito issued to the user. Amazon Cognito
   * uses this token to authorize the request and to identify the user.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  RevokeUserSessionRequest& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the session to revoke. This is a 28-character string of lowercase
   * letters and digits, prefixed with <code>tkn</code> for a token session or
   * <code>sso</code> for an SSO session. This value can't identify the caller's own
   * current session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  RevokeUserSessionRequest& WithSessionId(SessionIdT&& value) {
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
  inline RevokeUserSessionRequest& WithRevokeAssociatedSessions(RevokeAssociatedSessionsType value) {
    SetRevokeAssociatedSessions(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessToken;

  Aws::String m_sessionId;

  RevokeAssociatedSessionsType m_revokeAssociatedSessions{RevokeAssociatedSessionsType::NOT_SET};
  bool m_accessTokenHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_revokeAssociatedSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
