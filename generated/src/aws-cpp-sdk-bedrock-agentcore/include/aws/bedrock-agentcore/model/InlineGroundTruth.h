/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluationContent.h>
#include <aws/bedrock-agentcore/model/EvaluationExpectedTrajectory.h>
#include <aws/bedrock-agentcore/model/GroundTruthTurn.h>
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
 * <p>Inline ground truth data containing assertions, expected trajectories, and
 * per-turn expected responses.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InlineGroundTruth">AWS
 * API Reference</a></p>
 */
class InlineGroundTruth {
 public:
  AWS_BEDROCKAGENTCORE_API InlineGroundTruth() = default;
  AWS_BEDROCKAGENTCORE_API InlineGroundTruth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InlineGroundTruth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>assertions for evaluation, reuses common model EvaluationContentList</p>
   */
  inline const Aws::Vector<EvaluationContent>& GetAssertions() const { return m_assertions; }
  inline bool AssertionsHasBeenSet() const { return m_assertionsHasBeenSet; }
  template <typename AssertionsT = Aws::Vector<EvaluationContent>>
  void SetAssertions(AssertionsT&& value) {
    m_assertionsHasBeenSet = true;
    m_assertions = std::forward<AssertionsT>(value);
  }
  template <typename AssertionsT = Aws::Vector<EvaluationContent>>
  InlineGroundTruth& WithAssertions(AssertionsT&& value) {
    SetAssertions(std::forward<AssertionsT>(value));
    return *this;
  }
  template <typename AssertionsT = EvaluationContent>
  InlineGroundTruth& AddAssertions(AssertionsT&& value) {
    m_assertionsHasBeenSet = true;
    m_assertions.emplace_back(std::forward<AssertionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>expectedTrajectory for evaluation, reuses common model
   * EvaluationExpectedTrajectory</p>
   */
  inline const EvaluationExpectedTrajectory& GetExpectedTrajectory() const { return m_expectedTrajectory; }
  inline bool ExpectedTrajectoryHasBeenSet() const { return m_expectedTrajectoryHasBeenSet; }
  template <typename ExpectedTrajectoryT = EvaluationExpectedTrajectory>
  void SetExpectedTrajectory(ExpectedTrajectoryT&& value) {
    m_expectedTrajectoryHasBeenSet = true;
    m_expectedTrajectory = std::forward<ExpectedTrajectoryT>(value);
  }
  template <typename ExpectedTrajectoryT = EvaluationExpectedTrajectory>
  InlineGroundTruth& WithExpectedTrajectory(ExpectedTrajectoryT&& value) {
    SetExpectedTrajectory(std::forward<ExpectedTrajectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-turn ground truth data, each containing an input prompt and
   * expected response.</p>
   */
  inline const Aws::Vector<GroundTruthTurn>& GetTurns() const { return m_turns; }
  inline bool TurnsHasBeenSet() const { return m_turnsHasBeenSet; }
  template <typename TurnsT = Aws::Vector<GroundTruthTurn>>
  void SetTurns(TurnsT&& value) {
    m_turnsHasBeenSet = true;
    m_turns = std::forward<TurnsT>(value);
  }
  template <typename TurnsT = Aws::Vector<GroundTruthTurn>>
  InlineGroundTruth& WithTurns(TurnsT&& value) {
    SetTurns(std::forward<TurnsT>(value));
    return *this;
  }
  template <typename TurnsT = GroundTruthTurn>
  InlineGroundTruth& AddTurns(TurnsT&& value) {
    m_turnsHasBeenSet = true;
    m_turns.emplace_back(std::forward<TurnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationContent> m_assertions;

  EvaluationExpectedTrajectory m_expectedTrajectory;

  Aws::Vector<GroundTruthTurn> m_turns;
  bool m_assertionsHasBeenSet = false;
  bool m_expectedTrajectoryHasBeenSet = false;
  bool m_turnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
