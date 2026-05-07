/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/PaymentCredentialProviderConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The credential provider configuration for a payment connector. Specifies the
 * payment provider type and its associated credential provider.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CredentialsProviderConfiguration">AWS
 * API Reference</a></p>
 */
class CredentialsProviderConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CredentialsProviderConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CredentialsProviderConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CredentialsProviderConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The credential provider configuration for a Coinbase CDP payment
   * connector.</p>
   */
  inline const PaymentCredentialProviderConfiguration& GetCoinbaseCDP() const { return m_coinbaseCDP; }
  inline bool CoinbaseCDPHasBeenSet() const { return m_coinbaseCDPHasBeenSet; }
  template <typename CoinbaseCDPT = PaymentCredentialProviderConfiguration>
  void SetCoinbaseCDP(CoinbaseCDPT&& value) {
    m_coinbaseCDPHasBeenSet = true;
    m_coinbaseCDP = std::forward<CoinbaseCDPT>(value);
  }
  template <typename CoinbaseCDPT = PaymentCredentialProviderConfiguration>
  CredentialsProviderConfiguration& WithCoinbaseCDP(CoinbaseCDPT&& value) {
    SetCoinbaseCDP(std::forward<CoinbaseCDPT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential provider configuration for a Stripe Privy payment
   * connector.</p>
   */
  inline const PaymentCredentialProviderConfiguration& GetStripePrivy() const { return m_stripePrivy; }
  inline bool StripePrivyHasBeenSet() const { return m_stripePrivyHasBeenSet; }
  template <typename StripePrivyT = PaymentCredentialProviderConfiguration>
  void SetStripePrivy(StripePrivyT&& value) {
    m_stripePrivyHasBeenSet = true;
    m_stripePrivy = std::forward<StripePrivyT>(value);
  }
  template <typename StripePrivyT = PaymentCredentialProviderConfiguration>
  CredentialsProviderConfiguration& WithStripePrivy(StripePrivyT&& value) {
    SetStripePrivy(std::forward<StripePrivyT>(value));
    return *this;
  }
  ///@}
 private:
  PaymentCredentialProviderConfiguration m_coinbaseCDP;

  PaymentCredentialProviderConfiguration m_stripePrivy;
  bool m_coinbaseCDPHasBeenSet = false;
  bool m_stripePrivyHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
