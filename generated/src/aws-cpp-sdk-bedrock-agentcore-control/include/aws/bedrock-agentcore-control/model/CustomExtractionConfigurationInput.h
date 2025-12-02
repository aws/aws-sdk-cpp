/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EpisodicOverrideExtractionConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/SemanticOverrideExtractionConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceOverrideExtractionConfigurationInput.h>

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
 * <p>Input for a custom extraction configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CustomExtractionConfigurationInput">AWS
 * API Reference</a></p>
 */
class CustomExtractionConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CustomExtractionConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The semantic extraction override configuration input.</p>
   */
  inline const SemanticOverrideExtractionConfigurationInput& GetSemanticExtractionOverride() const { return m_semanticExtractionOverride; }
  inline bool SemanticExtractionOverrideHasBeenSet() const { return m_semanticExtractionOverrideHasBeenSet; }
  template <typename SemanticExtractionOverrideT = SemanticOverrideExtractionConfigurationInput>
  void SetSemanticExtractionOverride(SemanticExtractionOverrideT&& value) {
    m_semanticExtractionOverrideHasBeenSet = true;
    m_semanticExtractionOverride = std::forward<SemanticExtractionOverrideT>(value);
  }
  template <typename SemanticExtractionOverrideT = SemanticOverrideExtractionConfigurationInput>
  CustomExtractionConfigurationInput& WithSemanticExtractionOverride(SemanticExtractionOverrideT&& value) {
    SetSemanticExtractionOverride(std::forward<SemanticExtractionOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user preference extraction override configuration input.</p>
   */
  inline const UserPreferenceOverrideExtractionConfigurationInput& GetUserPreferenceExtractionOverride() const {
    return m_userPreferenceExtractionOverride;
  }
  inline bool UserPreferenceExtractionOverrideHasBeenSet() const { return m_userPreferenceExtractionOverrideHasBeenSet; }
  template <typename UserPreferenceExtractionOverrideT = UserPreferenceOverrideExtractionConfigurationInput>
  void SetUserPreferenceExtractionOverride(UserPreferenceExtractionOverrideT&& value) {
    m_userPreferenceExtractionOverrideHasBeenSet = true;
    m_userPreferenceExtractionOverride = std::forward<UserPreferenceExtractionOverrideT>(value);
  }
  template <typename UserPreferenceExtractionOverrideT = UserPreferenceOverrideExtractionConfigurationInput>
  CustomExtractionConfigurationInput& WithUserPreferenceExtractionOverride(UserPreferenceExtractionOverrideT&& value) {
    SetUserPreferenceExtractionOverride(std::forward<UserPreferenceExtractionOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configurations to override the extraction step of the episodic strategy.</p>
   */
  inline const EpisodicOverrideExtractionConfigurationInput& GetEpisodicExtractionOverride() const { return m_episodicExtractionOverride; }
  inline bool EpisodicExtractionOverrideHasBeenSet() const { return m_episodicExtractionOverrideHasBeenSet; }
  template <typename EpisodicExtractionOverrideT = EpisodicOverrideExtractionConfigurationInput>
  void SetEpisodicExtractionOverride(EpisodicExtractionOverrideT&& value) {
    m_episodicExtractionOverrideHasBeenSet = true;
    m_episodicExtractionOverride = std::forward<EpisodicExtractionOverrideT>(value);
  }
  template <typename EpisodicExtractionOverrideT = EpisodicOverrideExtractionConfigurationInput>
  CustomExtractionConfigurationInput& WithEpisodicExtractionOverride(EpisodicExtractionOverrideT&& value) {
    SetEpisodicExtractionOverride(std::forward<EpisodicExtractionOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  SemanticOverrideExtractionConfigurationInput m_semanticExtractionOverride;
  bool m_semanticExtractionOverrideHasBeenSet = false;

  UserPreferenceOverrideExtractionConfigurationInput m_userPreferenceExtractionOverride;
  bool m_userPreferenceExtractionOverrideHasBeenSet = false;

  EpisodicOverrideExtractionConfigurationInput m_episodicExtractionOverride;
  bool m_episodicExtractionOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
