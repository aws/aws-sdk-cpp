/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CoinbaseCdpConfigurationOutput.h>
#include <aws/bedrock-agentcore-control/model/StripePrivyConfigurationOutput.h>

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
 * <p>Provider configuration output — no raw secrets, only ARNs. Varies by vendor
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PaymentProviderConfigurationOutput">AWS
 * API Reference</a></p>
 */
class PaymentProviderConfigurationOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Coinbase CDP configuration.</p>
   */
  inline const CoinbaseCdpConfigurationOutput& GetCoinbaseCdpConfiguration() const { return m_coinbaseCdpConfiguration; }
  inline bool CoinbaseCdpConfigurationHasBeenSet() const { return m_coinbaseCdpConfigurationHasBeenSet; }
  template <typename CoinbaseCdpConfigurationT = CoinbaseCdpConfigurationOutput>
  void SetCoinbaseCdpConfiguration(CoinbaseCdpConfigurationT&& value) {
    m_coinbaseCdpConfigurationHasBeenSet = true;
    m_coinbaseCdpConfiguration = std::forward<CoinbaseCdpConfigurationT>(value);
  }
  template <typename CoinbaseCdpConfigurationT = CoinbaseCdpConfigurationOutput>
  PaymentProviderConfigurationOutput& WithCoinbaseCdpConfiguration(CoinbaseCdpConfigurationT&& value) {
    SetCoinbaseCdpConfiguration(std::forward<CoinbaseCdpConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Stripe Privy configuration.</p>
   */
  inline const StripePrivyConfigurationOutput& GetStripePrivyConfiguration() const { return m_stripePrivyConfiguration; }
  inline bool StripePrivyConfigurationHasBeenSet() const { return m_stripePrivyConfigurationHasBeenSet; }
  template <typename StripePrivyConfigurationT = StripePrivyConfigurationOutput>
  void SetStripePrivyConfiguration(StripePrivyConfigurationT&& value) {
    m_stripePrivyConfigurationHasBeenSet = true;
    m_stripePrivyConfiguration = std::forward<StripePrivyConfigurationT>(value);
  }
  template <typename StripePrivyConfigurationT = StripePrivyConfigurationOutput>
  PaymentProviderConfigurationOutput& WithStripePrivyConfiguration(StripePrivyConfigurationT&& value) {
    SetStripePrivyConfiguration(std::forward<StripePrivyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CoinbaseCdpConfigurationOutput m_coinbaseCdpConfiguration;

  StripePrivyConfigurationOutput m_stripePrivyConfiguration;
  bool m_coinbaseCdpConfigurationHasBeenSet = false;
  bool m_stripePrivyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
