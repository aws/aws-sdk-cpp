/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/RegistryRecordCredentialProviderConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration for synchronizing from a URL-based MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FromUrlSynchronizationConfiguration">AWS
 * API Reference</a></p>
 */
class FromUrlSynchronizationConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FromUrlSynchronizationConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FromUrlSynchronizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FromUrlSynchronizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTPS URL of the MCP server to synchronize from.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  FromUrlSynchronizationConfiguration& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional list of credential provider configurations for authenticating with
   * the MCP server. At most one credential provider configuration can be
   * specified.</p>
   */
  inline const Aws::Vector<RegistryRecordCredentialProviderConfiguration>& GetCredentialProviderConfigurations() const {
    return m_credentialProviderConfigurations;
  }
  inline bool CredentialProviderConfigurationsHasBeenSet() const { return m_credentialProviderConfigurationsHasBeenSet; }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<RegistryRecordCredentialProviderConfiguration>>
  void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value);
  }
  template <typename CredentialProviderConfigurationsT = Aws::Vector<RegistryRecordCredentialProviderConfiguration>>
  FromUrlSynchronizationConfiguration& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = RegistryRecordCredentialProviderConfiguration>
  FromUrlSynchronizationConfiguration& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    m_credentialProviderConfigurationsHasBeenSet = true;
    m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_url;

  Aws::Vector<RegistryRecordCredentialProviderConfiguration> m_credentialProviderConfigurations;
  bool m_urlHasBeenSet = false;
  bool m_credentialProviderConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
