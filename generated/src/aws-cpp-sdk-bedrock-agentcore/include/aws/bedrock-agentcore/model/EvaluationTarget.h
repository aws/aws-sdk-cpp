/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
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
 * <p> The specification of which trace or span IDs to evaluate within the provided
 * input data. Allows precise targeting of evaluation at different levels: tool
 * calls, traces, or sessions. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/EvaluationTarget">AWS
 * API Reference</a></p>
 */
class EvaluationTarget {
 public:
  AWS_BEDROCKAGENTCORE_API EvaluationTarget() = default;
  AWS_BEDROCKAGENTCORE_API EvaluationTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API EvaluationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The list of specific span IDs to evaluate within the provided traces. Used
   * to target evaluation at individual tool calls or specific operations within the
   * agent's execution flow. </p>
   */
  inline const Aws::Vector<Aws::String>& GetSpanIds() const { return m_spanIds; }
  inline bool SpanIdsHasBeenSet() const { return m_spanIdsHasBeenSet; }
  template <typename SpanIdsT = Aws::Vector<Aws::String>>
  void SetSpanIds(SpanIdsT&& value) {
    m_spanIdsHasBeenSet = true;
    m_spanIds = std::forward<SpanIdsT>(value);
  }
  template <typename SpanIdsT = Aws::Vector<Aws::String>>
  EvaluationTarget& WithSpanIds(SpanIdsT&& value) {
    SetSpanIds(std::forward<SpanIdsT>(value));
    return *this;
  }
  template <typename SpanIdsT = Aws::String>
  EvaluationTarget& AddSpanIds(SpanIdsT&& value) {
    m_spanIdsHasBeenSet = true;
    m_spanIds.emplace_back(std::forward<SpanIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of trace IDs to evaluate, representing complete request-response
   * interactions. Used to evaluate entire conversation turns or specific agent
   * interactions within a session. </p>
   */
  inline const Aws::Vector<Aws::String>& GetTraceIds() const { return m_traceIds; }
  inline bool TraceIdsHasBeenSet() const { return m_traceIdsHasBeenSet; }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  void SetTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds = std::forward<TraceIdsT>(value);
  }
  template <typename TraceIdsT = Aws::Vector<Aws::String>>
  EvaluationTarget& WithTraceIds(TraceIdsT&& value) {
    SetTraceIds(std::forward<TraceIdsT>(value));
    return *this;
  }
  template <typename TraceIdsT = Aws::String>
  EvaluationTarget& AddTraceIds(TraceIdsT&& value) {
    m_traceIdsHasBeenSet = true;
    m_traceIds.emplace_back(std::forward<TraceIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_spanIds;

  Aws::Vector<Aws::String> m_traceIds;
  bool m_spanIdsHasBeenSet = false;
  bool m_traceIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
