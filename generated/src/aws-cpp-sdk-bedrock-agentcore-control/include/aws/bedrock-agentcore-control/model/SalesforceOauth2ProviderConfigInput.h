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
 * <p>Input configuration for a Salesforce OAuth2 provider.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SalesforceOauth2ProviderConfigInput">AWS
 * API Reference</a></p>
 */
class SalesforceOauth2ProviderConfigInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SalesforceOauth2ProviderConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client ID for the Salesforce OAuth2 provider.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  SalesforceOauth2ProviderConfigInput& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret for the Salesforce OAuth2 provider.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  SalesforceOauth2ProviderConfigInput& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A reference to the AWS Secrets Manager secret that stores the client secret.
   * This includes the secret ID and the JSON key used to extract the client secret
   * value from the secret. Required when <code>clientSecretSource</code> is set to
   * <code>EXTERNAL</code>.</p>
   */
  inline const SecretReference& GetClientSecretConfig() const { return m_clientSecretConfig; }
  inline bool ClientSecretConfigHasBeenSet() const { return m_clientSecretConfigHasBeenSet; }
  template <typename ClientSecretConfigT = SecretReference>
  void SetClientSecretConfig(ClientSecretConfigT&& value) {
    m_clientSecretConfigHasBeenSet = true;
    m_clientSecretConfig = std::forward<ClientSecretConfigT>(value);
  }
  template <typename ClientSecretConfigT = SecretReference>
  SalesforceOauth2ProviderConfigInput& WithClientSecretConfig(ClientSecretConfigT&& value) {
    SetClientSecretConfig(std::forward<ClientSecretConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source type of the client secret. Use <code>MANAGED</code> if the secret
   * is managed by the service, or <code>EXTERNAL</code> if you manage the secret
   * yourself in AWS Secrets Manager.</p>
   */
  inline SecretSourceType GetClientSecretSource() const { return m_clientSecretSource; }
  inline bool ClientSecretSourceHasBeenSet() const { return m_clientSecretSourceHasBeenSet; }
  inline void SetClientSecretSource(SecretSourceType value) {
    m_clientSecretSourceHasBeenSet = true;
    m_clientSecretSource = value;
  }
  inline SalesforceOauth2ProviderConfigInput& WithClientSecretSource(SecretSourceType value) {
    SetClientSecretSource(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_clientSecret;

  SecretReference m_clientSecretConfig;

  SecretSourceType m_clientSecretSource{SecretSourceType::NOT_SET};
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_clientSecretConfigHasBeenSet = false;
  bool m_clientSecretSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
