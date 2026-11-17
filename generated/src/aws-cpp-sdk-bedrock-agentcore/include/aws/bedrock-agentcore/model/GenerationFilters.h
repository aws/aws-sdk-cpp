/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluatorFilter.h>
#include <aws/bedrock-agentcore/model/GenerationAttributeFilter.h>
#include <aws/bedrock-agentcore/model/TurnCountRange.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Conditions that a session must meet to be selected. A session must meet every
 * condition you specify. Attribute and turn count filters work with any source.
 * Evaluator filters need a source that has evaluation results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationFilters">AWS
 * API Reference</a></p>
 */
class GenerationFilters {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationFilters() = default;
  AWS_BEDROCKAGENTCORE_API GenerationFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Attribute conditions, up to 5. A session must meet all of them. An attribute
   * on a span matches when any span in the session meets the condition.</p>
   */
  inline const Aws::Vector<GenerationAttributeFilter>& GetAttributeFilters() const { return m_attributeFilters; }
  inline bool AttributeFiltersHasBeenSet() const { return m_attributeFiltersHasBeenSet; }
  template <typename AttributeFiltersT = Aws::Vector<GenerationAttributeFilter>>
  void SetAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters = std::forward<AttributeFiltersT>(value);
  }
  template <typename AttributeFiltersT = Aws::Vector<GenerationAttributeFilter>>
  GenerationFilters& WithAttributeFilters(AttributeFiltersT&& value) {
    SetAttributeFilters(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  template <typename AttributeFiltersT = GenerationAttributeFilter>
  GenerationFilters& AddAttributeFilters(AttributeFiltersT&& value) {
    m_attributeFiltersHasBeenSet = true;
    m_attributeFilters.emplace_back(std::forward<AttributeFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The range of turns a session can have. For example, set <code>max</code> to 1
   * for single-turn sessions only, or <code>min</code> to 2 for multi-turn sessions
   * only. Sessions with more than 100 turns are never selected.</p>
   */
  inline const TurnCountRange& GetTurnCount() const { return m_turnCount; }
  inline bool TurnCountHasBeenSet() const { return m_turnCountHasBeenSet; }
  template <typename TurnCountT = TurnCountRange>
  void SetTurnCount(TurnCountT&& value) {
    m_turnCountHasBeenSet = true;
    m_turnCount = std::forward<TurnCountT>(value);
  }
  template <typename TurnCountT = TurnCountRange>
  GenerationFilters& WithTurnCount(TurnCountT&& value) {
    SetTurnCount(std::forward<TurnCountT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Conditions on evaluation results, up to 10. A session must meet all of them.
   * You can use these only with an <code>onlineEvaluation</code> or
   * <code>batchEvaluation</code> source. A <code>cloudWatchLogs</code> source has no
   * evaluation results.</p>
   */
  inline const Aws::Vector<EvaluatorFilter>& GetEvaluatorFilters() const { return m_evaluatorFilters; }
  inline bool EvaluatorFiltersHasBeenSet() const { return m_evaluatorFiltersHasBeenSet; }
  template <typename EvaluatorFiltersT = Aws::Vector<EvaluatorFilter>>
  void SetEvaluatorFilters(EvaluatorFiltersT&& value) {
    m_evaluatorFiltersHasBeenSet = true;
    m_evaluatorFilters = std::forward<EvaluatorFiltersT>(value);
  }
  template <typename EvaluatorFiltersT = Aws::Vector<EvaluatorFilter>>
  GenerationFilters& WithEvaluatorFilters(EvaluatorFiltersT&& value) {
    SetEvaluatorFilters(std::forward<EvaluatorFiltersT>(value));
    return *this;
  }
  template <typename EvaluatorFiltersT = EvaluatorFilter>
  GenerationFilters& AddEvaluatorFilters(EvaluatorFiltersT&& value) {
    m_evaluatorFiltersHasBeenSet = true;
    m_evaluatorFilters.emplace_back(std::forward<EvaluatorFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GenerationAttributeFilter> m_attributeFilters;

  TurnCountRange m_turnCount;

  Aws::Vector<EvaluatorFilter> m_evaluatorFilters;
  bool m_attributeFiltersHasBeenSet = false;
  bool m_turnCountHasBeenSet = false;
  bool m_evaluatorFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
