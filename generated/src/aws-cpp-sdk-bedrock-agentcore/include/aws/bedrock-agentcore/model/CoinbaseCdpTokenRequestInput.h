/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/PaymentHttpMethodType.h>
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
 * <p>Coinbase CDP token request parameters</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CoinbaseCdpTokenRequestInput">AWS
 * API Reference</a></p>
 */
class CoinbaseCdpTokenRequestInput {
 public:
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenRequestInput() = default;
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenRequestInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenRequestInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP method for the payment API request.</p>
   */
  inline PaymentHttpMethodType GetRequestMethod() const { return m_requestMethod; }
  inline bool RequestMethodHasBeenSet() const { return m_requestMethodHasBeenSet; }
  inline void SetRequestMethod(PaymentHttpMethodType value) {
    m_requestMethodHasBeenSet = true;
    m_requestMethod = value;
  }
  inline CoinbaseCdpTokenRequestInput& WithRequestMethod(PaymentHttpMethodType value) {
    SetRequestMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional - defaults to &quot;api.cdp.coinbase.com&quot;</p>
   */
  inline const Aws::String& GetRequestHost() const { return m_requestHost; }
  inline bool RequestHostHasBeenSet() const { return m_requestHostHasBeenSet; }
  template <typename RequestHostT = Aws::String>
  void SetRequestHost(RequestHostT&& value) {
    m_requestHostHasBeenSet = true;
    m_requestHost = std::forward<RequestHostT>(value);
  }
  template <typename RequestHostT = Aws::String>
  CoinbaseCdpTokenRequestInput& WithRequestHost(RequestHostT&& value) {
    SetRequestHost(std::forward<RequestHostT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the payment API request.</p>
   */
  inline const Aws::String& GetRequestPath() const { return m_requestPath; }
  inline bool RequestPathHasBeenSet() const { return m_requestPathHasBeenSet; }
  template <typename RequestPathT = Aws::String>
  void SetRequestPath(RequestPathT&& value) {
    m_requestPathHasBeenSet = true;
    m_requestPath = std::forward<RequestPathT>(value);
  }
  template <typename RequestPathT = Aws::String>
  CoinbaseCdpTokenRequestInput& WithRequestPath(RequestPathT&& value) {
    SetRequestPath(std::forward<RequestPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true for wallet write operations (requires walletSecret
   * configured)</p>
   */
  inline bool GetIncludeWalletAuthToken() const { return m_includeWalletAuthToken; }
  inline bool IncludeWalletAuthTokenHasBeenSet() const { return m_includeWalletAuthTokenHasBeenSet; }
  inline void SetIncludeWalletAuthToken(bool value) {
    m_includeWalletAuthTokenHasBeenSet = true;
    m_includeWalletAuthToken = value;
  }
  inline CoinbaseCdpTokenRequestInput& WithIncludeWalletAuthToken(bool value) {
    SetIncludeWalletAuthToken(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Request body JSON - used to generate wallet auth JWT</p>
   */
  inline const Aws::String& GetRequestBody() const { return m_requestBody; }
  inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
  template <typename RequestBodyT = Aws::String>
  void SetRequestBody(RequestBodyT&& value) {
    m_requestBodyHasBeenSet = true;
    m_requestBody = std::forward<RequestBodyT>(value);
  }
  template <typename RequestBodyT = Aws::String>
  CoinbaseCdpTokenRequestInput& WithRequestBody(RequestBodyT&& value) {
    SetRequestBody(std::forward<RequestBodyT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentHttpMethodType m_requestMethod{PaymentHttpMethodType::NOT_SET};

  Aws::String m_requestHost;

  Aws::String m_requestPath;

  bool m_includeWalletAuthToken{false};

  Aws::String m_requestBody;
  bool m_requestMethodHasBeenSet = false;
  bool m_requestHostHasBeenSet = false;
  bool m_requestPathHasBeenSet = false;
  bool m_includeWalletAuthTokenHasBeenSet = false;
  bool m_requestBodyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
