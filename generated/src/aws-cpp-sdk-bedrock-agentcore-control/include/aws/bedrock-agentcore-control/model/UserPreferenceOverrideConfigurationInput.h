﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/UserPreferenceOverrideConsolidationConfigurationInput.h>
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
 * <p>Input for user preference override configuration in a memory
 * strategy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/UserPreferenceOverrideConfigurationInput">AWS
 * API Reference</a></p>
 */
class UserPreferenceOverrideConfigurationInput {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceOverrideConfigurationInput() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceOverrideConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API UserPreferenceOverrideConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The extraction configuration for a user preference override.</p>
   */
  inline const UserPreferenceOverrideExtractionConfigurationInput& GetExtraction() const { return m_extraction; }
  inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
  template <typename ExtractionT = UserPreferenceOverrideExtractionConfigurationInput>
  void SetExtraction(ExtractionT&& value) {
    m_extractionHasBeenSet = true;
    m_extraction = std::forward<ExtractionT>(value);
  }
  template <typename ExtractionT = UserPreferenceOverrideExtractionConfigurationInput>
  UserPreferenceOverrideConfigurationInput& WithExtraction(ExtractionT&& value) {
    SetExtraction(std::forward<ExtractionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The consolidation configuration for a user preference override.</p>
   */
  inline const UserPreferenceOverrideConsolidationConfigurationInput& GetConsolidation() const { return m_consolidation; }
  inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
  template <typename ConsolidationT = UserPreferenceOverrideConsolidationConfigurationInput>
  void SetConsolidation(ConsolidationT&& value) {
    m_consolidationHasBeenSet = true;
    m_consolidation = std::forward<ConsolidationT>(value);
  }
  template <typename ConsolidationT = UserPreferenceOverrideConsolidationConfigurationInput>
  UserPreferenceOverrideConfigurationInput& WithConsolidation(ConsolidationT&& value) {
    SetConsolidation(std::forward<ConsolidationT>(value));
    return *this;
  }
  ///@}
 private:
  UserPreferenceOverrideExtractionConfigurationInput m_extraction;
  bool m_extractionHasBeenSet = false;

  UserPreferenceOverrideConsolidationConfigurationInput m_consolidation;
  bool m_consolidationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
