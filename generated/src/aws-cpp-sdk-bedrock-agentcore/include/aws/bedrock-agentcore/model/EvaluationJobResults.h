/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/EvaluatorSummary.h>
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
 * <p>Aggregated results from a batch evaluation, including session completion
 * counts and evaluator score summaries.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationJobResults">AWS
 * API Reference</a></p>
 */
class EvaluationJobResults {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationJobResults() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationJobResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationJobResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of sessions that have been successfully evaluated.</p>
   */
  inline int GetNumberOfSessionsCompleted() const { return m_numberOfSessionsCompleted; }
  inline bool NumberOfSessionsCompletedHasBeenSet() const { return m_numberOfSessionsCompletedHasBeenSet; }
  inline void SetNumberOfSessionsCompleted(int value) {
    m_numberOfSessionsCompletedHasBeenSet = true;
    m_numberOfSessionsCompleted = value;
  }
  inline EvaluationJobResults& WithNumberOfSessionsCompleted(int value) {
    SetNumberOfSessionsCompleted(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions currently being evaluated.</p>
   */
  inline int GetNumberOfSessionsInProgress() const { return m_numberOfSessionsInProgress; }
  inline bool NumberOfSessionsInProgressHasBeenSet() const { return m_numberOfSessionsInProgressHasBeenSet; }
  inline void SetNumberOfSessionsInProgress(int value) {
    m_numberOfSessionsInProgressHasBeenSet = true;
    m_numberOfSessionsInProgress = value;
  }
  inline EvaluationJobResults& WithNumberOfSessionsInProgress(int value) {
    SetNumberOfSessionsInProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions that failed evaluation.</p>
   */
  inline int GetNumberOfSessionsFailed() const { return m_numberOfSessionsFailed; }
  inline bool NumberOfSessionsFailedHasBeenSet() const { return m_numberOfSessionsFailedHasBeenSet; }
  inline void SetNumberOfSessionsFailed(int value) {
    m_numberOfSessionsFailedHasBeenSet = true;
    m_numberOfSessionsFailed = value;
  }
  inline EvaluationJobResults& WithNumberOfSessionsFailed(int value) {
    SetNumberOfSessionsFailed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of sessions included in the batch evaluation.</p>
   */
  inline int GetTotalNumberOfSessions() const { return m_totalNumberOfSessions; }
  inline bool TotalNumberOfSessionsHasBeenSet() const { return m_totalNumberOfSessionsHasBeenSet; }
  inline void SetTotalNumberOfSessions(int value) {
    m_totalNumberOfSessionsHasBeenSet = true;
    m_totalNumberOfSessions = value;
  }
  inline EvaluationJobResults& WithTotalNumberOfSessions(int value) {
    SetTotalNumberOfSessions(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions that were ignored during evaluation.</p>
   */
  inline int GetNumberOfSessionsIgnored() const { return m_numberOfSessionsIgnored; }
  inline bool NumberOfSessionsIgnoredHasBeenSet() const { return m_numberOfSessionsIgnoredHasBeenSet; }
  inline void SetNumberOfSessionsIgnored(int value) {
    m_numberOfSessionsIgnoredHasBeenSet = true;
    m_numberOfSessionsIgnored = value;
  }
  inline EvaluationJobResults& WithNumberOfSessionsIgnored(int value) {
    SetNumberOfSessionsIgnored(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of per-evaluator summary statistics.</p>
   */
  inline const Aws::Vector<EvaluatorSummary>& GetEvaluatorSummaries() const { return m_evaluatorSummaries; }
  inline bool EvaluatorSummariesHasBeenSet() const { return m_evaluatorSummariesHasBeenSet; }
  template <typename EvaluatorSummariesT = Aws::Vector<EvaluatorSummary>>
  void SetEvaluatorSummaries(EvaluatorSummariesT&& value) {
    m_evaluatorSummariesHasBeenSet = true;
    m_evaluatorSummaries = std::forward<EvaluatorSummariesT>(value);
  }
  template <typename EvaluatorSummariesT = Aws::Vector<EvaluatorSummary>>
  EvaluationJobResults& WithEvaluatorSummaries(EvaluatorSummariesT&& value) {
    SetEvaluatorSummaries(std::forward<EvaluatorSummariesT>(value));
    return *this;
  }
  template <typename EvaluatorSummariesT = EvaluatorSummary>
  EvaluationJobResults& AddEvaluatorSummaries(EvaluatorSummariesT&& value) {
    m_evaluatorSummariesHasBeenSet = true;
    m_evaluatorSummaries.emplace_back(std::forward<EvaluatorSummariesT>(value));
    return *this;
  }
  ///@}
 private:
  int m_numberOfSessionsCompleted{0};

  int m_numberOfSessionsInProgress{0};

  int m_numberOfSessionsFailed{0};

  int m_totalNumberOfSessions{0};

  int m_numberOfSessionsIgnored{0};

  Aws::Vector<EvaluatorSummary> m_evaluatorSummaries;
  bool m_numberOfSessionsCompletedHasBeenSet = false;
  bool m_numberOfSessionsInProgressHasBeenSet = false;
  bool m_numberOfSessionsFailedHasBeenSet = false;
  bool m_totalNumberOfSessionsHasBeenSet = false;
  bool m_numberOfSessionsIgnoredHasBeenSet = false;
  bool m_evaluatorSummariesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
