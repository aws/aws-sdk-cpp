/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>

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
 * <p>Aggregated statistics for an evaluator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluatorStatistics">AWS
 * API Reference</a></p>
 */
class EvaluatorStatistics {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluatorStatistics() = default;
  AWS_BEDROCKAGENTCORE_API EvaluatorStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluatorStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The average score across all evaluated sessions for this evaluator.</p>
   */
  inline double GetAverageScore() const { return m_averageScore; }
  inline bool AverageScoreHasBeenSet() const { return m_averageScoreHasBeenSet; }
  inline void SetAverageScore(double value) {
    m_averageScoreHasBeenSet = true;
    m_averageScore = value;
  }
  inline EvaluatorStatistics& WithAverageScore(double value) {
    SetAverageScore(value);
    return *this;
  }
  ///@}
 private:
  double m_averageScore{0.0};
  bool m_averageScoreHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
