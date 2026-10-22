/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/SampleSession.h>
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
 * <p>A root cause that contributes to an insight.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/InsightRootCause">AWS
 * API Reference</a></p>
 */
class InsightRootCause {
 public:
  AWS_BEDROCKAGENTCORE_API InsightRootCause() = default;
  AWS_BEDROCKAGENTCORE_API InsightRootCause(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InsightRootCause& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A generated label for the root cause.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InsightRootCause& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of how the root cause leads to the failures in the
   * insight.</p>
   */
  inline const Aws::String& GetExplanation() const { return m_explanation; }
  inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
  template <typename ExplanationT = Aws::String>
  void SetExplanation(ExplanationT&& value) {
    m_explanationHasBeenSet = true;
    m_explanation = std::forward<ExplanationT>(value);
  }
  template <typename ExplanationT = Aws::String>
  InsightRootCause& WithExplanation(ExplanationT&& value) {
    SetExplanation(std::forward<ExplanationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of distinct sessions affected by the root cause. A session can be
   * affected by more than one root cause of the same insight.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline InsightRootCause& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A suggested change to the agent that addresses the root cause.</p>
   */
  inline const Aws::String& GetSuggestedFix() const { return m_suggestedFix; }
  inline bool SuggestedFixHasBeenSet() const { return m_suggestedFixHasBeenSet; }
  template <typename SuggestedFixT = Aws::String>
  void SetSuggestedFix(SuggestedFixT&& value) {
    m_suggestedFixHasBeenSet = true;
    m_suggestedFix = std::forward<SuggestedFixT>(value);
  }
  template <typename SuggestedFixT = Aws::String>
  InsightRootCause& WithSuggestedFix(SuggestedFixT&& value) {
    SetSuggestedFix(std::forward<SuggestedFixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A sample of up to 10 sessions affected by the root cause.</p>
   */
  inline const Aws::Vector<SampleSession>& GetSampleSessions() const { return m_sampleSessions; }
  inline bool SampleSessionsHasBeenSet() const { return m_sampleSessionsHasBeenSet; }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  void SetSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions = std::forward<SampleSessionsT>(value);
  }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  InsightRootCause& WithSampleSessions(SampleSessionsT&& value) {
    SetSampleSessions(std::forward<SampleSessionsT>(value));
    return *this;
  }
  template <typename SampleSessionsT = SampleSession>
  InsightRootCause& AddSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions.emplace_back(std::forward<SampleSessionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_explanation;

  int m_affectedSessionCount{0};

  Aws::String m_suggestedFix;

  Aws::Vector<SampleSession> m_sampleSessions;
  bool m_nameHasBeenSet = false;
  bool m_explanationHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_suggestedFixHasBeenSet = false;
  bool m_sampleSessionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
