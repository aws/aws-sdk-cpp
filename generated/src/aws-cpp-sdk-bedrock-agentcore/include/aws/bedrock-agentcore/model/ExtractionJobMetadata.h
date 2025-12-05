/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ExtractionJobMessages.h>
#include <aws/bedrock-agentcore/model/ExtractionJobStatus.h>
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
 * <p>Metadata information associated with this extraction job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExtractionJobMetadata">AWS
 * API Reference</a></p>
 */
class ExtractionJobMetadata {
 public:
  AWS_BEDROCKAGENTCORE_API ExtractionJobMetadata() = default;
  AWS_BEDROCKAGENTCORE_API ExtractionJobMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExtractionJobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the extraction job.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  ExtractionJobMetadata& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The messages associated with the extraction job.</p>
   */
  inline const ExtractionJobMessages& GetMessages() const { return m_messages; }
  inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }
  template <typename MessagesT = ExtractionJobMessages>
  void SetMessages(MessagesT&& value) {
    m_messagesHasBeenSet = true;
    m_messages = std::forward<MessagesT>(value);
  }
  template <typename MessagesT = ExtractionJobMessages>
  ExtractionJobMetadata& WithMessages(MessagesT&& value) {
    SetMessages(std::forward<MessagesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the extraction job.</p>
   */
  inline ExtractionJobStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ExtractionJobStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ExtractionJobMetadata& WithStatus(ExtractionJobStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cause of failure, if the job did not complete successfully.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  ExtractionJobMetadata& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the memory strategy for this extraction job.</p>
   */
  inline const Aws::String& GetStrategyId() const { return m_strategyId; }
  inline bool StrategyIdHasBeenSet() const { return m_strategyIdHasBeenSet; }
  template <typename StrategyIdT = Aws::String>
  void SetStrategyId(StrategyIdT&& value) {
    m_strategyIdHasBeenSet = true;
    m_strategyId = std::forward<StrategyIdT>(value);
  }
  template <typename StrategyIdT = Aws::String>
  ExtractionJobMetadata& WithStrategyId(StrategyIdT&& value) {
    SetStrategyId(std::forward<StrategyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the session for this extraction job.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  ExtractionJobMetadata& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the actor for this extraction job.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  ExtractionJobMetadata& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  ExtractionJobMessages m_messages;

  ExtractionJobStatus m_status{ExtractionJobStatus::NOT_SET};

  Aws::String m_failureReason;

  Aws::String m_strategyId;

  Aws::String m_sessionId;

  Aws::String m_actorId;
  bool m_jobIDHasBeenSet = false;
  bool m_messagesHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_strategyIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
