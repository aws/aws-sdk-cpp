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
 * <p>StripePrivy token request parameters</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/StripePrivyTokenRequestInput">AWS
 * API Reference</a></p>
 */
class StripePrivyTokenRequestInput {
 public:
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenRequestInput() = default;
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenRequestInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API StripePrivyTokenRequestInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Optional - defaults to &quot;api.privy.io&quot;</p>
   */
  inline const Aws::String& GetRequestHost() const { return m_requestHost; }
  inline bool RequestHostHasBeenSet() const { return m_requestHostHasBeenSet; }
  template <typename RequestHostT = Aws::String>
  void SetRequestHost(RequestHostT&& value) {
    m_requestHostHasBeenSet = true;
    m_requestHost = std::forward<RequestHostT>(value);
  }
  template <typename RequestHostT = Aws::String>
  StripePrivyTokenRequestInput& WithRequestHost(RequestHostT&& value) {
    SetRequestHost(std::forward<RequestHostT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the Stripe Privy API request.</p>
   */
  inline const Aws::String& GetRequestPath() const { return m_requestPath; }
  inline bool RequestPathHasBeenSet() const { return m_requestPathHasBeenSet; }
  template <typename RequestPathT = Aws::String>
  void SetRequestPath(RequestPathT&& value) {
    m_requestPathHasBeenSet = true;
    m_requestPath = std::forward<RequestPathT>(value);
  }
  template <typename RequestPathT = Aws::String>
  StripePrivyTokenRequestInput& WithRequestPath(RequestPathT&& value) {
    SetRequestPath(std::forward<RequestPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Request body JSON for the Privy API call</p>
   */
  inline const Aws::String& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = Aws::String>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = Aws::String>
  StripePrivyTokenRequestInput& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to generate privy-authorization-signature</p>
   */
  inline bool GetIncludeAuthorizationSignature() const { return m_includeAuthorizationSignature; }
  inline bool IncludeAuthorizationSignatureHasBeenSet() const { return m_includeAuthorizationSignatureHasBeenSet; }
  inline void SetIncludeAuthorizationSignature(bool value) {
    m_includeAuthorizationSignatureHasBeenSet = true;
    m_includeAuthorizationSignature = value;
  }
  inline StripePrivyTokenRequestInput& WithIncludeAuthorizationSignature(bool value) {
    SetIncludeAuthorizationSignature(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestHost;

  Aws::String m_requestPath;

  Aws::String m_requestBody;

  bool m_includeAuthorizationSignature{false};
  bool m_requestHostHasBeenSet = false;
  bool m_requestPathHasBeenSet = false;
  bool m_requestBodyHasBeenSet = false;
  bool m_includeAuthorizationSignatureHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
