/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/GenerationFilterOperator.h>
#include <aws/bedrock-agentcore/model/GenerationFilterValue.h>
#include <aws/bedrock-agentcore/model/ResultAggregation.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>A condition on a session's evaluation result.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluatorFilter">AWS
 * API Reference</a></p>
 */
class EvaluatorFilter {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluatorFilter() = default;
  AWS_BEDROCKAGENTCORE_API EvaluatorFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluatorFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the evaluator whose result to compare.</p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  EvaluatorFilter& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dimension of the evaluator's result to compare. Required for an evaluator
   * that scores more than one dimension. Don't specify it for any other
   * evaluator.</p>
   */
  inline const Aws::String& GetEvaluationDimensionName() const { return m_evaluationDimensionName; }
  inline bool EvaluationDimensionNameHasBeenSet() const { return m_evaluationDimensionNameHasBeenSet; }
  template <typename EvaluationDimensionNameT = Aws::String>
  void SetEvaluationDimensionName(EvaluationDimensionNameT&& value) {
    m_evaluationDimensionNameHasBeenSet = true;
    m_evaluationDimensionName = std::forward<EvaluationDimensionNameT>(value);
  }
  template <typename EvaluationDimensionNameT = Aws::String>
  EvaluatorFilter& WithEvaluationDimensionName(EvaluationDimensionNameT&& value) {
    SetEvaluationDimensionName(std::forward<EvaluationDimensionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to compare the evaluation result with <code>value</code>.</p>
   */
  inline GenerationFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(GenerationFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline EvaluatorFilter& WithOperator(GenerationFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to compare the evaluation result with. Use <code>doubleValue</code>
   * for a score and <code>stringValue</code> for a label. <code>booleanValue</code>
   * isn't supported.</p>
   */
  inline const GenerationFilterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = GenerationFilterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = GenerationFilterValue>
  EvaluatorFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How to combine the evaluator's per-trace or per-span results into one result
   * for the session. Required for an evaluator that scores traces or spans. Don't
   * specify it for an evaluator that scores sessions.</p>
   */
  inline ResultAggregation GetAggregation() const { return m_aggregation; }
  inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }
  inline void SetAggregation(ResultAggregation value) {
    m_aggregationHasBeenSet = true;
    m_aggregation = value;
  }
  inline EvaluatorFilter& WithAggregation(ResultAggregation value) {
    SetAggregation(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorId;

  Aws::String m_evaluationDimensionName;

  GenerationFilterOperator m_operator{GenerationFilterOperator::NOT_SET};

  GenerationFilterValue m_value;

  ResultAggregation m_aggregation{ResultAggregation::NOT_SET};
  bool m_evaluatorIdHasBeenSet = false;
  bool m_evaluationDimensionNameHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_aggregationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
