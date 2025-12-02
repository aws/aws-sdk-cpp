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
 * <p> The contextual information that uniquely identifies a span within the
 * distributed tracing system. Contains session, trace, and span identifiers used
 * to correlate evaluation results with specific agent execution points.
 * </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/SpanContext">AWS
 * API Reference</a></p>
 */
class SpanContext {
 public:
  AWS_BEDROCKAGENTCORE_API SpanContext() = default;
  AWS_BEDROCKAGENTCORE_API SpanContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API SpanContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The unique identifier of the session containing this span. Sessions
   * represent complete conversation flows and are detected using configurable
   * <code>SessionTimeoutMinutes</code> (default 15 minutes). </p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  SpanContext& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the trace containing this span. Traces represent
   * individual request-response interactions within a session and group related
   * spans together. </p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  SpanContext& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the specific span being referenced. Spans represent
   * individual operations like tool calls, model invocations, or other discrete
   * actions within the agent's execution. </p>
   */
  inline const Aws::String& GetSpanId() const { return m_spanId; }
  inline bool SpanIdHasBeenSet() const { return m_spanIdHasBeenSet; }
  template <typename SpanIdT = Aws::String>
  void SetSpanId(SpanIdT&& value) {
    m_spanIdHasBeenSet = true;
    m_spanId = std::forward<SpanIdT>(value);
  }
  template <typename SpanIdT = Aws::String>
  SpanContext& WithSpanId(SpanIdT&& value) {
    SetSpanId(std::forward<SpanIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sessionId;
  bool m_sessionIdHasBeenSet = false;

  Aws::String m_traceId;
  bool m_traceIdHasBeenSet = false;

  Aws::String m_spanId;
  bool m_spanIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
