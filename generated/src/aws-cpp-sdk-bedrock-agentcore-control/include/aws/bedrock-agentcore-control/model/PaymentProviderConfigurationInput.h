/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CoinbaseCdpConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/StripePrivyConfigurationInput.h>

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
 * <p>Provider configuration input — contains secrets for creation and update.
 * Varies by vendor type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/PaymentProviderConfigurationInput">AWS
 * API Reference</a></p>
 */
class PaymentProviderConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API PaymentProviderConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Coinbase CDP configuration.</p>
   */
  inline const CoinbaseCdpConfigurationInput& GetCoinbaseCdpConfiguration() const { return m_coinbaseCdpConfiguration; }
  inline bool CoinbaseCdpConfigurationHasBeenSet() const { return m_coinbaseCdpConfigurationHasBeenSet; }
  template <typename CoinbaseCdpConfigurationT = CoinbaseCdpConfigurationInput>
  void SetCoinbaseCdpConfiguration(CoinbaseCdpConfigurationT&& value) {
    m_coinbaseCdpConfigurationHasBeenSet = true;
    m_coinbaseCdpConfiguration = std::forward<CoinbaseCdpConfigurationT>(value);
  }
  template <typename CoinbaseCdpConfigurationT = CoinbaseCdpConfigurationInput>
  PaymentProviderConfigurationInput& WithCoinbaseCdpConfiguration(CoinbaseCdpConfigurationT&& value) {
    SetCoinbaseCdpConfiguration(std::forward<CoinbaseCdpConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Stripe Privy configuration.</p>
   */
  inline const StripePrivyConfigurationInput& GetStripePrivyConfiguration() const { return m_stripePrivyConfiguration; }
  inline bool StripePrivyConfigurationHasBeenSet() const { return m_stripePrivyConfigurationHasBeenSet; }
  template <typename StripePrivyConfigurationT = StripePrivyConfigurationInput>
  void SetStripePrivyConfiguration(StripePrivyConfigurationT&& value) {
    m_stripePrivyConfigurationHasBeenSet = true;
    m_stripePrivyConfiguration = std::forward<StripePrivyConfigurationT>(value);
  }
  template <typename StripePrivyConfigurationT = StripePrivyConfigurationInput>
  PaymentProviderConfigurationInput& WithStripePrivyConfiguration(StripePrivyConfigurationT&& value) {
    SetStripePrivyConfiguration(std::forward<StripePrivyConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CoinbaseCdpConfigurationInput m_coinbaseCdpConfiguration;

  StripePrivyConfigurationInput m_stripePrivyConfiguration;
  bool m_coinbaseCdpConfigurationHasBeenSet = false;
  bool m_stripePrivyConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
