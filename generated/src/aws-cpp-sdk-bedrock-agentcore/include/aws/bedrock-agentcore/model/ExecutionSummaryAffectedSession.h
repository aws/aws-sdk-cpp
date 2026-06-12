/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p>A session associated with an execution summary cluster.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExecutionSummaryAffectedSession">AWS
 * API Reference</a></p>
 */
class ExecutionSummaryAffectedSession {
 public:
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryAffectedSession() = default;
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryAffectedSession(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExecutionSummaryAffectedSession& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the session.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  ExecutionSummaryAffectedSession& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The approach taken by the agent during this session.</p>
   */
  inline const Aws::String& GetApproachTaken() const { return m_approachTaken; }
  inline bool ApproachTakenHasBeenSet() const { return m_approachTakenHasBeenSet; }
  template <typename ApproachTakenT = Aws::String>
  void SetApproachTaken(ApproachTakenT&& value) {
    m_approachTakenHasBeenSet = true;
    m_approachTaken = std::forward<ApproachTakenT>(value);
  }
  template <typename ApproachTakenT = Aws::String>
  ExecutionSummaryAffectedSession& WithApproachTaken(ApproachTakenT&& value) {
    SetApproachTaken(std::forward<ApproachTakenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final outcome of the session.</p>
   */
  inline const Aws::String& GetFinalOutcome() const { return m_finalOutcome; }
  inline bool FinalOutcomeHasBeenSet() const { return m_finalOutcomeHasBeenSet; }
  template <typename FinalOutcomeT = Aws::String>
  void SetFinalOutcome(FinalOutcomeT&& value) {
    m_finalOutcomeHasBeenSet = true;
    m_finalOutcome = std::forward<FinalOutcomeT>(value);
  }
  template <typename FinalOutcomeT = Aws::String>
  ExecutionSummaryAffectedSession& WithFinalOutcome(FinalOutcomeT&& value) {
    SetFinalOutcome(std::forward<FinalOutcomeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;

  Aws::String m_approachTaken;

  Aws::String m_finalOutcome;
  bool m_sessionIdHasBeenSet = false;
  bool m_approachTakenHasBeenSet = false;
  bool m_finalOutcomeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
