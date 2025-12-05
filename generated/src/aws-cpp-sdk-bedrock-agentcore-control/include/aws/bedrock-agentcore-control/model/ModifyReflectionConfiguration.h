/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomReflectionConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/EpisodicReflectionConfigurationInput.h>

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
 * <p>Contains information for modifying a reflection configuration.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ModifyReflectionConfiguration">AWS
 * API Reference</a></p>
 */
class ModifyReflectionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ModifyReflectionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ModifyReflectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ModifyReflectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated episodic reflection configuration.</p>
   */
  inline const EpisodicReflectionConfigurationInput& GetEpisodicReflectionConfiguration() const {
    return m_episodicReflectionConfiguration;
  }
  inline bool EpisodicReflectionConfigurationHasBeenSet() const { return m_episodicReflectionConfigurationHasBeenSet; }
  template <typename EpisodicReflectionConfigurationT = EpisodicReflectionConfigurationInput>
  void SetEpisodicReflectionConfiguration(EpisodicReflectionConfigurationT&& value) {
    m_episodicReflectionConfigurationHasBeenSet = true;
    m_episodicReflectionConfiguration = std::forward<EpisodicReflectionConfigurationT>(value);
  }
  template <typename EpisodicReflectionConfigurationT = EpisodicReflectionConfigurationInput>
  ModifyReflectionConfiguration& WithEpisodicReflectionConfiguration(EpisodicReflectionConfigurationT&& value) {
    SetEpisodicReflectionConfiguration(std::forward<EpisodicReflectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated custom reflection configuration.</p>
   */
  inline const CustomReflectionConfigurationInput& GetCustomReflectionConfiguration() const { return m_customReflectionConfiguration; }
  inline bool CustomReflectionConfigurationHasBeenSet() const { return m_customReflectionConfigurationHasBeenSet; }
  template <typename CustomReflectionConfigurationT = CustomReflectionConfigurationInput>
  void SetCustomReflectionConfiguration(CustomReflectionConfigurationT&& value) {
    m_customReflectionConfigurationHasBeenSet = true;
    m_customReflectionConfiguration = std::forward<CustomReflectionConfigurationT>(value);
  }
  template <typename CustomReflectionConfigurationT = CustomReflectionConfigurationInput>
  ModifyReflectionConfiguration& WithCustomReflectionConfiguration(CustomReflectionConfigurationT&& value) {
    SetCustomReflectionConfiguration(std::forward<CustomReflectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  EpisodicReflectionConfigurationInput m_episodicReflectionConfiguration;

  CustomReflectionConfigurationInput m_customReflectionConfiguration;
  bool m_episodicReflectionConfigurationHasBeenSet = false;
  bool m_customReflectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
