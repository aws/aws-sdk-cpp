/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/GenerationSamplingConfig.h>
#include <aws/bedrock-agentcore/model/GenerationSelection.h>
#include <aws/bedrock-agentcore/model/GroundTruthConfig.h>
#include <aws/bedrock-agentcore/model/RedactionConfiguration.h>
#include <aws/bedrock-agentcore/model/TraceSourceConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Settings for generating examples from your agent's traces.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/TraceGenerationSource">AWS
 * API Reference</a></p>
 */
class TraceGenerationSource {
 public:
  AWS_BEDROCKAGENTCORE_API TraceGenerationSource() = default;
  AWS_BEDROCKAGENTCORE_API TraceGenerationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API TraceGenerationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Where to read the sessions from.</p>
   */
  inline const TraceSourceConfig& GetSourceConfig() const { return m_sourceConfig; }
  inline bool SourceConfigHasBeenSet() const { return m_sourceConfigHasBeenSet; }
  template <typename SourceConfigT = TraceSourceConfig>
  void SetSourceConfig(SourceConfigT&& value) {
    m_sourceConfigHasBeenSet = true;
    m_sourceConfig = std::forward<SourceConfigT>(value);
  }
  template <typename SourceConfigT = TraceSourceConfig>
  TraceGenerationSource& WithSourceConfig(SourceConfigT&& value) {
    SetSourceConfig(std::forward<SourceConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to choose sessions from the source. If you don't specify a selection, the
   * generation uses every session in the source and time window that has at most 100
   * turns.</p>
   */
  inline const GenerationSelection& GetSelection() const { return m_selection; }
  inline bool SelectionHasBeenSet() const { return m_selectionHasBeenSet; }
  template <typename SelectionT = GenerationSelection>
  void SetSelection(SelectionT&& value) {
    m_selectionHasBeenSet = true;
    m_selection = std::forward<SelectionT>(value);
  }
  template <typename SelectionT = GenerationSelection>
  TraceGenerationSource& WithSelection(SelectionT&& value) {
    SetSelection(std::forward<SelectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How many scenarios to generate from the selected sessions.</p>
   */
  inline const GenerationSamplingConfig& GetSampling() const { return m_sampling; }
  inline bool SamplingHasBeenSet() const { return m_samplingHasBeenSet; }
  template <typename SamplingT = GenerationSamplingConfig>
  void SetSampling(SamplingT&& value) {
    m_samplingHasBeenSet = true;
    m_sampling = std::forward<SamplingT>(value);
  }
  template <typename SamplingT = GenerationSamplingConfig>
  TraceGenerationSource& WithSampling(SamplingT&& value) {
    SetSampling(std::forward<SamplingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reference fields to copy from the sessions into the examples. If you don't
   * specify this, the examples have no reference fields.</p>
   */
  inline const GroundTruthConfig& GetGroundTruth() const { return m_groundTruth; }
  inline bool GroundTruthHasBeenSet() const { return m_groundTruthHasBeenSet; }
  template <typename GroundTruthT = GroundTruthConfig>
  void SetGroundTruth(GroundTruthT&& value) {
    m_groundTruthHasBeenSet = true;
    m_groundTruth = std::forward<GroundTruthT>(value);
  }
  template <typename GroundTruthT = GroundTruthConfig>
  TraceGenerationSource& WithGroundTruth(GroundTruthT&& value) {
    SetGroundTruth(std::forward<GroundTruthT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sensitive data to mask in the examples. If you don't specify this, nothing is
   * redacted.</p>
   */
  inline const RedactionConfiguration& GetRedactionConfiguration() const { return m_redactionConfiguration; }
  inline bool RedactionConfigurationHasBeenSet() const { return m_redactionConfigurationHasBeenSet; }
  template <typename RedactionConfigurationT = RedactionConfiguration>
  void SetRedactionConfiguration(RedactionConfigurationT&& value) {
    m_redactionConfigurationHasBeenSet = true;
    m_redactionConfiguration = std::forward<RedactionConfigurationT>(value);
  }
  template <typename RedactionConfigurationT = RedactionConfiguration>
  TraceGenerationSource& WithRedactionConfiguration(RedactionConfigurationT&& value) {
    SetRedactionConfiguration(std::forward<RedactionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TraceSourceConfig m_sourceConfig;

  GenerationSelection m_selection;

  GenerationSamplingConfig m_sampling;

  GroundTruthConfig m_groundTruth;

  RedactionConfiguration m_redactionConfiguration;
  bool m_sourceConfigHasBeenSet = false;
  bool m_selectionHasBeenSet = false;
  bool m_samplingHasBeenSet = false;
  bool m_groundTruthHasBeenSet = false;
  bool m_redactionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
