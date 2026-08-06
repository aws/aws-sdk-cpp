/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EbsVolumeConfiguration.h>

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
 * <p>The configuration for a persistent volume attached to a capacity provider.
 * This structure defines the storage backing for the persistent volumes used by
 * agents that run on capacity provider instances.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/VolumeConfiguration">AWS
 * API Reference</a></p>
 */
class VolumeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API VolumeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API VolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API VolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for an Amazon EBS-backed persistent volume.</p>
   */
  inline const EbsVolumeConfiguration& GetEbsConfiguration() const { return m_ebsConfiguration; }
  inline bool EbsConfigurationHasBeenSet() const { return m_ebsConfigurationHasBeenSet; }
  template <typename EbsConfigurationT = EbsVolumeConfiguration>
  void SetEbsConfiguration(EbsConfigurationT&& value) {
    m_ebsConfigurationHasBeenSet = true;
    m_ebsConfiguration = std::forward<EbsConfigurationT>(value);
  }
  template <typename EbsConfigurationT = EbsVolumeConfiguration>
  VolumeConfiguration& WithEbsConfiguration(EbsConfigurationT&& value) {
    SetEbsConfiguration(std::forward<EbsConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EbsVolumeConfiguration m_ebsConfiguration;
  bool m_ebsConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
