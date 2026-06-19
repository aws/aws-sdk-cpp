/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveAction.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveFailure.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceMetadata.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStatus.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveStep.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceResultItem.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveWarning.h>
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
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Attributes describing the details of an agentic retrieval trace
 * event.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveTraceEventAttributes">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveTraceEventAttributes {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEventAttributes() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEventAttributes(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEventAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of actions taken during this step.</p>
   */
  inline const Aws::Vector<AgenticRetrieveAction>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<AgenticRetrieveAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<AgenticRetrieveAction>>
  AgenticRetrieveTraceEventAttributes& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = AgenticRetrieveAction>
  AgenticRetrieveTraceEventAttributes& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failures that occurred during this step.</p>
   */
  inline const Aws::Vector<AgenticRetrieveFailure>& GetFailures() const { return m_failures; }
  inline bool FailuresHasBeenSet() const { return m_failuresHasBeenSet; }
  template <typename FailuresT = Aws::Vector<AgenticRetrieveFailure>>
  void SetFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures = std::forward<FailuresT>(value);
  }
  template <typename FailuresT = Aws::Vector<AgenticRetrieveFailure>>
  AgenticRetrieveTraceEventAttributes& WithFailures(FailuresT&& value) {
    SetFailures(std::forward<FailuresT>(value));
    return *this;
  }
  template <typename FailuresT = AgenticRetrieveFailure>
  AgenticRetrieveTraceEventAttributes& AddFailures(FailuresT&& value) {
    m_failuresHasBeenSet = true;
    m_failures.emplace_back(std::forward<FailuresT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable message describing the trace event.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  AgenticRetrieveTraceEventAttributes& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata about the retrieval sources used.</p>
   */
  inline const Aws::Vector<AgenticRetrieveSourceMetadata>& GetRetrievalMetadata() const { return m_retrievalMetadata; }
  inline bool RetrievalMetadataHasBeenSet() const { return m_retrievalMetadataHasBeenSet; }
  template <typename RetrievalMetadataT = Aws::Vector<AgenticRetrieveSourceMetadata>>
  void SetRetrievalMetadata(RetrievalMetadataT&& value) {
    m_retrievalMetadataHasBeenSet = true;
    m_retrievalMetadata = std::forward<RetrievalMetadataT>(value);
  }
  template <typename RetrievalMetadataT = Aws::Vector<AgenticRetrieveSourceMetadata>>
  AgenticRetrieveTraceEventAttributes& WithRetrievalMetadata(RetrievalMetadataT&& value) {
    SetRetrievalMetadata(std::forward<RetrievalMetadataT>(value));
    return *this;
  }
  template <typename RetrievalMetadataT = AgenticRetrieveSourceMetadata>
  AgenticRetrieveTraceEventAttributes& AddRetrievalMetadata(RetrievalMetadataT&& value) {
    m_retrievalMetadataHasBeenSet = true;
    m_retrievalMetadata.emplace_back(std::forward<RetrievalMetadataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The retrieval results from this step.</p>
   */
  inline const Aws::Vector<AgenticRetrieveTraceResultItem>& GetRetrievalResponse() const { return m_retrievalResponse; }
  inline bool RetrievalResponseHasBeenSet() const { return m_retrievalResponseHasBeenSet; }
  template <typename RetrievalResponseT = Aws::Vector<AgenticRetrieveTraceResultItem>>
  void SetRetrievalResponse(RetrievalResponseT&& value) {
    m_retrievalResponseHasBeenSet = true;
    m_retrievalResponse = std::forward<RetrievalResponseT>(value);
  }
  template <typename RetrievalResponseT = Aws::Vector<AgenticRetrieveTraceResultItem>>
  AgenticRetrieveTraceEventAttributes& WithRetrievalResponse(RetrievalResponseT&& value) {
    SetRetrievalResponse(std::forward<RetrievalResponseT>(value));
    return *this;
  }
  template <typename RetrievalResponseT = AgenticRetrieveTraceResultItem>
  AgenticRetrieveTraceEventAttributes& AddRetrievalResponse(RetrievalResponseT&& value) {
    m_retrievalResponseHasBeenSet = true;
    m_retrievalResponse.emplace_back(std::forward<RetrievalResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the current step.</p>
   */
  inline AgenticRetrieveStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgenticRetrieveStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgenticRetrieveTraceEventAttributes& WithStatus(AgenticRetrieveStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current step in the retrieval process.</p>
   */
  inline AgenticRetrieveStep GetStep() const { return m_step; }
  inline bool StepHasBeenSet() const { return m_stepHasBeenSet; }
  inline void SetStep(AgenticRetrieveStep value) {
    m_stepHasBeenSet = true;
    m_step = value;
  }
  inline AgenticRetrieveTraceEventAttributes& WithStep(AgenticRetrieveStep value) {
    SetStep(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Warnings generated during this step.</p>
   */
  inline const Aws::Vector<AgenticRetrieveWarning>& GetWarnings() const { return m_warnings; }
  inline bool WarningsHasBeenSet() const { return m_warningsHasBeenSet; }
  template <typename WarningsT = Aws::Vector<AgenticRetrieveWarning>>
  void SetWarnings(WarningsT&& value) {
    m_warningsHasBeenSet = true;
    m_warnings = std::forward<WarningsT>(value);
  }
  template <typename WarningsT = Aws::Vector<AgenticRetrieveWarning>>
  AgenticRetrieveTraceEventAttributes& WithWarnings(WarningsT&& value) {
    SetWarnings(std::forward<WarningsT>(value));
    return *this;
  }
  template <typename WarningsT = AgenticRetrieveWarning>
  AgenticRetrieveTraceEventAttributes& AddWarnings(WarningsT&& value) {
    m_warningsHasBeenSet = true;
    m_warnings.emplace_back(std::forward<WarningsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AgenticRetrieveAction> m_actions;

  Aws::Vector<AgenticRetrieveFailure> m_failures;

  Aws::String m_message;

  Aws::Vector<AgenticRetrieveSourceMetadata> m_retrievalMetadata;

  Aws::Vector<AgenticRetrieveTraceResultItem> m_retrievalResponse;

  AgenticRetrieveStatus m_status{AgenticRetrieveStatus::NOT_SET};

  AgenticRetrieveStep m_step{AgenticRetrieveStep::NOT_SET};

  Aws::Vector<AgenticRetrieveWarning> m_warnings;
  bool m_actionsHasBeenSet = false;
  bool m_failuresHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_retrievalMetadataHasBeenSet = false;
  bool m_retrievalResponseHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_stepHasBeenSet = false;
  bool m_warningsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
