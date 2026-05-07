/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CoinbaseCdpTokenResponseOutput.h>
#include <aws/bedrock-agentcore/model/StripePrivyTokenResponseOutput.h>

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
 * <p>VENDOR-SPECIFIC TOKEN RESPONSE CONFIGURATION - Output</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/PaymentTokenResponseOutput">AWS
 * API Reference</a></p>
 */
class PaymentTokenResponseOutput {
 public:
  AWS_BEDROCKAGENTCORE_API PaymentTokenResponseOutput() = default;
  AWS_BEDROCKAGENTCORE_API PaymentTokenResponseOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API PaymentTokenResponseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const CoinbaseCdpTokenResponseOutput& GetCoinbaseCdpTokenResponse() const { return m_coinbaseCdpTokenResponse; }
  inline bool CoinbaseCdpTokenResponseHasBeenSet() const { return m_coinbaseCdpTokenResponseHasBeenSet; }
  template <typename CoinbaseCdpTokenResponseT = CoinbaseCdpTokenResponseOutput>
  void SetCoinbaseCdpTokenResponse(CoinbaseCdpTokenResponseT&& value) {
    m_coinbaseCdpTokenResponseHasBeenSet = true;
    m_coinbaseCdpTokenResponse = std::forward<CoinbaseCdpTokenResponseT>(value);
  }
  template <typename CoinbaseCdpTokenResponseT = CoinbaseCdpTokenResponseOutput>
  PaymentTokenResponseOutput& WithCoinbaseCdpTokenResponse(CoinbaseCdpTokenResponseT&& value) {
    SetCoinbaseCdpTokenResponse(std::forward<CoinbaseCdpTokenResponseT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StripePrivyTokenResponseOutput& GetStripePrivyTokenResponse() const { return m_stripePrivyTokenResponse; }
  inline bool StripePrivyTokenResponseHasBeenSet() const { return m_stripePrivyTokenResponseHasBeenSet; }
  template <typename StripePrivyTokenResponseT = StripePrivyTokenResponseOutput>
  void SetStripePrivyTokenResponse(StripePrivyTokenResponseT&& value) {
    m_stripePrivyTokenResponseHasBeenSet = true;
    m_stripePrivyTokenResponse = std::forward<StripePrivyTokenResponseT>(value);
  }
  template <typename StripePrivyTokenResponseT = StripePrivyTokenResponseOutput>
  PaymentTokenResponseOutput& WithStripePrivyTokenResponse(StripePrivyTokenResponseT&& value) {
    SetStripePrivyTokenResponse(std::forward<StripePrivyTokenResponseT>(value));
    return *this;
  }
  ///@}
 private:
  CoinbaseCdpTokenResponseOutput m_coinbaseCdpTokenResponse;

  StripePrivyTokenResponseOutput m_stripePrivyTokenResponse;
  bool m_coinbaseCdpTokenResponseHasBeenSet = false;
  bool m_stripePrivyTokenResponseHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
