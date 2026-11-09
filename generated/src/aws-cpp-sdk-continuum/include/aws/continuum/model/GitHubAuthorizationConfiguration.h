/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Write-only OAuth credentials used to authorize a GitHub.com integration. Not
 * stored or returned after creation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitHubAuthorizationConfiguration">AWS
 * API Reference</a></p>
 */
class GitHubAuthorizationConfiguration {
 public:
  AWS_CONTINUUM_API GitHubAuthorizationConfiguration() = default;
  AWS_CONTINUUM_API GitHubAuthorizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitHubAuthorizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth authorization code returned by GitHub after the user authorizes the
   * application.</p>
   */
  inline const Aws::String& GetAuthorizationCode() const { return m_authorizationCode; }
  inline bool AuthorizationCodeHasBeenSet() const { return m_authorizationCodeHasBeenSet; }
  template <typename AuthorizationCodeT = Aws::String>
  void SetAuthorizationCode(AuthorizationCodeT&& value) {
    m_authorizationCodeHasBeenSet = true;
    m_authorizationCode = std::forward<AuthorizationCodeT>(value);
  }
  template <typename AuthorizationCodeT = Aws::String>
  GitHubAuthorizationConfiguration& WithAuthorizationCode(AuthorizationCodeT&& value) {
    SetAuthorizationCode(std::forward<AuthorizationCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>state</code> returned by GitHub in the OAuth callback. It must be
   * the state that StartIntegrationAuthorization returned to the same AWS account,
   * and the authorization request must have sent that call's codeChallenge. The
   * state can be redeemed once. A stage that enforces authorization sessions rejects
   * a missing, expired, already used, or other-account state with
   * ValidationException; restart the authorization with
   * StartIntegrationAuthorization.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  GitHubAuthorizationConfiguration& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URL used to obtain the authorization code. Must match one of the
   * redirect URLs registered on the GitHub App. If omitted, the App's default
   * redirect URL is used. Not stored or returned after creation.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  GitHubAuthorizationConfiguration& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationCode;

  Aws::String m_state;

  Aws::String m_redirectUrl;
  bool m_authorizationCodeHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_redirectUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
