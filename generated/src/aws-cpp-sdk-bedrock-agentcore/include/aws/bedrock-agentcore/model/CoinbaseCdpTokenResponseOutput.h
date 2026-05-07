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
 * <p>Coinbase CDP token response</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CoinbaseCdpTokenResponseOutput">AWS
 * API Reference</a></p>
 */
class CoinbaseCdpTokenResponseOutput {
 public:
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenResponseOutput() = default;
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenResponseOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CoinbaseCdpTokenResponseOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Bearer Token for Authorization header</p>
   */
  inline const Aws::String& GetBearerToken() const { return m_bearerToken; }
  inline bool BearerTokenHasBeenSet() const { return m_bearerTokenHasBeenSet; }
  template <typename BearerTokenT = Aws::String>
  void SetBearerToken(BearerTokenT&& value) {
    m_bearerTokenHasBeenSet = true;
    m_bearerToken = std::forward<BearerTokenT>(value);
  }
  template <typename BearerTokenT = Aws::String>
  CoinbaseCdpTokenResponseOutput& WithBearerToken(BearerTokenT&& value) {
    SetBearerToken(std::forward<BearerTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Wallet Auth Token for X-Wallet-Auth header</p>
   */
  inline const Aws::String& GetWalletAuthToken() const { return m_walletAuthToken; }
  inline bool WalletAuthTokenHasBeenSet() const { return m_walletAuthTokenHasBeenSet; }
  template <typename WalletAuthTokenT = Aws::String>
  void SetWalletAuthToken(WalletAuthTokenT&& value) {
    m_walletAuthTokenHasBeenSet = true;
    m_walletAuthToken = std::forward<WalletAuthTokenT>(value);
  }
  template <typename WalletAuthTokenT = Aws::String>
  CoinbaseCdpTokenResponseOutput& WithWalletAuthToken(WalletAuthTokenT&& value) {
    SetWalletAuthToken(std::forward<WalletAuthTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bearerToken;

  Aws::String m_walletAuthToken;
  bool m_bearerTokenHasBeenSet = false;
  bool m_walletAuthTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
