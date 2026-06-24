/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/Secret.h>
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
 * <p>Coinbase CDP configuration output with secret ARNs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CoinbaseCdpConfigurationOutput">AWS
 * API Reference</a></p>
 */
class CoinbaseCdpConfigurationOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CoinbaseCdpConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  CoinbaseCdpConfigurationOutput& WithApiKeyId(ApiKeyIdT&& value) {
    SetApiKeyId(std::forward<ApiKeyIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetApiKeySecretArn() const { return m_apiKeySecretArn; }
  inline bool ApiKeySecretArnHasBeenSet() const { return m_apiKeySecretArnHasBeenSet; }
  template <typename ApiKeySecretArnT = Secret>
  void SetApiKeySecretArn(ApiKeySecretArnT&& value) {
    m_apiKeySecretArnHasBeenSet = true;
    m_apiKeySecretArn = std::forward<ApiKeySecretArnT>(value);
  }
  template <typename ApiKeySecretArnT = Secret>
  CoinbaseCdpConfigurationOutput& WithApiKeySecretArn(ApiKeySecretArnT&& value) {
    SetApiKeySecretArn(std::forward<ApiKeySecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON key used to extract the API key secret value from the Amazon Web
   * Services Secrets Manager secret.</p>
   */
  inline const Aws::String& GetApiKeySecretJsonKey() const { return m_apiKeySecretJsonKey; }
  inline bool ApiKeySecretJsonKeyHasBeenSet() const { return m_apiKeySecretJsonKeyHasBeenSet; }
  template <typename ApiKeySecretJsonKeyT = Aws::String>
  void SetApiKeySecretJsonKey(ApiKeySecretJsonKeyT&& value) {
    m_apiKeySecretJsonKeyHasBeenSet = true;
    m_apiKeySecretJsonKey = std::forward<ApiKeySecretJsonKeyT>(value);
  }
  template <typename ApiKeySecretJsonKeyT = Aws::String>
  CoinbaseCdpConfigurationOutput& WithApiKeySecretJsonKey(ApiKeySecretJsonKeyT&& value) {
    SetApiKeySecretJsonKey(std::forward<ApiKeySecretJsonKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the API key secret. Either <code>MANAGED</code> if the
   * secret is managed by the service, or <code>EXTERNAL</code> if managed by the
   * user in Amazon Web Services Secrets Manager.</p>
   */
  inline SecretSourceType GetApiKeySecretSource() const { return m_apiKeySecretSource; }
  inline bool ApiKeySecretSourceHasBeenSet() const { return m_apiKeySecretSourceHasBeenSet; }
  inline void SetApiKeySecretSource(SecretSourceType value) {
    m_apiKeySecretSourceHasBeenSet = true;
    m_apiKeySecretSource = value;
  }
  inline CoinbaseCdpConfigurationOutput& WithApiKeySecretSource(SecretSourceType value) {
    SetApiKeySecretSource(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetWalletSecretArn() const { return m_walletSecretArn; }
  inline bool WalletSecretArnHasBeenSet() const { return m_walletSecretArnHasBeenSet; }
  template <typename WalletSecretArnT = Secret>
  void SetWalletSecretArn(WalletSecretArnT&& value) {
    m_walletSecretArnHasBeenSet = true;
    m_walletSecretArn = std::forward<WalletSecretArnT>(value);
  }
  template <typename WalletSecretArnT = Secret>
  CoinbaseCdpConfigurationOutput& WithWalletSecretArn(WalletSecretArnT&& value) {
    SetWalletSecretArn(std::forward<WalletSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON key used to extract the wallet secret value from the Amazon Web
   * Services Secrets Manager secret.</p>
   */
  inline const Aws::String& GetWalletSecretJsonKey() const { return m_walletSecretJsonKey; }
  inline bool WalletSecretJsonKeyHasBeenSet() const { return m_walletSecretJsonKeyHasBeenSet; }
  template <typename WalletSecretJsonKeyT = Aws::String>
  void SetWalletSecretJsonKey(WalletSecretJsonKeyT&& value) {
    m_walletSecretJsonKeyHasBeenSet = true;
    m_walletSecretJsonKey = std::forward<WalletSecretJsonKeyT>(value);
  }
  template <typename WalletSecretJsonKeyT = Aws::String>
  CoinbaseCdpConfigurationOutput& WithWalletSecretJsonKey(WalletSecretJsonKeyT&& value) {
    SetWalletSecretJsonKey(std::forward<WalletSecretJsonKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the wallet secret. Either <code>MANAGED</code> if the
   * secret is managed by the service, or <code>EXTERNAL</code> if managed by the
   * user in Amazon Web Services Secrets Manager.</p>
   */
  inline SecretSourceType GetWalletSecretSource() const { return m_walletSecretSource; }
  inline bool WalletSecretSourceHasBeenSet() const { return m_walletSecretSourceHasBeenSet; }
  inline void SetWalletSecretSource(SecretSourceType value) {
    m_walletSecretSourceHasBeenSet = true;
    m_walletSecretSource = value;
  }
  inline CoinbaseCdpConfigurationOutput& WithWalletSecretSource(SecretSourceType value) {
    SetWalletSecretSource(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_apiKeyId;

  Secret m_apiKeySecretArn;

  Aws::String m_apiKeySecretJsonKey;

  SecretSourceType m_apiKeySecretSource{SecretSourceType::NOT_SET};

  Secret m_walletSecretArn;

  Aws::String m_walletSecretJsonKey;

  SecretSourceType m_walletSecretSource{SecretSourceType::NOT_SET};
  bool m_apiKeyIdHasBeenSet = false;
  bool m_apiKeySecretArnHasBeenSet = false;
  bool m_apiKeySecretJsonKeyHasBeenSet = false;
  bool m_apiKeySecretSourceHasBeenSet = false;
  bool m_walletSecretArnHasBeenSet = false;
  bool m_walletSecretJsonKeyHasBeenSet = false;
  bool m_walletSecretSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
