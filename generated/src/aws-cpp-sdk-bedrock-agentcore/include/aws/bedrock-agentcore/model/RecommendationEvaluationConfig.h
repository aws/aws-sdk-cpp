/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/RecommendationEvaluatorReference.h>
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
 * <p>The evaluation configuration for assessing recommendation
 * quality.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/RecommendationEvaluationConfig">AWS
 * API Reference</a></p>
 */
class RecommendationEvaluationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API RecommendationEvaluationConfig() = default;
  AWS_BEDROCKAGENTCORE_API RecommendationEvaluationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API RecommendationEvaluationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of evaluators to use for assessing recommendation quality.</p>
   */
  inline const Aws::Vector<RecommendationEvaluatorReference>& GetEvaluators() const { return m_evaluators; }
  inline bool EvaluatorsHasBeenSet() const { return m_evaluatorsHasBeenSet; }
  template <typename EvaluatorsT = Aws::Vector<RecommendationEvaluatorReference>>
  void SetEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators = std::forward<EvaluatorsT>(value);
  }
  template <typename EvaluatorsT = Aws::Vector<RecommendationEvaluatorReference>>
  RecommendationEvaluationConfig& WithEvaluators(EvaluatorsT&& value) {
    SetEvaluators(std::forward<EvaluatorsT>(value));
    return *this;
  }
  template <typename EvaluatorsT = RecommendationEvaluatorReference>
  RecommendationEvaluationConfig& AddEvaluators(EvaluatorsT&& value) {
    m_evaluatorsHasBeenSet = true;
    m_evaluators.emplace_back(std::forward<EvaluatorsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RecommendationEvaluatorReference> m_evaluators;
  bool m_evaluatorsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
