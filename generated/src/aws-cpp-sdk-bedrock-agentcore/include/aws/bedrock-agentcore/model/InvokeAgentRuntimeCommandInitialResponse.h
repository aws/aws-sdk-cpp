/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/http/HttpTypes.h>
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

class InvokeAgentRuntimeCommandInitialResponse {
 public:
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandInitialResponse() = default;
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API InvokeAgentRuntimeCommandInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the runtime session in which the command was
   * executed.</p>
   */
  inline const Aws::String& GetRuntimeSessionId() const { return m_runtimeSessionId; }
  inline bool RuntimeSessionIdHasBeenSet() const { return m_runtimeSessionIdHasBeenSet; }
  template <typename RuntimeSessionIdT = Aws::String>
  void SetRuntimeSessionId(RuntimeSessionIdT&& value) {
    m_runtimeSessionIdHasBeenSet = true;
    m_runtimeSessionId = std::forward<RuntimeSessionIdT>(value);
  }
  template <typename RuntimeSessionIdT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithRuntimeSessionId(RuntimeSessionIdT&& value) {
    SetRuntimeSessionId(std::forward<RuntimeSessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace identifier for request tracking.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent trace information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceParent() const { return m_traceParent; }
  inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
  template <typename TraceParentT = Aws::String>
  void SetTraceParent(TraceParentT&& value) {
    m_traceParentHasBeenSet = true;
    m_traceParent = std::forward<TraceParentT>(value);
  }
  template <typename TraceParentT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithTraceParent(TraceParentT&& value) {
    SetTraceParent(std::forward<TraceParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace state information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceState() const { return m_traceState; }
  inline bool TraceStateHasBeenSet() const { return m_traceStateHasBeenSet; }
  template <typename TraceStateT = Aws::String>
  void SetTraceState(TraceStateT&& value) {
    m_traceStateHasBeenSet = true;
    m_traceState = std::forward<TraceStateT>(value);
  }
  template <typename TraceStateT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithTraceState(TraceStateT&& value) {
    SetTraceState(std::forward<TraceStateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context information for distributed tracing.</p>
   */
  inline const Aws::String& GetBaggage() const { return m_baggage; }
  inline bool BaggageHasBeenSet() const { return m_baggageHasBeenSet; }
  template <typename BaggageT = Aws::String>
  void SetBaggage(BaggageT&& value) {
    m_baggageHasBeenSet = true;
    m_baggage = std::forward<BaggageT>(value);
  }
  template <typename BaggageT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithBaggage(BaggageT&& value) {
    SetBaggage(std::forward<BaggageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MIME type of the response data. This indicates how to interpret the
   * response data. Common values include application/json for JSON data.</p>
   */
  inline const Aws::String& GetContentType() const { return m_contentType; }
  inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }
  template <typename ContentTypeT = Aws::String>
  void SetContentType(ContentTypeT&& value) {
    m_contentTypeHasBeenSet = true;
    m_contentType = std::forward<ContentTypeT>(value);
  }
  template <typename ContentTypeT = Aws::String>
  InvokeAgentRuntimeCommandInitialResponse& WithContentType(ContentTypeT&& value) {
    SetContentType(std::forward<ContentTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP status code of the response. A status code of 200 indicates a
   * successful operation. Other status codes indicate various error conditions.</p>
   */
  inline int GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline InvokeAgentRuntimeCommandInitialResponse& WithStatusCode(int value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_runtimeSessionId;

  Aws::String m_traceId;

  Aws::String m_traceParent;

  Aws::String m_traceState;

  Aws::String m_baggage;

  Aws::String m_contentType;

  int m_statusCode{0};
  bool m_runtimeSessionIdHasBeenSet = false;
  bool m_traceIdHasBeenSet = false;
  bool m_traceParentHasBeenSet = false;
  bool m_traceStateHasBeenSet = false;
  bool m_baggageHasBeenSet = false;
  bool m_contentTypeHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
