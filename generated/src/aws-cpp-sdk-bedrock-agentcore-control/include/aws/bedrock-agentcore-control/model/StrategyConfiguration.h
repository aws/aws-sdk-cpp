/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ConsolidationConfiguration.h>
#include <aws/bedrock-agentcore-control/model/ExtractionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/OverrideType.h>
#include <aws/bedrock-agentcore-control/model/ReflectionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/SelfManagedConfiguration.h>

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
 * <p>Contains configuration information for a memory strategy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/StrategyConfiguration">AWS
 * API Reference</a></p>
 */
class StrategyConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API StrategyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of override for the strategy configuration.</p>
   */
  inline OverrideType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(OverrideType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline StrategyConfiguration& WithType(OverrideType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extraction configuration for the memory strategy.</p>
   */
  inline const ExtractionConfiguration& GetExtraction() const { return m_extraction; }
  inline bool ExtractionHasBeenSet() const { return m_extractionHasBeenSet; }
  template <typename ExtractionT = ExtractionConfiguration>
  void SetExtraction(ExtractionT&& value) {
    m_extractionHasBeenSet = true;
    m_extraction = std::forward<ExtractionT>(value);
  }
  template <typename ExtractionT = ExtractionConfiguration>
  StrategyConfiguration& WithExtraction(ExtractionT&& value) {
    SetExtraction(std::forward<ExtractionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The consolidation configuration for the memory strategy.</p>
   */
  inline const ConsolidationConfiguration& GetConsolidation() const { return m_consolidation; }
  inline bool ConsolidationHasBeenSet() const { return m_consolidationHasBeenSet; }
  template <typename ConsolidationT = ConsolidationConfiguration>
  void SetConsolidation(ConsolidationT&& value) {
    m_consolidationHasBeenSet = true;
    m_consolidation = std::forward<ConsolidationT>(value);
  }
  template <typename ConsolidationT = ConsolidationConfiguration>
  StrategyConfiguration& WithConsolidation(ConsolidationT&& value) {
    SetConsolidation(std::forward<ConsolidationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reflection configuration for the memory strategy.</p>
   */
  inline const ReflectionConfiguration& GetReflection() const { return m_reflection; }
  inline bool ReflectionHasBeenSet() const { return m_reflectionHasBeenSet; }
  template <typename ReflectionT = ReflectionConfiguration>
  void SetReflection(ReflectionT&& value) {
    m_reflectionHasBeenSet = true;
    m_reflection = std::forward<ReflectionT>(value);
  }
  template <typename ReflectionT = ReflectionConfiguration>
  StrategyConfiguration& WithReflection(ReflectionT&& value) {
    SetReflection(std::forward<ReflectionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Self-managed configuration settings.</p>
   */
  inline const SelfManagedConfiguration& GetSelfManagedConfiguration() const { return m_selfManagedConfiguration; }
  inline bool SelfManagedConfigurationHasBeenSet() const { return m_selfManagedConfigurationHasBeenSet; }
  template <typename SelfManagedConfigurationT = SelfManagedConfiguration>
  void SetSelfManagedConfiguration(SelfManagedConfigurationT&& value) {
    m_selfManagedConfigurationHasBeenSet = true;
    m_selfManagedConfiguration = std::forward<SelfManagedConfigurationT>(value);
  }
  template <typename SelfManagedConfigurationT = SelfManagedConfiguration>
  StrategyConfiguration& WithSelfManagedConfiguration(SelfManagedConfigurationT&& value) {
    SetSelfManagedConfiguration(std::forward<SelfManagedConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  OverrideType m_type{OverrideType::NOT_SET};

  ExtractionConfiguration m_extraction;

  ConsolidationConfiguration m_consolidation;

  ReflectionConfiguration m_reflection;

  SelfManagedConfiguration m_selfManagedConfiguration;
  bool m_typeHasBeenSet = false;
  bool m_extractionHasBeenSet = false;
  bool m_consolidationHasBeenSet = false;
  bool m_reflectionHasBeenSet = false;
  bool m_selfManagedConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
