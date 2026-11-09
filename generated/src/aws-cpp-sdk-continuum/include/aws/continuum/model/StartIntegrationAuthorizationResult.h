/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/OAuthCodeChallengeMethod.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {
/**
 * <p>Contains the values to send to the provider's authorization
 * endpoint.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/StartIntegrationAuthorizationOutput">AWS
 * API Reference</a></p>
 */
class StartIntegrationAuthorizationResult {
 public:
  AWS_CONTINUUM_API StartIntegrationAuthorizationResult() = default;
  AWS_CONTINUUM_API StartIntegrationAuthorizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API StartIntegrationAuthorizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An opaque value to send as the OAuth <code>state</code> parameter. Pass the
   * value the provider returns in its callback to CreateIntegration as
   * <code>authorization.state</code>.</p>
   */
  inline const Aws::String& GetState() const { return m_state; }
  template <typename StateT = Aws::String>
  void SetState(StateT&& value) {
    m_stateHasBeenSet = true;
    m_state = std::forward<StateT>(value);
  }
  template <typename StateT = Aws::String>
  StartIntegrationAuthorizationResult& WithState(StateT&& value) {
    SetState(std::forward<StateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE code challenge to send as the OAuth <code>code_challenge</code>
   * parameter.</p>
   */
  inline const Aws::String& GetCodeChallenge() const { return m_codeChallenge; }
  template <typename CodeChallengeT = Aws::String>
  void SetCodeChallenge(CodeChallengeT&& value) {
    m_codeChallengeHasBeenSet = true;
    m_codeChallenge = std::forward<CodeChallengeT>(value);
  }
  template <typename CodeChallengeT = Aws::String>
  StartIntegrationAuthorizationResult& WithCodeChallenge(CodeChallengeT&& value) {
    SetCodeChallenge(std::forward<CodeChallengeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The PKCE challenge method to send as the OAuth
   * <code>code_challenge_method</code> parameter.</p>
   */
  inline OAuthCodeChallengeMethod GetCodeChallengeMethod() const { return m_codeChallengeMethod; }
  inline void SetCodeChallengeMethod(OAuthCodeChallengeMethod value) {
    m_codeChallengeMethodHasBeenSet = true;
    m_codeChallengeMethod = value;
  }
  inline StartIntegrationAuthorizationResult& WithCodeChallengeMethod(OAuthCodeChallengeMethod value) {
    SetCodeChallengeMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time after which CreateIntegration no longer accepts this
   * authorization.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  StartIntegrationAuthorizationResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StartIntegrationAuthorizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_state;

  Aws::String m_codeChallenge;

  OAuthCodeChallengeMethod m_codeChallengeMethod{OAuthCodeChallengeMethod::NOT_SET};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_stateHasBeenSet = false;
  bool m_codeChallengeHasBeenSet = false;
  bool m_codeChallengeMethodHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
