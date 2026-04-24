/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EpisodicOverrideReflectionConfigurationInput.h>

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
 * <p>Input for a custom reflection configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomReflectionConfigurationInput">AWS
 * API Reference</a></p>
 */
class CustomReflectionConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The reflection override configuration input.</p>
   */
  inline const EpisodicOverrideReflectionConfigurationInput& GetEpisodicReflectionOverride() const { return m_episodicReflectionOverride; }
  inline bool EpisodicReflectionOverrideHasBeenSet() const { return m_episodicReflectionOverrideHasBeenSet; }
  template <typename EpisodicReflectionOverrideT = EpisodicOverrideReflectionConfigurationInput>
  void SetEpisodicReflectionOverride(EpisodicReflectionOverrideT&& value) {
    m_episodicReflectionOverrideHasBeenSet = true;
    m_episodicReflectionOverride = std::forward<EpisodicReflectionOverrideT>(value);
  }
  template <typename EpisodicReflectionOverrideT = EpisodicOverrideReflectionConfigurationInput>
  CustomReflectionConfigurationInput& WithEpisodicReflectionOverride(EpisodicReflectionOverrideT&& value) {
    SetEpisodicReflectionOverride(std::forward<EpisodicReflectionOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  EpisodicOverrideReflectionConfigurationInput m_episodicReflectionOverride;
  bool m_episodicReflectionOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
