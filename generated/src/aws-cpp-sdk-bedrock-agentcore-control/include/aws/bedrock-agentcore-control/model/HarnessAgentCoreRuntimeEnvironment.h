/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/FilesystemConfiguration.h>
#include <aws/bedrock-agentcore-control/model/LifecycleConfiguration.h>
#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
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
 * <p>The AgentCore Runtime environment for a harness.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessAgentCoreRuntimeEnvironment">AWS
 * API Reference</a></p>
 */
class HarnessAgentCoreRuntimeEnvironment {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironment() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironment(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessAgentCoreRuntimeEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the underlying AgentCore Runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeArn() const { return m_agentRuntimeArn; }
  inline bool AgentRuntimeArnHasBeenSet() const { return m_agentRuntimeArnHasBeenSet; }
  template <typename AgentRuntimeArnT = Aws::String>
  void SetAgentRuntimeArn(AgentRuntimeArnT&& value) {
    m_agentRuntimeArnHasBeenSet = true;
    m_agentRuntimeArn = std::forward<AgentRuntimeArnT>(value);
  }
  template <typename AgentRuntimeArnT = Aws::String>
  HarnessAgentCoreRuntimeEnvironment& WithAgentRuntimeArn(AgentRuntimeArnT&& value) {
    SetAgentRuntimeArn(std::forward<AgentRuntimeArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the underlying AgentCore Runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeName() const { return m_agentRuntimeName; }
  inline bool AgentRuntimeNameHasBeenSet() const { return m_agentRuntimeNameHasBeenSet; }
  template <typename AgentRuntimeNameT = Aws::String>
  void SetAgentRuntimeName(AgentRuntimeNameT&& value) {
    m_agentRuntimeNameHasBeenSet = true;
    m_agentRuntimeName = std::forward<AgentRuntimeNameT>(value);
  }
  template <typename AgentRuntimeNameT = Aws::String>
  HarnessAgentCoreRuntimeEnvironment& WithAgentRuntimeName(AgentRuntimeNameT&& value) {
    SetAgentRuntimeName(std::forward<AgentRuntimeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the underlying AgentCore Runtime.</p>
   */
  inline const Aws::String& GetAgentRuntimeId() const { return m_agentRuntimeId; }
  inline bool AgentRuntimeIdHasBeenSet() const { return m_agentRuntimeIdHasBeenSet; }
  template <typename AgentRuntimeIdT = Aws::String>
  void SetAgentRuntimeId(AgentRuntimeIdT&& value) {
    m_agentRuntimeIdHasBeenSet = true;
    m_agentRuntimeId = std::forward<AgentRuntimeIdT>(value);
  }
  template <typename AgentRuntimeIdT = Aws::String>
  HarnessAgentCoreRuntimeEnvironment& WithAgentRuntimeId(AgentRuntimeIdT&& value) {
    SetAgentRuntimeId(std::forward<AgentRuntimeIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const LifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
  inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  void SetLifecycleConfiguration(LifecycleConfigurationT&& value) {
    m_lifecycleConfigurationHasBeenSet = true;
    m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value);
  }
  template <typename LifecycleConfigurationT = LifecycleConfiguration>
  HarnessAgentCoreRuntimeEnvironment& WithLifecycleConfiguration(LifecycleConfigurationT&& value) {
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
  HarnessAgentCoreRuntimeEnvironment& WithNetworkConfiguration(NetworkConfigurationT&& value) {
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
  HarnessAgentCoreRuntimeEnvironment& WithFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    SetFilesystemConfigurations(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  template <typename FilesystemConfigurationsT = FilesystemConfiguration>
  HarnessAgentCoreRuntimeEnvironment& AddFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations.emplace_back(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentRuntimeArn;

  Aws::String m_agentRuntimeName;

  Aws::String m_agentRuntimeId;

  LifecycleConfiguration m_lifecycleConfiguration;

  NetworkConfiguration m_networkConfiguration;

  Aws::Vector<FilesystemConfiguration> m_filesystemConfigurations;
  bool m_agentRuntimeArnHasBeenSet = false;
  bool m_agentRuntimeNameHasBeenSet = false;
  bool m_agentRuntimeIdHasBeenSet = false;
  bool m_lifecycleConfigurationHasBeenSet = false;
  bool m_networkConfigurationHasBeenSet = false;
  bool m_filesystemConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
