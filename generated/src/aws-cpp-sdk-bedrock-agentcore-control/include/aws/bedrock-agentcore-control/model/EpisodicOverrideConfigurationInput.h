/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/EpisodicOverrideConsolidationConfigurationInput.h>
#include <aws/bedrock-agentcore-control/model/EpisodicOverrideExtractionConfigurationInput.h>
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
 * <p>Input for the configuration to override the episodic memory
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/EpisodicOverrideConfigurationInput">AWS
 * API Reference</a></p>
 */
class EpisodicOverrideConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API EpisodicOverrideConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Contains configurations for overriding the extraction step of the episodic
   * memory strategy.</p>
   */
  inline const EpisodicOverrideExtractionConfigurationInput& GetExtraction() const { return m_extraction; }
  inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
  template <typename ExtractionT = EpisodicOverrideExtractionConfigurationInput>
  void SetExtraction(ExtractionT&& value) {
    m_extractionHasBeenSet = true;
    m_extraction = std::forward<ExtractionT>(value);
  }
  template <typename ExtractionT = EpisodicOverrideExtractionConfigurationInput>
  EpisodicOverrideConfigurationInput& WithExtraction(ExtractionT&& value) {
    SetExtraction(std::forward<ExtractionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains configurations for overriding the consolidation step of the episodic
   * memory strategy.</p>
   */
  inline const EpisodicOverrideConsolidationConfigurationInput& GetConsolidation() const { return m_consolidation; }
  inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
  template <typename ConsolidationT = EpisodicOverrideConsolidationConfigurationInput>
  void SetConsolidation(ConsolidationT&& value) {
    m_consolidationHasBeenSet = true;
    m_consolidation = std::forward<ConsolidationT>(value);
  }
  template <typename ConsolidationT = EpisodicOverrideConsolidationConfigurationInput>
  EpisodicOverrideConfigurationInput& WithConsolidation(ConsolidationT&& value) {
    SetConsolidation(std::forward<ConsolidationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains configurations for overriding the reflection step of the episodic
   * memory strategy.</p>
   */
  inline const EpisodicOverrideReflectionConfigurationInput& GetReflection() const { return m_reflection; }
  inline bool ReflectionHasBeenSet() const { return m_reflectionHasBeenSet; }
  template <typename ReflectionT = EpisodicOverrideReflectionConfigurationInput>
  void SetReflection(ReflectionT&& value) {
    m_reflectionHasBeenSet = true;
    m_reflection = std::forward<ReflectionT>(value);
  }
  template <typename ReflectionT = EpisodicOverrideReflectionConfigurationInput>
  EpisodicOverrideConfigurationInput& WithReflection(ReflectionT&& value) {
    SetReflection(std::forward<ReflectionT>(value));
    return *this;
  }
  ///@}
 private:
  EpisodicOverrideExtractionConfigurationInput m_extraction;
  bool m_extractionHasBeenSet = false;

  EpisodicOverrideConsolidationConfigurationInput m_consolidation;
  bool m_consolidationHasBeenSet = false;

  EpisodicOverrideReflectionConfigurationInput m_reflection;
  bool m_reflectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
