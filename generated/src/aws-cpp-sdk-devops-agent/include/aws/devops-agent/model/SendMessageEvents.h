/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SendMessageContentBlockDeltaEvent.h>
#include <aws/devops-agent/model/SendMessageContentBlockStartEvent.h>
#include <aws/devops-agent/model/SendMessageContentBlockStopEvent.h>
#include <aws/devops-agent/model/SendMessageHeartbeatEvent.h>
#include <aws/devops-agent/model/SendMessageResponseCompletedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseCreatedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseFailedEvent.h>
#include <aws/devops-agent/model/SendMessageResponseInProgressEvent.h>
#include <aws/devops-agent/model/SendMessageSummaryEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Event stream for chat message responses using the content block model. Events
 * follow a lifecycle: responseCreated -&gt; responseInProgress -&gt;
 * (contentBlockStart/contentBlockDelta/contentBlockStop events) -&gt;
 * responseCompleted|responseFailed</p> <p>SendMessage always uses content block
 * mode — legacy per-field events (outputTextDelta, functionCallArgumentsDelta,
 * etc.) are not emitted.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SendMessageEvents">AWS
 * API Reference</a></p>
 */
class SendMessageEvents {
 public:
  AWS_DEVOPSAGENT_API SendMessageEvents() = default;
  AWS_DEVOPSAGENT_API SendMessageEvents(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SendMessageEvents& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Emitted when the response is created</p>
   */
  inline const SendMessageResponseCreatedEvent& GetResponseCreated() const { return m_responseCreated; }
  inline bool ResponseCreatedHasBeenSet() const { return m_responseCreatedHasBeenSet; }
  template <typename ResponseCreatedT = SendMessageResponseCreatedEvent>
  void SetResponseCreated(ResponseCreatedT&& value) {
    m_responseCreatedHasBeenSet = true;
    m_responseCreated = std::forward<ResponseCreatedT>(value);
  }
  template <typename ResponseCreatedT = SendMessageResponseCreatedEvent>
  SendMessageEvents& WithResponseCreated(ResponseCreatedT&& value) {
    SetResponseCreated(std::forward<ResponseCreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted while the response is being generated</p>
   */
  inline const SendMessageResponseInProgressEvent& GetResponseInProgress() const { return m_responseInProgress; }
  inline bool ResponseInProgressHasBeenSet() const { return m_responseInProgressHasBeenSet; }
  template <typename ResponseInProgressT = SendMessageResponseInProgressEvent>
  void SetResponseInProgress(ResponseInProgressT&& value) {
    m_responseInProgressHasBeenSet = true;
    m_responseInProgress = std::forward<ResponseInProgressT>(value);
  }
  template <typename ResponseInProgressT = SendMessageResponseInProgressEvent>
  SendMessageEvents& WithResponseInProgress(ResponseInProgressT&& value) {
    SetResponseInProgress(std::forward<ResponseInProgressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted when the response completes successfully</p>
   */
  inline const SendMessageResponseCompletedEvent& GetResponseCompleted() const { return m_responseCompleted; }
  inline bool ResponseCompletedHasBeenSet() const { return m_responseCompletedHasBeenSet; }
  template <typename ResponseCompletedT = SendMessageResponseCompletedEvent>
  void SetResponseCompleted(ResponseCompletedT&& value) {
    m_responseCompletedHasBeenSet = true;
    m_responseCompleted = std::forward<ResponseCompletedT>(value);
  }
  template <typename ResponseCompletedT = SendMessageResponseCompletedEvent>
  SendMessageEvents& WithResponseCompleted(ResponseCompletedT&& value) {
    SetResponseCompleted(std::forward<ResponseCompletedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted when the response fails</p>
   */
  inline const SendMessageResponseFailedEvent& GetResponseFailed() const { return m_responseFailed; }
  inline bool ResponseFailedHasBeenSet() const { return m_responseFailedHasBeenSet; }
  template <typename ResponseFailedT = SendMessageResponseFailedEvent>
  void SetResponseFailed(ResponseFailedT&& value) {
    m_responseFailedHasBeenSet = true;
    m_responseFailed = std::forward<ResponseFailedT>(value);
  }
  template <typename ResponseFailedT = SendMessageResponseFailedEvent>
  SendMessageEvents& WithResponseFailed(ResponseFailedT&& value) {
    SetResponseFailed(std::forward<ResponseFailedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted to provide a summary of agent actions</p>
   */
  inline const SendMessageSummaryEvent& GetSummary() const { return m_summary; }
  inline bool SummaryHasBeenSet() const { return m_summaryHasBeenSet; }
  template <typename SummaryT = SendMessageSummaryEvent>
  void SetSummary(SummaryT&& value) {
    m_summaryHasBeenSet = true;
    m_summary = std::forward<SummaryT>(value);
  }
  template <typename SummaryT = SendMessageSummaryEvent>
  SendMessageEvents& WithSummary(SummaryT&& value) {
    SetSummary(std::forward<SummaryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Heartbeat event sent periodically to keep the connection alive during idle
   * periods</p>
   */
  inline const SendMessageHeartbeatEvent& GetHeartbeat() const { return m_heartbeat; }
  inline bool HeartbeatHasBeenSet() const { return m_heartbeatHasBeenSet; }
  template <typename HeartbeatT = SendMessageHeartbeatEvent>
  void SetHeartbeat(HeartbeatT&& value) {
    m_heartbeatHasBeenSet = true;
    m_heartbeat = std::forward<HeartbeatT>(value);
  }
  template <typename HeartbeatT = SendMessageHeartbeatEvent>
  SendMessageEvents& WithHeartbeat(HeartbeatT&& value) {
    SetHeartbeat(std::forward<HeartbeatT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted when a new content block starts</p>
   */
  inline const SendMessageContentBlockStartEvent& GetContentBlockStart() const { return m_contentBlockStart; }
  inline bool ContentBlockStartHasBeenSet() const { return m_contentBlockStartHasBeenSet; }
  template <typename ContentBlockStartT = SendMessageContentBlockStartEvent>
  void SetContentBlockStart(ContentBlockStartT&& value) {
    m_contentBlockStartHasBeenSet = true;
    m_contentBlockStart = std::forward<ContentBlockStartT>(value);
  }
  template <typename ContentBlockStartT = SendMessageContentBlockStartEvent>
  SendMessageEvents& WithContentBlockStart(ContentBlockStartT&& value) {
    SetContentBlockStart(std::forward<ContentBlockStartT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted for each incremental content delta within a content block</p>
   */
  inline const SendMessageContentBlockDeltaEvent& GetContentBlockDelta() const { return m_contentBlockDelta; }
  inline bool ContentBlockDeltaHasBeenSet() const { return m_contentBlockDeltaHasBeenSet; }
  template <typename ContentBlockDeltaT = SendMessageContentBlockDeltaEvent>
  void SetContentBlockDelta(ContentBlockDeltaT&& value) {
    m_contentBlockDeltaHasBeenSet = true;
    m_contentBlockDelta = std::forward<ContentBlockDeltaT>(value);
  }
  template <typename ContentBlockDeltaT = SendMessageContentBlockDeltaEvent>
  SendMessageEvents& WithContentBlockDelta(ContentBlockDeltaT&& value) {
    SetContentBlockDelta(std::forward<ContentBlockDeltaT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Emitted when a content block is complete</p>
   */
  inline const SendMessageContentBlockStopEvent& GetContentBlockStop() const { return m_contentBlockStop; }
  inline bool ContentBlockStopHasBeenSet() const { return m_contentBlockStopHasBeenSet; }
  template <typename ContentBlockStopT = SendMessageContentBlockStopEvent>
  void SetContentBlockStop(ContentBlockStopT&& value) {
    m_contentBlockStopHasBeenSet = true;
    m_contentBlockStop = std::forward<ContentBlockStopT>(value);
  }
  template <typename ContentBlockStopT = SendMessageContentBlockStopEvent>
  SendMessageEvents& WithContentBlockStop(ContentBlockStopT&& value) {
    SetContentBlockStop(std::forward<ContentBlockStopT>(value));
    return *this;
  }
  ///@}
 private:
  SendMessageResponseCreatedEvent m_responseCreated;

  SendMessageResponseInProgressEvent m_responseInProgress;

  SendMessageResponseCompletedEvent m_responseCompleted;

  SendMessageResponseFailedEvent m_responseFailed;

  SendMessageSummaryEvent m_summary;

  SendMessageHeartbeatEvent m_heartbeat;

  SendMessageContentBlockStartEvent m_contentBlockStart;

  SendMessageContentBlockDeltaEvent m_contentBlockDelta;

  SendMessageContentBlockStopEvent m_contentBlockStop;
  bool m_responseCreatedHasBeenSet = false;
  bool m_responseInProgressHasBeenSet = false;
  bool m_responseCompletedHasBeenSet = false;
  bool m_responseFailedHasBeenSet = false;
  bool m_summaryHasBeenSet = false;
  bool m_heartbeatHasBeenSet = false;
  bool m_contentBlockStartHasBeenSet = false;
  bool m_contentBlockDeltaHasBeenSet = false;
  bool m_contentBlockStopHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
