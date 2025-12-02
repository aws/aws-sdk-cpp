/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EpisodicReflectionOverride.h>

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
 * <p>Contains configurations for a custom reflection strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomReflectionConfiguration">AWS
 * API Reference</a></p>
 */
class CustomReflectionConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomReflectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a reflection strategy to override the default one.</p>
   */
  inline const EpisodicReflectionOverride& GetEpisodicReflectionOverride() const { return m_episodicReflectionOverride; }
  inline bool EpisodicReflectionOverrideHasBeenSet() const { return m_episodicReflectionOverrideHasBeenSet; }
  template <typename EpisodicReflectionOverrideT = EpisodicReflectionOverride>
  void SetEpisodicReflectionOverride(EpisodicReflectionOverrideT&& value) {
    m_episodicReflectionOverrideHasBeenSet = true;
    m_episodicReflectionOverride = std::forward<EpisodicReflectionOverrideT>(value);
  }
  template <typename EpisodicReflectionOverrideT = EpisodicReflectionOverride>
  CustomReflectionConfiguration& WithEpisodicReflectionOverride(EpisodicReflectionOverrideT&& value) {
    SetEpisodicReflectionOverride(std::forward<EpisodicReflectionOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  EpisodicReflectionOverride m_episodicReflectionOverride;
  bool m_episodicReflectionOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
