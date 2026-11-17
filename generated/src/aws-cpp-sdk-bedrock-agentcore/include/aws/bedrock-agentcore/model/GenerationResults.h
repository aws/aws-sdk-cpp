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
 * <p>Counts of the sessions, scenarios and examples a dataset generation has
 * processed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/GenerationResults">AWS
 * API Reference</a></p>
 */
class GenerationResults {
 public:
  AWS_BEDROCKAGENTCORE_API GenerationResults() = default;
  AWS_BEDROCKAGENTCORE_API GenerationResults(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API GenerationResults& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of sessions that matched the filters or were named in the request,
   * before sampling. This includes sessions that later failed.</p>
   */
  inline int GetSessionsMatched() const { return m_sessionsMatched; }
  inline bool SessionsMatchedHasBeenSet() const { return m_sessionsMatchedHasBeenSet; }
  inline void SetSessionsMatched(int value) {
    m_sessionsMatchedHasBeenSet = true;
    m_sessionsMatched = value;
  }
  inline GenerationResults& WithSessionsMatched(int value) {
    SetSessionsMatched(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions left after sampling.</p>
   */
  inline int GetSessionsSelected() const { return m_sessionsSelected; }
  inline bool SessionsSelectedHasBeenSet() const { return m_sessionsSelectedHasBeenSet; }
  inline void SetSessionsSelected(int value) {
    m_sessionsSelectedHasBeenSet = true;
    m_sessionsSelected = value;
  }
  inline GenerationResults& WithSessionsSelected(int value) {
    SetSessionsSelected(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions left out because an evaluator filter had no result to
   * compare, either because the session wasn't evaluated yet or because the
   * evaluation failed.</p>
   */
  inline int GetSessionsUnscored() const { return m_sessionsUnscored; }
  inline bool SessionsUnscoredHasBeenSet() const { return m_sessionsUnscoredHasBeenSet; }
  inline void SetSessionsUnscored(int value) {
    m_sessionsUnscoredHasBeenSet = true;
    m_sessionsUnscored = value;
  }
  inline GenerationResults& WithSessionsUnscored(int value) {
    SetSessionsUnscored(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions dropped because of an error. See
   * <code>errorDetails</code> for the errors.</p>
   */
  inline int GetSessionsFailed() const { return m_sessionsFailed; }
  inline bool SessionsFailedHasBeenSet() const { return m_sessionsFailedHasBeenSet; }
  inline void SetSessionsFailed(int value) {
    m_sessionsFailedHasBeenSet = true;
    m_sessionsFailed = value;
  }
  inline GenerationResults& WithSessionsFailed(int value) {
    SetSessionsFailed(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of scenarios generated.</p>
   */
  inline int GetScenariosGenerated() const { return m_scenariosGenerated; }
  inline bool ScenariosGeneratedHasBeenSet() const { return m_scenariosGeneratedHasBeenSet; }
  inline void SetScenariosGenerated(int value) {
    m_scenariosGeneratedHasBeenSet = true;
    m_scenariosGenerated = value;
  }
  inline GenerationResults& WithScenariosGenerated(int value) {
    SetScenariosGenerated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of scenarios left out as duplicates, of each other or of examples
   * already in the draft.</p>
   */
  inline int GetScenariosDeduplicated() const { return m_scenariosDeduplicated; }
  inline bool ScenariosDeduplicatedHasBeenSet() const { return m_scenariosDeduplicatedHasBeenSet; }
  inline void SetScenariosDeduplicated(int value) {
    m_scenariosDeduplicatedHasBeenSet = true;
    m_scenariosDeduplicated = value;
  }
  inline GenerationResults& WithScenariosDeduplicated(int value) {
    SetScenariosDeduplicated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of examples added to the dataset's draft.</p>
   */
  inline int GetExamplesWritten() const { return m_examplesWritten; }
  inline bool ExamplesWrittenHasBeenSet() const { return m_examplesWrittenHasBeenSet; }
  inline void SetExamplesWritten(int value) {
    m_examplesWrittenHasBeenSet = true;
    m_examplesWritten = value;
  }
  inline GenerationResults& WithExamplesWritten(int value) {
    SetExamplesWritten(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of added examples that have reference fields.</p>
   */
  inline int GetExamplesWithGroundTruth() const { return m_examplesWithGroundTruth; }
  inline bool ExamplesWithGroundTruthHasBeenSet() const { return m_examplesWithGroundTruthHasBeenSet; }
  inline void SetExamplesWithGroundTruth(int value) {
    m_examplesWithGroundTruthHasBeenSet = true;
    m_examplesWithGroundTruth = value;
  }
  inline GenerationResults& WithExamplesWithGroundTruth(int value) {
    SetExamplesWithGroundTruth(value);
    return *this;
  }
  ///@}
 private:
  int m_sessionsMatched{0};

  int m_sessionsSelected{0};

  int m_sessionsUnscored{0};

  int m_sessionsFailed{0};

  int m_scenariosGenerated{0};

  int m_scenariosDeduplicated{0};

  int m_examplesWritten{0};

  int m_examplesWithGroundTruth{0};
  bool m_sessionsMatchedHasBeenSet = false;
  bool m_sessionsSelectedHasBeenSet = false;
  bool m_sessionsUnscoredHasBeenSet = false;
  bool m_sessionsFailedHasBeenSet = false;
  bool m_scenariosGeneratedHasBeenSet = false;
  bool m_scenariosDeduplicatedHasBeenSet = false;
  bool m_examplesWrittenHasBeenSet = false;
  bool m_examplesWithGroundTruthHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
