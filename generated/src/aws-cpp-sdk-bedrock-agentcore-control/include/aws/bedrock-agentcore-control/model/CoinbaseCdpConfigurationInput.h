/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Coinbase CDP configuration - credentials provided by Coinbase Developer
 * Platform</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CoinbaseCdpConfigurationInput">AWS
 * API Reference</a></p>
 */
class CoinbaseCdpConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The API key identifier provided by Coinbase Developer Platform.</p>
   */
  inline const Aws::String& GetApiKeyId() const { return m_apiKeyId; }
  inline bool ApiKeyIdHasBeenSet() const { return m_apiKeyIdHasBeenSet; }
  template <typename ApiKeyIdT = Aws::String>
  void SetApiKeyId(ApiKeyIdT&& value) {
    m_apiKeyIdHasBeenSet = true;
    m_apiKeyId = std::forward<ApiKeyIdT>(value);
  }
  template <typename ApiKeyIdT = Aws::String>
  CoinbaseCdpConfigurationInput& WithApiKeyId(ApiKeyIdT&& value) {
    SetApiKeyId(std::forward<ApiKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The API key secret provided by Coinbase Developer Platform.</p>
   */
  inline const Aws::String& GetApiKeySecret() const { return m_apiKeySecret; }
  inline bool ApiKeySecretHasBeenSet() const { return m_apiKeySecretHasBeenSet; }
  template <typename ApiKeySecretT = Aws::String>
  void SetApiKeySecret(ApiKeySecretT&& value) {
    m_apiKeySecretHasBeenSet = true;
    m_apiKeySecret = std::forward<ApiKeySecretT>(value);
  }
  template <typename ApiKeySecretT = Aws::String>
  CoinbaseCdpConfigurationInput& WithApiKeySecret(ApiKeySecretT&& value) {
    SetApiKeySecret(std::forward<ApiKeySecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The wallet secret provided by Coinbase Developer Platform.</p>
   */
  inline const Aws::String& GetWalletSecret() const { return m_walletSecret; }
  inline bool WalletSecretHasBeenSet() const { return m_walletSecretHasBeenSet; }
  template <typename WalletSecretT = Aws::String>
  void SetWalletSecret(WalletSecretT&& value) {
    m_walletSecretHasBeenSet = true;
    m_walletSecret = std::forward<WalletSecretT>(value);
  }
  template <typename WalletSecretT = Aws::String>
  CoinbaseCdpConfigurationInput& WithWalletSecret(WalletSecretT&& value) {
    SetWalletSecret(std::forward<WalletSecretT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKeyId;

  Aws::String m_apiKeySecret;

  Aws::String m_walletSecret;
  bool m_apiKeyIdHasBeenSet = false;
  bool m_apiKeySecretHasBeenSet = false;
  bool m_walletSecretHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
