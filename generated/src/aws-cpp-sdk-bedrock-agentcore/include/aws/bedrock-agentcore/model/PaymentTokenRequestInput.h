/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CoinbaseCdpTokenRequestInput.h>
#include <aws/bedrock-agentcore/model/StripePrivyTokenRequestInput.h>

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
 * <p>Vendor-specific token request configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentTokenRequestInput">AWS
 * API Reference</a></p>
 */
class PaymentTokenRequestInput {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentTokenRequestInput() = default;
  AWS_BEDROCKAGENTCORE_API PaymentTokenRequestInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentTokenRequestInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Coinbase CDP token request.</p>
   */
  inline const CoinbaseCdpTokenRequestInput& GetCoinbaseCdpTokenRequest() const { return m_coinbaseCdpTokenRequest; }
  inline bool CoinbaseCdpTokenRequestHasBeenSet() const { return m_coinbaseCdpTokenRequestHasBeenSet; }
  template <typename CoinbaseCdpTokenRequestT = CoinbaseCdpTokenRequestInput>
  void SetCoinbaseCdpTokenRequest(CoinbaseCdpTokenRequestT&& value) {
    m_coinbaseCdpTokenRequestHasBeenSet = true;
    m_coinbaseCdpTokenRequest = std::forward<CoinbaseCdpTokenRequestT>(value);
  }
  template <typename CoinbaseCdpTokenRequestT = CoinbaseCdpTokenRequestInput>
  PaymentTokenRequestInput& WithCoinbaseCdpTokenRequest(CoinbaseCdpTokenRequestT&& value) {
    SetCoinbaseCdpTokenRequest(std::forward<CoinbaseCdpTokenRequestT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Stripe Privy token request.</p>
   */
  inline const StripePrivyTokenRequestInput& GetStripePrivyTokenRequest() const { return m_stripePrivyTokenRequest; }
  inline bool StripePrivyTokenRequestHasBeenSet() const { return m_stripePrivyTokenRequestHasBeenSet; }
  template <typename StripePrivyTokenRequestT = StripePrivyTokenRequestInput>
  void SetStripePrivyTokenRequest(StripePrivyTokenRequestT&& value) {
    m_stripePrivyTokenRequestHasBeenSet = true;
    m_stripePrivyTokenRequest = std::forward<StripePrivyTokenRequestT>(value);
  }
  template <typename StripePrivyTokenRequestT = StripePrivyTokenRequestInput>
  PaymentTokenRequestInput& WithStripePrivyTokenRequest(StripePrivyTokenRequestT&& value) {
    SetStripePrivyTokenRequest(std::forward<StripePrivyTokenRequestT>(value));
    return *this;
  }
  ///@}
 private:
  CoinbaseCdpTokenRequestInput m_coinbaseCdpTokenRequest;

  StripePrivyTokenRequestInput m_stripePrivyTokenRequest;
  bool m_coinbaseCdpTokenRequestHasBeenSet = false;
  bool m_stripePrivyTokenRequestHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
