/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/InsightsFailureSignal.h>
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
 * <p>Details about a specific span where a failure was detected.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/FailureSpanDetail">AWS
 * API Reference</a></p>
 */
class FailureSpanDetail {
 public:
  AWS_BEDROCKAGENTCORE_API FailureSpanDetail() = default;
  AWS_BEDROCKAGENTCORE_API FailureSpanDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API FailureSpanDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the span where the failure occurred.</p>
   */
  inline const Aws::String& GetSpanId() const { return m_spanId; }
  inline bool SpanIdHasBeenSet() const { return m_spanIdHasBeenSet; }
  template <typename SpanIdT = Aws::String>
  void SetSpanId(SpanIdT&& value) {
    m_spanIdHasBeenSet = true;
    m_spanId = std::forward<SpanIdT>(value);
  }
  template <typename SpanIdT = Aws::String>
  FailureSpanDetail& WithSpanId(SpanIdT&& value) {
    SetSpanId(std::forward<SpanIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace identifier associated with the failure span.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  FailureSpanDetail& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure signals detected in this span.</p>
   */
  inline const Aws::Vector<InsightsFailureSignal>& GetSignals() const { return m_signals; }
  inline bool SignalsHasBeenSet() const { return m_signalsHasBeenSet; }
  template <typename SignalsT = Aws::Vector<InsightsFailureSignal>>
  void SetSignals(SignalsT&& value) {
    m_signalsHasBeenSet = true;
    m_signals = std::forward<SignalsT>(value);
  }
  template <typename SignalsT = Aws::Vector<InsightsFailureSignal>>
  FailureSpanDetail& WithSignals(SignalsT&& value) {
    SetSignals(std::forward<SignalsT>(value));
    return *this;
  }
  template <typename SignalsT = InsightsFailureSignal>
  FailureSpanDetail& AddSignals(SignalsT&& value) {
    m_signalsHasBeenSet = true;
    m_signals.emplace_back(std::forward<SignalsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_spanId;

  Aws::String m_traceId;

  Aws::Vector<InsightsFailureSignal> m_signals;
  bool m_spanIdHasBeenSet = false;
  bool m_traceIdHasBeenSet = false;
  bool m_signalsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
