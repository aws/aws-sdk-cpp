/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ControlStats.h>
#include <aws/bedrock-agentcore/model/VariantResult.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
 * <p>Statistical metrics for a single evaluator comparing control and treatment
 * variants.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluatorMetric">AWS
 * API Reference</a></p>
 */
class EvaluatorMetric {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluatorMetric() = default;
  AWS_BEDROCKAGENTCORE_API EvaluatorMetric(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluatorMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the evaluator.</p>
   */
  inline const Aws::String& GetEvaluatorArn() const { return m_evaluatorArn; }
  inline bool EvaluatorArnHasBeenSet() const { return m_evaluatorArnHasBeenSet; }
  template <typename EvaluatorArnT = Aws::String>
  void SetEvaluatorArn(EvaluatorArnT&& value) {
    m_evaluatorArnHasBeenSet = true;
    m_evaluatorArn = std::forward<EvaluatorArnT>(value);
  }
  template <typename EvaluatorArnT = Aws::String>
  EvaluatorMetric& WithEvaluatorArn(EvaluatorArnT&& value) {
    SetEvaluatorArn(std::forward<EvaluatorArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The statistics for the control variant.</p>
   */
  inline const ControlStats& GetControlStats() const { return m_controlStats; }
  inline bool ControlStatsHasBeenSet() const { return m_controlStatsHasBeenSet; }
  template <typename ControlStatsT = ControlStats>
  void SetControlStats(ControlStatsT&& value) {
    m_controlStatsHasBeenSet = true;
    m_controlStats = std::forward<ControlStatsT>(value);
  }
  template <typename ControlStatsT = ControlStats>
  EvaluatorMetric& WithControlStats(ControlStatsT&& value) {
    SetControlStats(std::forward<ControlStatsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The results for each treatment variant compared against the control.</p>
   */
  inline const Aws::Vector<VariantResult>& GetVariantResults() const { return m_variantResults; }
  inline bool VariantResultsHasBeenSet() const { return m_variantResultsHasBeenSet; }
  template <typename VariantResultsT = Aws::Vector<VariantResult>>
  void SetVariantResults(VariantResultsT&& value) {
    m_variantResultsHasBeenSet = true;
    m_variantResults = std::forward<VariantResultsT>(value);
  }
  template <typename VariantResultsT = Aws::Vector<VariantResult>>
  EvaluatorMetric& WithVariantResults(VariantResultsT&& value) {
    SetVariantResults(std::forward<VariantResultsT>(value));
    return *this;
  }
  template <typename VariantResultsT = VariantResult>
  EvaluatorMetric& AddVariantResults(VariantResultsT&& value) {
    m_variantResultsHasBeenSet = true;
    m_variantResults.emplace_back(std::forward<VariantResultsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorArn;

  ControlStats m_controlStats;

  Aws::Vector<VariantResult> m_variantResults;
  bool m_evaluatorArnHasBeenSet = false;
  bool m_controlStatsHasBeenSet = false;
  bool m_variantResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
