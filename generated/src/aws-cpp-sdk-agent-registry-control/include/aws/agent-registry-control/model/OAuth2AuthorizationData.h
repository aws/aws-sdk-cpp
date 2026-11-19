/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>An OAuth 2.0 authorization that waits for a user's approval. The user opens
 * <code>authorizationUrl</code> and approves access on GitHub. Amazon Bedrock
 * AgentCore Identity then redirects the browser to the source's
 * <code>returnUrl</code>. There, your application completes the authorization by
 * calling the AgentCore Identity <code>CompleteResourceTokenAuth</code> operation
 * with <code>userId</code>. If the source has no <code>returnUrl</code>, the user
 * returns to the Amazon Web Services Agent Registry console, which completes the
 * authorization. After the authorization completes, the registry synchronizes the
 * record without another request. If the user doesn't approve access before
 * <code>expiresAt</code>, the record moves to <code>CREATE_FAILED</code> or
 * <code>UPDATE_FAILED</code>. To start again, call
 * <code>UpdateRegistryRecord</code> with
 * <code>triggerSynchronization</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/OAuth2AuthorizationData">AWS
 * API Reference</a></p>
 */
class OAuth2AuthorizationData {
 public:
  AWS_AGENTREGISTRYCONTROL_API OAuth2AuthorizationData() = default;
  AWS_AGENTREGISTRYCONTROL_API OAuth2AuthorizationData(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API OAuth2AuthorizationData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL that the user opens to approve access. The link is valid for up to 10
   * minutes. Treat it as sensitive and give it only to the user who approves
   * access.</p>
   */
  inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
  inline bool AuthorizationUrlHasBeenSet() const { return m_authorizationUrlHasBeenSet; }
  template <typename AuthorizationUrlT = Aws::String>
  void SetAuthorizationUrl(AuthorizationUrlT&& value) {
    m_authorizationUrlHasBeenSet = true;
    m_authorizationUrl = std::forward<AuthorizationUrlT>(value);
  }
  template <typename AuthorizationUrlT = Aws::String>
  OAuth2AuthorizationData& WithAuthorizationUrl(AuthorizationUrlT&& value) {
    SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AgentCore Identity user ID that the authorization is for. Store it with
   * your signed-in user and pass it as <code>userIdentifier.userId</code> when your
   * application calls <code>CompleteResourceTokenAuth</code>.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  OAuth2AuthorizationData& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of this authorization attempt.</p>
   */
  inline const Aws::String& GetAuthorizationAttemptId() const { return m_authorizationAttemptId; }
  inline bool AuthorizationAttemptIdHasBeenSet() const { return m_authorizationAttemptIdHasBeenSet; }
  template <typename AuthorizationAttemptIdT = Aws::String>
  void SetAuthorizationAttemptId(AuthorizationAttemptIdT&& value) {
    m_authorizationAttemptIdHasBeenSet = true;
    m_authorizationAttemptId = std::forward<AuthorizationAttemptIdT>(value);
  }
  template <typename AuthorizationAttemptIdT = Aws::String>
  OAuth2AuthorizationData& WithAuthorizationAttemptId(AuthorizationAttemptIdT&& value) {
    SetAuthorizationAttemptId(std::forward<AuthorizationAttemptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the authorization link expires, 10 minutes after the
   * authorization started. A request that joins an authorization in progress gets
   * less time, and the link might stop working shortly before this time.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  OAuth2AuthorizationData& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationUrl;

  Aws::String m_userId;

  Aws::String m_authorizationAttemptId;

  Aws::Utils::DateTime m_expiresAt{};
  bool m_authorizationUrlHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_authorizationAttemptIdHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
