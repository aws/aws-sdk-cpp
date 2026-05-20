/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Stripe Privy token response containing appId, basicAuthToken, and optionally
 * authorizationSignature.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StripePrivyTokenResponseOutput">AWS
 * API Reference</a></p>
 */
class StripePrivyTokenResponseOutput {
 public:
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenResponseOutput() = default;
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenResponseOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenResponseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Base64-encoded ECDSA P-256 authorization signature (only present when
   * includeAuthorizationSignature is true).</p>
   */
  inline const Aws::String& GetAuthorizationSignature() const { return m_authorizationSignature; }
  inline bool AuthorizationSignatureHasBeenSet() const { return m_authorizationSignatureHasBeenSet; }
  template <typename AuthorizationSignatureT = Aws::String>
  void SetAuthorizationSignature(AuthorizationSignatureT&& value) {
    m_authorizationSignatureHasBeenSet = true;
    m_authorizationSignature = std::forward<AuthorizationSignatureT>(value);
  }
  template <typename AuthorizationSignatureT = Aws::String>
  StripePrivyTokenResponseOutput& WithAuthorizationSignature(AuthorizationSignatureT&& value) {
    SetAuthorizationSignature(std::forward<AuthorizationSignatureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unix timestamp in milliseconds when the authorization signature expires.</p>
   */
  inline long long GetRequestExpiry() const { return m_requestExpiry; }
  inline bool RequestExpiryHasBeenSet() const { return m_requestExpiryHasBeenSet; }
  inline void SetRequestExpiry(long long value) {
    m_requestExpiryHasBeenSet = true;
    m_requestExpiry = value;
  }
  inline StripePrivyTokenResponseOutput& WithRequestExpiry(long long value) {
    SetRequestExpiry(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Privy app ID for the privy-app-id header.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  StripePrivyTokenResponseOutput& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Base64-encoded Basic Auth token (appId:appSecret) for the Authorization
   * header.</p>
   */
  inline const Aws::String& GetBasicAuthToken() const { return m_basicAuthToken; }
  inline bool BasicAuthTokenHasBeenSet() const { return m_basicAuthTokenHasBeenSet; }
  template <typename BasicAuthTokenT = Aws::String>
  void SetBasicAuthToken(BasicAuthTokenT&& value) {
    m_basicAuthTokenHasBeenSet = true;
    m_basicAuthToken = std::forward<BasicAuthTokenT>(value);
  }
  template <typename BasicAuthTokenT = Aws::String>
  StripePrivyTokenResponseOutput& WithBasicAuthToken(BasicAuthTokenT&& value) {
    SetBasicAuthToken(std::forward<BasicAuthTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authorizationSignature;

  long long m_requestExpiry{0};

  Aws::String m_appId;

  Aws::String m_basicAuthToken;
  bool m_authorizationSignatureHasBeenSet = false;
  bool m_requestExpiryHasBeenSet = false;
  bool m_appIdHasBeenSet = false;
  bool m_basicAuthTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
