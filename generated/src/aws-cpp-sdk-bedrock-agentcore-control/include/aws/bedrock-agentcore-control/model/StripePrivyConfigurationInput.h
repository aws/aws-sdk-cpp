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
 * <p>Stripe Privy configuration — credentials provided by Stripe and
 * Privy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StripePrivyConfigurationInput">AWS
 * API Reference</a></p>
 */
class StripePrivyConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The app ID provided by Privy.</p>
   */
  inline const Aws::String& GetAppId() const { return m_appId; }
  inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
  template <typename AppIdT = Aws::String>
  void SetAppId(AppIdT&& value) {
    m_appIdHasBeenSet = true;
    m_appId = std::forward<AppIdT>(value);
  }
  template <typename AppIdT = Aws::String>
  StripePrivyConfigurationInput& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The app secret provided by Privy.</p>
   */
  inline const Aws::String& GetAppSecret() const { return m_appSecret; }
  inline bool AppSecretHasBeenSet() const { return m_appSecretHasBeenSet; }
  template <typename AppSecretT = Aws::String>
  void SetAppSecret(AppSecretT&& value) {
    m_appSecretHasBeenSet = true;
    m_appSecret = std::forward<AppSecretT>(value);
  }
  template <typename AppSecretT = Aws::String>
  StripePrivyConfigurationInput& WithAppSecret(AppSecretT&& value) {
    SetAppSecret(std::forward<AppSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the app secret. Use <code>MANAGED</code> if the secret is
   * managed by the service, or <code>EXTERNAL</code> if you manage the secret
   * yourself in AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetAppSecretSource() const { return m_appSecretSource; }
  inline bool AppSecretSourceHasBeenSet() const { return m_appSecretSourceHasBeenSet; }
  inline void SetAppSecretSource(SecretSourceType value) {
    m_appSecretSourceHasBeenSet = true;
    m_appSecretSource = value;
  }
  inline StripePrivyConfigurationInput& WithAppSecretSource(SecretSourceType value) {
    SetAppSecretSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the app secret.
   * This includes the secret ID and the JSON key used to extract the app secret
   * value from the secret. Required when <code>appSecretSource</code> is set to
   * <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetAppSecretConfig() const { return m_appSecretConfig; }
  inline bool AppSecretConfigHasBeenSet() const { return m_appSecretConfigHasBeenSet; }
  template <typename AppSecretConfigT = SecretReference>
  void SetAppSecretConfig(AppSecretConfigT&& value) {
    m_appSecretConfigHasBeenSet = true;
    m_appSecretConfig = std::forward<AppSecretConfigT>(value);
  }
  template <typename AppSecretConfigT = SecretReference>
  StripePrivyConfigurationInput& WithAppSecretConfig(AppSecretConfigT&& value) {
    SetAppSecretConfig(std::forward<AppSecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization private key for the Stripe Privy integration.</p>
   */
  inline const Aws::String& GetAuthorizationPrivateKey() const { return m_authorizationPrivateKey; }
  inline bool AuthorizationPrivateKeyHasBeenSet() const { return m_authorizationPrivateKeyHasBeenSet; }
  template <typename AuthorizationPrivateKeyT = Aws::String>
  void SetAuthorizationPrivateKey(AuthorizationPrivateKeyT&& value) {
    m_authorizationPrivateKeyHasBeenSet = true;
    m_authorizationPrivateKey = std::forward<AuthorizationPrivateKeyT>(value);
  }
  template <typename AuthorizationPrivateKeyT = Aws::String>
  StripePrivyConfigurationInput& WithAuthorizationPrivateKey(AuthorizationPrivateKeyT&& value) {
    SetAuthorizationPrivateKey(std::forward<AuthorizationPrivateKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the authorization private key. Use <code>MANAGED</code> if
   * the secret is managed by the service, or <code>EXTERNAL</code> if you manage the
   * secret yourself in AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetAuthorizationPrivateKeySource() const { return m_authorizationPrivateKeySource; }
  inline bool AuthorizationPrivateKeySourceHasBeenSet() const { return m_authorizationPrivateKeySourceHasBeenSet; }
  inline void SetAuthorizationPrivateKeySource(SecretSourceType value) {
    m_authorizationPrivateKeySourceHasBeenSet = true;
    m_authorizationPrivateKeySource = value;
  }
  inline StripePrivyConfigurationInput& WithAuthorizationPrivateKeySource(SecretSourceType value) {
    SetAuthorizationPrivateKeySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the authorization
   * private key. This includes the secret ID and the JSON key used to extract the
   * authorization private key value from the secret. Required when
   * <code>authorizationPrivateKeySource</code> is set to <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetAuthorizationPrivateKeyConfig() const { return m_authorizationPrivateKeyConfig; }
  inline bool AuthorizationPrivateKeyConfigHasBeenSet() const { return m_authorizationPrivateKeyConfigHasBeenSet; }
  template <typename AuthorizationPrivateKeyConfigT = SecretReference>
  void SetAuthorizationPrivateKeyConfig(AuthorizationPrivateKeyConfigT&& value) {
    m_authorizationPrivateKeyConfigHasBeenSet = true;
    m_authorizationPrivateKeyConfig = std::forward<AuthorizationPrivateKeyConfigT>(value);
  }
  template <typename AuthorizationPrivateKeyConfigT = SecretReference>
  StripePrivyConfigurationInput& WithAuthorizationPrivateKeyConfig(AuthorizationPrivateKeyConfigT&& value) {
    SetAuthorizationPrivateKeyConfig(std::forward<AuthorizationPrivateKeyConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization ID for the Stripe Privy integration.</p>
   */
  inline const Aws::String& GetAuthorizationId() const { return m_authorizationId; }
  inline bool AuthorizationIdHasBeenSet() const { return m_authorizationIdHasBeenSet; }
  template <typename AuthorizationIdT = Aws::String>
  void SetAuthorizationId(AuthorizationIdT&& value) {
    m_authorizationIdHasBeenSet = true;
    m_authorizationId = std::forward<AuthorizationIdT>(value);
  }
  template <typename AuthorizationIdT = Aws::String>
  StripePrivyConfigurationInput& WithAuthorizationId(AuthorizationIdT&& value) {
    SetAuthorizationId(std::forward<AuthorizationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appId;

  Aws::String m_appSecret;

  SecretSourceType m_appSecretSource{SecretSourceType::NOT_SET};

  SecretReference m_appSecretConfig;

  Aws::String m_authorizationPrivateKey;

  SecretSourceType m_authorizationPrivateKeySource{SecretSourceType::NOT_SET};

  SecretReference m_authorizationPrivateKeyConfig;

  Aws::String m_authorizationId;
  bool m_appIdHasBeenSet = false;
  bool m_appSecretHasBeenSet = false;
  bool m_appSecretSourceHasBeenSet = false;
  bool m_appSecretConfigHasBeenSet = false;
  bool m_authorizationPrivateKeyHasBeenSet = false;
  bool m_authorizationPrivateKeySourceHasBeenSet = false;
  bool m_authorizationPrivateKeyConfigHasBeenSet = false;
  bool m_authorizationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
