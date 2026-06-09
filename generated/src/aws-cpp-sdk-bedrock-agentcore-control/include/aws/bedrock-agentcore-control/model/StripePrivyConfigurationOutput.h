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
 * <p>Stripe Privy configuration output with secret ARNs.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StripePrivyConfigurationOutput">AWS
 * API Reference</a></p>
 */
class StripePrivyConfigurationOutput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StripePrivyConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  StripePrivyConfigurationOutput& WithAppId(AppIdT&& value) {
    SetAppId(std::forward<AppIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetAppSecretArn() const { return m_appSecretArn; }
  inline bool AppSecretArnHasBeenSet() const { return m_appSecretArnHasBeenSet; }
  template <typename AppSecretArnT = Secret>
  void SetAppSecretArn(AppSecretArnT&& value) {
    m_appSecretArnHasBeenSet = true;
    m_appSecretArn = std::forward<AppSecretArnT>(value);
  }
  template <typename AppSecretArnT = Secret>
  StripePrivyConfigurationOutput& WithAppSecretArn(AppSecretArnT&& value) {
    SetAppSecretArn(std::forward<AppSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON key used to extract the app secret value from the AWS Secrets
   * Manager secret.</p>
   */
  inline const Aws::String& GetAppSecretJsonKey() const { return m_appSecretJsonKey; }
  inline bool AppSecretJsonKeyHasBeenSet() const { return m_appSecretJsonKeyHasBeenSet; }
  template <typename AppSecretJsonKeyT = Aws::String>
  void SetAppSecretJsonKey(AppSecretJsonKeyT&& value) {
    m_appSecretJsonKeyHasBeenSet = true;
    m_appSecretJsonKey = std::forward<AppSecretJsonKeyT>(value);
  }
  template <typename AppSecretJsonKeyT = Aws::String>
  StripePrivyConfigurationOutput& WithAppSecretJsonKey(AppSecretJsonKeyT&& value) {
    SetAppSecretJsonKey(std::forward<AppSecretJsonKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the app secret. Either <code>MANAGED</code> if the secret
   * is managed by the service, or <code>EXTERNAL</code> if managed by the user in
   * AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetAppSecretSource() const { return m_appSecretSource; }
  inline bool AppSecretSourceHasBeenSet() const { return m_appSecretSourceHasBeenSet; }
  inline void SetAppSecretSource(SecretSourceType value) {
    m_appSecretSourceHasBeenSet = true;
    m_appSecretSource = value;
  }
  inline StripePrivyConfigurationOutput& WithAppSecretSource(SecretSourceType value) {
    SetAppSecretSource(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Secret& GetAuthorizationPrivateKeyArn() const { return m_authorizationPrivateKeyArn; }
  inline bool AuthorizationPrivateKeyArnHasBeenSet() const { return m_authorizationPrivateKeyArnHasBeenSet; }
  template <typename AuthorizationPrivateKeyArnT = Secret>
  void SetAuthorizationPrivateKeyArn(AuthorizationPrivateKeyArnT&& value) {
    m_authorizationPrivateKeyArnHasBeenSet = true;
    m_authorizationPrivateKeyArn = std::forward<AuthorizationPrivateKeyArnT>(value);
  }
  template <typename AuthorizationPrivateKeyArnT = Secret>
  StripePrivyConfigurationOutput& WithAuthorizationPrivateKeyArn(AuthorizationPrivateKeyArnT&& value) {
    SetAuthorizationPrivateKeyArn(std::forward<AuthorizationPrivateKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON key used to extract the authorization private key value from the AWS
   * Secrets Manager secret.</p>
   */
  inline const Aws::String& GetAuthorizationPrivateKeyJsonKey() const { return m_authorizationPrivateKeyJsonKey; }
  inline bool AuthorizationPrivateKeyJsonKeyHasBeenSet() const { return m_authorizationPrivateKeyJsonKeyHasBeenSet; }
  template <typename AuthorizationPrivateKeyJsonKeyT = Aws::String>
  void SetAuthorizationPrivateKeyJsonKey(AuthorizationPrivateKeyJsonKeyT&& value) {
    m_authorizationPrivateKeyJsonKeyHasBeenSet = true;
    m_authorizationPrivateKeyJsonKey = std::forward<AuthorizationPrivateKeyJsonKeyT>(value);
  }
  template <typename AuthorizationPrivateKeyJsonKeyT = Aws::String>
  StripePrivyConfigurationOutput& WithAuthorizationPrivateKeyJsonKey(AuthorizationPrivateKeyJsonKeyT&& value) {
    SetAuthorizationPrivateKeyJsonKey(std::forward<AuthorizationPrivateKeyJsonKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the authorization private key. Either <code>MANAGED</code>
   * if the secret is managed by the service, or <code>EXTERNAL</code> if managed by
   * the user in AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetAuthorizationPrivateKeySource() const { return m_authorizationPrivateKeySource; }
  inline bool AuthorizationPrivateKeySourceHasBeenSet() const { return m_authorizationPrivateKeySourceHasBeenSet; }
  inline void SetAuthorizationPrivateKeySource(SecretSourceType value) {
    m_authorizationPrivateKeySourceHasBeenSet = true;
    m_authorizationPrivateKeySource = value;
  }
  inline StripePrivyConfigurationOutput& WithAuthorizationPrivateKeySource(SecretSourceType value) {
    SetAuthorizationPrivateKeySource(value);
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
  StripePrivyConfigurationOutput& WithAuthorizationId(AuthorizationIdT&& value) {
    SetAuthorizationId(std::forward<AuthorizationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_appId;

  Secret m_appSecretArn;

  Aws::String m_appSecretJsonKey;

  SecretSourceType m_appSecretSource{SecretSourceType::NOT_SET};

  Secret m_authorizationPrivateKeyArn;

  Aws::String m_authorizationPrivateKeyJsonKey;

  SecretSourceType m_authorizationPrivateKeySource{SecretSourceType::NOT_SET};

  Aws::String m_authorizationId;
  bool m_appIdHasBeenSet = false;
  bool m_appSecretArnHasBeenSet = false;
  bool m_appSecretJsonKeyHasBeenSet = false;
  bool m_appSecretSourceHasBeenSet = false;
  bool m_authorizationPrivateKeyArnHasBeenSet = false;
  bool m_authorizationPrivateKeyJsonKeyHasBeenSet = false;
  bool m_authorizationPrivateKeySourceHasBeenSet = false;
  bool m_authorizationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
