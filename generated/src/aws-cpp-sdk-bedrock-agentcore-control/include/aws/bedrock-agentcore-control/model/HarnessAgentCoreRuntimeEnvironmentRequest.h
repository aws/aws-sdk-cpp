/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FilesystemConfiguration.h>
#include <aws/bedrock-agentcore-control/model/LifecycleConfiguration.h>
#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
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
 * <p>The AgentCore Runtime environment request configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessAgentCoreRuntimeEnvironmentRequest">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreRuntimeEnvironmentRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironmentRequest() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironmentRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironmentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const LifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
  inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  void SetLifecycleConfiguration(LifecycleConfigurationT&& value) {
    m_lifecycleConfigurationHasBeenSet = true;
    m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value);
  }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  HarnessAgentCoreRuntimeEnvironmentRequest& WithLifecycleConfiguration(LifecycleConfigurationT&& value) {
    SetLifecycleConfiguration(std::forward<LifecycleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NetworkConfiguration& GetNetworkConfiguration() const { return m_networkConfiguration; }
  inline bool NetworkConfigurationHasBeenSet() const { return m_networkConfigurationHasBeenSet; }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  void SetNetworkConfiguration(NetworkConfigurationT&& value) {
    m_networkConfigurationHasBeenSet = true;
    m_networkConfiguration = std::forward<NetworkConfigurationT>(value);
  }
  template <typename NetworkConfigurationT = NetworkConfiguration>
  HarnessAgentCoreRuntimeEnvironmentRequest& WithNetworkConfiguration(NetworkConfigurationT&& value) {
    SetNetworkConfiguration(std::forward<NetworkConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filesystem configurations for the runtime environment.</p>
   */
  inline const Aws::Vector<FilesystemConfiguration>& GetFilesystemConfigurations() const { return m_filesystemConfigurations; }
  inline bool FilesystemConfigurationsHasBeenSet() const { return m_filesystemConfigurationsHasBeenSet; }
  template <typename FilesystemConfigurationsT = Aws::Vector<FilesystemConfiguration>>
  void SetFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations = std::forward<FilesystemConfigurationsT>(value);
  }
  template <typename FilesystemConfigurationsT = Aws::Vector<FilesystemConfiguration>>
  HarnessAgentCoreRuntimeEnvironmentRequest& WithFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    SetFilesystemConfigurations(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  template <typename FilesystemConfigurationsT = FilesystemConfiguration>
  HarnessAgentCoreRuntimeEnvironmentRequest& AddFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations.emplace_back(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  LifecycleConfiguration m_lifecycleConfiguration;

  NetworkConfiguration m_networkConfiguration;

  Aws::Vector<FilesystemConfiguration> m_filesystemConfigurations;
  bool m_lifecycleConfigurationHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_filesystemConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
