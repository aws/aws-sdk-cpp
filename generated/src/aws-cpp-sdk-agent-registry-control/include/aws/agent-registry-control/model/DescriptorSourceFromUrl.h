/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/RegistryRecordCredentialProviderConfiguration.h>
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
namespace AgentRegistryControl {
namespace Model {

/**
 * <p>URL-based descriptor source configuration, with credential provider
 * configurations for authenticated URL retrieval.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/agent-registry-control-2025-12-01/DescriptorSourceFromUrl">AWS
 * API Reference</a></p>
 */
class DescriptorSourceFromUrl {
 public:
  AWS_AGENTREGISTRYCONTROL_API DescriptorSourceFromUrl() = default;
  AWS_AGENTREGISTRYCONTROL_API DescriptorSourceFromUrl(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API DescriptorSourceFromUrl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_AGENTREGISTRYCONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The URL from which the descriptor content is retrieved.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  DescriptorSourceFromUrl& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The credential providers used to authenticate when fetching descriptor
   * content from the source URL.</p>
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
  DescriptorSourceFromUrl& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
    SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value));
    return *this;
  }
  template <typename CredentialProviderConfigurationsT = RegistryRecordCredentialProviderConfiguration>
  DescriptorSourceFromUrl& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) {
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
}  // namespace AgentRegistryControl
}  // namespace Aws
