/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomReflectionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/EpisodicReflectionConfiguration.h>

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
 * <p>Contains reflection configuration information for a memory
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/ReflectionConfiguration">AWS
 * API Reference</a></p>
 */
class ReflectionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API ReflectionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API ReflectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API ReflectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a custom reflection strategy.</p>
   */
  inline const CustomReflectionConfiguration& GetCustomReflectionConfiguration() const { return m_customReflectionConfiguration; }
  inline bool CustomReflectionConfigurationHasBeenSet() const { return m_customReflectionConfigurationHasBeenSet; }
  template <typename CustomReflectionConfigurationT = CustomReflectionConfiguration>
  void SetCustomReflectionConfiguration(CustomReflectionConfigurationT&& value) {
    m_customReflectionConfigurationHasBeenSet = true;
    m_customReflectionConfiguration = std::forward<CustomReflectionConfigurationT>(value);
  }
  template <typename CustomReflectionConfigurationT = CustomReflectionConfiguration>
  ReflectionConfiguration& WithCustomReflectionConfiguration(CustomReflectionConfigurationT&& value) {
    SetCustomReflectionConfiguration(std::forward<CustomReflectionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for the episodic reflection strategy.</p>
   */
  inline const EpisodicReflectionConfiguration& GetEpisodicReflectionConfiguration() const { return m_episodicReflectionConfiguration; }
  inline bool EpisodicReflectionConfigurationHasBeenSet() const { return m_episodicReflectionConfigurationHasBeenSet; }
  template <typename EpisodicReflectionConfigurationT = EpisodicReflectionConfiguration>
  void SetEpisodicReflectionConfiguration(EpisodicReflectionConfigurationT&& value) {
    m_episodicReflectionConfigurationHasBeenSet = true;
    m_episodicReflectionConfiguration = std::forward<EpisodicReflectionConfigurationT>(value);
  }
  template <typename EpisodicReflectionConfigurationT = EpisodicReflectionConfiguration>
  ReflectionConfiguration& WithEpisodicReflectionConfiguration(EpisodicReflectionConfigurationT&& value) {
    SetEpisodicReflectionConfiguration(std::forward<EpisodicReflectionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CustomReflectionConfiguration m_customReflectionConfiguration;

  EpisodicReflectionConfiguration m_episodicReflectionConfiguration;
  bool m_customReflectionConfigurationHasBeenSet = false;
  bool m_episodicReflectionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
