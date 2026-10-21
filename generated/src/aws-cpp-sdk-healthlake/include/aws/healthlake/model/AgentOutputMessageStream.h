/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/EndOfOutputEvent.h>
#include <aws/healthlake/model/ErrorEvent.h>
#include <aws/healthlake/model/HeartbeatEvent.h>
#include <aws/healthlake/model/ProgressEvent.h>
#include <aws/healthlake/model/TextMessageEvent.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace HealthLake {
namespace Model {

/**
 * <p>Represents the response stream type from the agent during chat-based profile
 * customization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/AgentOutputMessageStream">AWS
 * API Reference</a></p>
 */
class AgentOutputMessageStream {
 public:
  AWS_HEALTHLAKE_API AgentOutputMessageStream() = default;
  AWS_HEALTHLAKE_API AgentOutputMessageStream(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API AgentOutputMessageStream& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An incremental text update from the agent.</p>
   */
  inline const TextMessageEvent& GetTextMessageEvent() const { return m_textMessageEvent; }
  inline bool TextMessageEventHasBeenSet() const { return m_textMessageEventHasBeenSet; }
  template <typename TextMessageEventT = TextMessageEvent>
  void SetTextMessageEvent(TextMessageEventT&& value) {
    m_textMessageEventHasBeenSet = true;
    m_textMessageEvent = std::forward<TextMessageEventT>(value);
  }
  template <typename TextMessageEventT = TextMessageEvent>
  AgentOutputMessageStream& WithTextMessageEvent(TextMessageEventT&& value) {
    SetTextMessageEvent(std::forward<TextMessageEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An incremental progress update from the agent.</p>
   */
  inline const ProgressEvent& GetProgressEvent() const { return m_progressEvent; }
  inline bool ProgressEventHasBeenSet() const { return m_progressEventHasBeenSet; }
  template <typename ProgressEventT = ProgressEvent>
  void SetProgressEvent(ProgressEventT&& value) {
    m_progressEventHasBeenSet = true;
    m_progressEvent = std::forward<ProgressEventT>(value);
  }
  template <typename ProgressEventT = ProgressEvent>
  AgentOutputMessageStream& WithProgressEvent(ProgressEventT&& value) {
    SetProgressEvent(std::forward<ProgressEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Periodically emitted event to keep the connection alive.</p>
   */
  inline const HeartbeatEvent& GetHeartbeatEvent() const { return m_heartbeatEvent; }
  inline bool HeartbeatEventHasBeenSet() const { return m_heartbeatEventHasBeenSet; }
  template <typename HeartbeatEventT = HeartbeatEvent>
  void SetHeartbeatEvent(HeartbeatEventT&& value) {
    m_heartbeatEventHasBeenSet = true;
    m_heartbeatEvent = std::forward<HeartbeatEventT>(value);
  }
  template <typename HeartbeatEventT = HeartbeatEvent>
  AgentOutputMessageStream& WithHeartbeatEvent(HeartbeatEventT&& value) {
    SetHeartbeatEvent(std::forward<HeartbeatEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An exception encountered while serving the request.</p>
   */
  inline const ErrorEvent& GetErrorEvent() const { return m_errorEvent; }
  inline bool ErrorEventHasBeenSet() const { return m_errorEventHasBeenSet; }
  template <typename ErrorEventT = ErrorEvent>
  void SetErrorEvent(ErrorEventT&& value) {
    m_errorEventHasBeenSet = true;
    m_errorEvent = std::forward<ErrorEventT>(value);
  }
  template <typename ErrorEventT = ErrorEvent>
  AgentOutputMessageStream& WithErrorEvent(ErrorEventT&& value) {
    SetErrorEvent(std::forward<ErrorEventT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The final event in the response stream from the agent during chat-based
   * profile customization. The caller can assume that the stream has ended upon
   * receiving this event.</p>
   */
  inline const EndOfOutputEvent& GetEndOfOutputEvent() const { return m_endOfOutputEvent; }
  inline bool EndOfOutputEventHasBeenSet() const { return m_endOfOutputEventHasBeenSet; }
  template <typename EndOfOutputEventT = EndOfOutputEvent>
  void SetEndOfOutputEvent(EndOfOutputEventT&& value) {
    m_endOfOutputEventHasBeenSet = true;
    m_endOfOutputEvent = std::forward<EndOfOutputEventT>(value);
  }
  template <typename EndOfOutputEventT = EndOfOutputEvent>
  AgentOutputMessageStream& WithEndOfOutputEvent(EndOfOutputEventT&& value) {
    SetEndOfOutputEvent(std::forward<EndOfOutputEventT>(value));
    return *this;
  }
  ///@}
 private:
  TextMessageEvent m_textMessageEvent;

  ProgressEvent m_progressEvent;

  HeartbeatEvent m_heartbeatEvent;

  ErrorEvent m_errorEvent;

  EndOfOutputEvent m_endOfOutputEvent;
  bool m_textMessageEventHasBeenSet = false;
  bool m_progressEventHasBeenSet = false;
  bool m_heartbeatEventHasBeenSet = false;
  bool m_errorEventHasBeenSet = false;
  bool m_endOfOutputEventHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
