/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/FailureSpanDetail.h>
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
 * <p>A session affected by a detected failure pattern, including root cause
 * details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AffectedSession">AWS
 * API Reference</a></p>
 */
class AffectedSession {
 public:
  AWS_BEDROCKAGENTCORE_API AffectedSession() = default;
  AWS_BEDROCKAGENTCORE_API AffectedSession(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AffectedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the affected session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  AffectedSession& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An explanation of how the failure manifested in this session.</p>
   */
  inline const Aws::String& GetExplanation() const { return m_explanation; }
  inline bool ExplanationHasBeenSet() const { return m_explanationHasBeenSet; }
  template <typename ExplanationT = Aws::String>
  void SetExplanation(ExplanationT&& value) {
    m_explanationHasBeenSet = true;
    m_explanation = std::forward<ExplanationT>(value);
  }
  template <typename ExplanationT = Aws::String>
  AffectedSession& WithExplanation(ExplanationT&& value) {
    SetExplanation(std::forward<ExplanationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of fix recommended for this failure.</p>
   */
  inline const Aws::String& GetFixType() const { return m_fixType; }
  inline bool FixTypeHasBeenSet() const { return m_fixTypeHasBeenSet; }
  template <typename FixTypeT = Aws::String>
  void SetFixType(FixTypeT&& value) {
    m_fixTypeHasBeenSet = true;
    m_fixType = std::forward<FixTypeT>(value);
  }
  template <typename FixTypeT = Aws::String>
  AffectedSession& WithFixType(FixTypeT&& value) {
    SetFixType(std::forward<FixTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific fix recommendation for this session.</p>
   */
  inline const Aws::String& GetRecommendation() const { return m_recommendation; }
  inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
  template <typename RecommendationT = Aws::String>
  void SetRecommendation(RecommendationT&& value) {
    m_recommendationHasBeenSet = true;
    m_recommendation = std::forward<RecommendationT>(value);
  }
  template <typename RecommendationT = Aws::String>
  AffectedSession& WithRecommendation(RecommendationT&& value) {
    SetRecommendation(std::forward<RecommendationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of spans where failures were detected in this session.</p>
   */
  inline const Aws::Vector<FailureSpanDetail>& GetFailureSpans() const { return m_failureSpans; }
  inline bool FailureSpansHasBeenSet() const { return m_failureSpansHasBeenSet; }
  template <typename FailureSpansT = Aws::Vector<FailureSpanDetail>>
  void SetFailureSpans(FailureSpansT&& value) {
    m_failureSpansHasBeenSet = true;
    m_failureSpans = std::forward<FailureSpansT>(value);
  }
  template <typename FailureSpansT = Aws::Vector<FailureSpanDetail>>
  AffectedSession& WithFailureSpans(FailureSpansT&& value) {
    SetFailureSpans(std::forward<FailureSpansT>(value));
    return *this;
  }
  template <typename FailureSpansT = FailureSpanDetail>
  AffectedSession& AddFailureSpans(FailureSpansT&& value) {
    m_failureSpansHasBeenSet = true;
    m_failureSpans.emplace_back(std::forward<FailureSpansT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_explanation;

  Aws::String m_fixType;

  Aws::String m_recommendation;

  Aws::Vector<FailureSpanDetail> m_failureSpans;
  bool m_sessionIdHasBeenSet = false;
  bool m_explanationHasBeenSet = false;
  bool m_fixTypeHasBeenSet = false;
  bool m_recommendationHasBeenSet = false;
  bool m_failureSpansHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
