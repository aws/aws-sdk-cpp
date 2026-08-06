/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/InstanceLifecycleConfiguration.h>
#include <aws/bedrock-agentcore-control/model/LaunchTemplateSource.h>
#include <aws/bedrock-agentcore-control/model/RootVolumeConfiguration.h>
#include <aws/bedrock-agentcore-control/model/VolumeConfiguration.h>
#include <aws/bedrock-agentcore-control/model/VpcConfiguration.h>
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
 * <p>The configuration for Amazon EC2-based compute, including the launch template
 * source, networking, storage volumes, and instance lifecycle
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Ec2Configuration">AWS
 * API Reference</a></p>
 */
class Ec2Configuration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API Ec2Configuration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API Ec2Configuration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Ec2Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source of the launch template configuration that defines how instances
   * are launched.</p>
   */
  inline const LaunchTemplateSource& GetLaunchTemplateSource() const { return m_launchTemplateSource; }
  inline bool LaunchTemplateSourceHasBeenSet() const { return m_launchTemplateSourceHasBeenSet; }
  template <typename LaunchTemplateSourceT = LaunchTemplateSource>
  void SetLaunchTemplateSource(LaunchTemplateSourceT&& value) {
    m_launchTemplateSourceHasBeenSet = true;
    m_launchTemplateSource = std::forward<LaunchTemplateSourceT>(value);
  }
  template <typename LaunchTemplateSourceT = LaunchTemplateSource>
  Ec2Configuration& WithLaunchTemplateSource(LaunchTemplateSourceT&& value) {
    SetLaunchTemplateSource(std::forward<LaunchTemplateSourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The VPC configuration for launching instances, including subnets and security
   * groups.</p>
   */
  inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
  inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
  template <typename VpcConfigurationT = VpcConfiguration>
  void SetVpcConfiguration(VpcConfigurationT&& value) {
    m_vpcConfigurationHasBeenSet = true;
    m_vpcConfiguration = std::forward<VpcConfigurationT>(value);
  }
  template <typename VpcConfigurationT = VpcConfiguration>
  Ec2Configuration& WithVpcConfiguration(VpcConfigurationT&& value) {
    SetVpcConfiguration(std::forward<VpcConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The named persistent Amazon EBS volumes for the capacity provider. A capacity
   * provider can define up to five volumes.</p>
   */
  inline const Aws::Vector<VolumeConfiguration>& GetVolumes() const { return m_volumes; }
  inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
  template <typename VolumesT = Aws::Vector<VolumeConfiguration>>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::Vector<VolumeConfiguration>>
  Ec2Configuration& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  template <typename VolumesT = VolumeConfiguration>
  Ec2Configuration& AddVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes.emplace_back(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle configuration for instances in the capacity provider.</p>
   */
  inline const InstanceLifecycleConfiguration& GetLifecycleConfiguration() const { return m_lifecycleConfiguration; }
  inline bool LifecycleConfigurationHasBeenSet() const { return m_lifecycleConfigurationHasBeenSet; }
  template <typename LifecycleConfigurationT = InstanceLifecycleConfiguration>
  void SetLifecycleConfiguration(LifecycleConfigurationT&& value) {
    m_lifecycleConfigurationHasBeenSet = true;
    m_lifecycleConfiguration = std::forward<LifecycleConfigurationT>(value);
  }
  template <typename LifecycleConfigurationT = InstanceLifecycleConfiguration>
  Ec2Configuration& WithLifecycleConfiguration(LifecycleConfigurationT&& value) {
    SetLifecycleConfiguration(std::forward<LifecycleConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the instance root volume. Specify the amount of free
   * space to guarantee and, optionally, the Amazon EBS performance and encryption
   * settings. The device name and delete-on-termination behavior are not
   * configurable.</p>
   */
  inline const RootVolumeConfiguration& GetRootVolume() const { return m_rootVolume; }
  inline bool RootVolumeHasBeenSet() const { return m_rootVolumeHasBeenSet; }
  template <typename RootVolumeT = RootVolumeConfiguration>
  void SetRootVolume(RootVolumeT&& value) {
    m_rootVolumeHasBeenSet = true;
    m_rootVolume = std::forward<RootVolumeT>(value);
  }
  template <typename RootVolumeT = RootVolumeConfiguration>
  Ec2Configuration& WithRootVolume(RootVolumeT&& value) {
    SetRootVolume(std::forward<RootVolumeT>(value));
    return *this;
  }
  ///@}
 private:
  LaunchTemplateSource m_launchTemplateSource;

  VpcConfiguration m_vpcConfiguration;

  Aws::Vector<VolumeConfiguration> m_volumes;

  InstanceLifecycleConfiguration m_lifecycleConfiguration;

  RootVolumeConfiguration m_rootVolume;
  bool m_launchTemplateSourceHasBeenSet = false;
  bool m_vpcConfigurationHasBeenSet = false;
  bool m_volumesHasBeenSet = false;
  bool m_lifecycleConfigurationHasBeenSet = false;
  bool m_rootVolumeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
