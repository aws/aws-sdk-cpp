/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/SecretReference.h>
#include <aws/bedrock-agentcore-control/model/SecretSourceType.h>
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
 * <p>Coinbase CDP configuration — credentials provided by Coinbase Developer
 * Platform.</p><p><h3>See Also:</h3>   <a
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
   * <p>The source type of the API key secret for the Coinbase Developer Platform.
   * Use <code>MANAGED</code> if the secret is managed by the service, or
   * <code>EXTERNAL</code> if you manage the secret yourself in AWS Secrets
   * Manager.</p>
   */
  inline SecretSourceType GetApiKeySecretSource() const { return m_apiKeySecretSource; }
  inline bool ApiKeySecretSourceHasBeenSet() const { return m_apiKeySecretSourceHasBeenSet; }
  inline void SetApiKeySecretSource(SecretSourceType value) {
    m_apiKeySecretSourceHasBeenSet = true;
    m_apiKeySecretSource = value;
  }
  inline CoinbaseCdpConfigurationInput& WithApiKeySecretSource(SecretSourceType value) {
    SetApiKeySecretSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the API key secret.
   * This includes the secret ID and the JSON key used to extract the API key secret
   * value from the secret. Required when <code>apiKeySecretSource</code> is set to
   * <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetApiKeySecretConfig() const { return m_apiKeySecretConfig; }
  inline bool ApiKeySecretConfigHasBeenSet() const { return m_apiKeySecretConfigHasBeenSet; }
  template <typename ApiKeySecretConfigT = SecretReference>
  void SetApiKeySecretConfig(ApiKeySecretConfigT&& value) {
    m_apiKeySecretConfigHasBeenSet = true;
    m_apiKeySecretConfig = std::forward<ApiKeySecretConfigT>(value);
  }
  template <typename ApiKeySecretConfigT = SecretReference>
  CoinbaseCdpConfigurationInput& WithApiKeySecretConfig(ApiKeySecretConfigT&& value) {
    SetApiKeySecretConfig(std::forward<ApiKeySecretConfigT>(value));
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

  ///@{
  /**
   * <p>The source type of the wallet secret for the Coinbase Developer Platform. Use
   * <code>MANAGED</code> if the secret is managed by the service, or
   * <code>EXTERNAL</code> if you manage the secret yourself in AWS Secrets
   * Manager.</p>
   */
  inline SecretSourceType GetWalletSecretSource() const { return m_walletSecretSource; }
  inline bool WalletSecretSourceHasBeenSet() const { return m_walletSecretSourceHasBeenSet; }
  inline void SetWalletSecretSource(SecretSourceType value) {
    m_walletSecretSourceHasBeenSet = true;
    m_walletSecretSource = value;
  }
  inline CoinbaseCdpConfigurationInput& WithWalletSecretSource(SecretSourceType value) {
    SetWalletSecretSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the wallet secret.
   * This includes the secret ID and the JSON key used to extract the wallet secret
   * value from the secret. Required when <code>walletSecretSource</code> is set to
   * <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetWalletSecretConfig() const { return m_walletSecretConfig; }
  inline bool WalletSecretConfigHasBeenSet() const { return m_walletSecretConfigHasBeenSet; }
  template <typename WalletSecretConfigT = SecretReference>
  void SetWalletSecretConfig(WalletSecretConfigT&& value) {
    m_walletSecretConfigHasBeenSet = true;
    m_walletSecretConfig = std::forward<WalletSecretConfigT>(value);
  }
  template <typename WalletSecretConfigT = SecretReference>
  CoinbaseCdpConfigurationInput& WithWalletSecretConfig(WalletSecretConfigT&& value) {
    SetWalletSecretConfig(std::forward<WalletSecretConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKeyId;

  Aws::String m_apiKeySecret;

  SecretSourceType m_apiKeySecretSource{SecretSourceType::NOT_SET};

  SecretReference m_apiKeySecretConfig;

  Aws::String m_walletSecret;

  SecretSourceType m_walletSecretSource{SecretSourceType::NOT_SET};

  SecretReference m_walletSecretConfig;
  bool m_apiKeyIdHasBeenSet = false;
  bool m_apiKeySecretHasBeenSet = false;
  bool m_apiKeySecretSourceHasBeenSet = false;
  bool m_apiKeySecretConfigHasBeenSet = false;
  bool m_walletSecretHasBeenSet = false;
  bool m_walletSecretSourceHasBeenSet = false;
  bool m_walletSecretConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
