﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/TraceElements.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Contains information about a dependency trace event in the
 * flow.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/FlowTraceDependencyEvent">AWS
 * API Reference</a></p>
 */
class FlowTraceDependencyEvent {
 public:
  AWS_BEDROCKAGENTRUNTIME_API FlowTraceDependencyEvent() = default;
  AWS_BEDROCKAGENTRUNTIME_API FlowTraceDependencyEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API FlowTraceDependencyEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the node that generated the dependency trace.</p>
   */
  inline const Aws::String& GetNodeName() const { return m_nodeName; }
  inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
  template <typename NodeNameT = Aws::String>
  void SetNodeName(NodeNameT&& value) {
    m_nodeNameHasBeenSet = true;
    m_nodeName = std::forward<NodeNameT>(value);
  }
  template <typename NodeNameT = Aws::String>
  FlowTraceDependencyEvent& WithNodeName(NodeNameT&& value) {
    SetNodeName(std::forward<NodeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the dependency trace was generated.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  FlowTraceDependencyEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace elements containing detailed information about the dependency.</p>
   */
  inline const TraceElements& GetTraceElements() const { return m_traceElements; }
  inline bool TraceElementsHasBeenSet() const { return m_traceElementsHasBeenSet; }
  template <typename TraceElementsT = TraceElements>
  void SetTraceElements(TraceElementsT&& value) {
    m_traceElementsHasBeenSet = true;
    m_traceElements = std::forward<TraceElementsT>(value);
  }
  template <typename TraceElementsT = TraceElements>
  FlowTraceDependencyEvent& WithTraceElements(TraceElementsT&& value) {
    SetTraceElements(std::forward<TraceElementsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeName;
  bool m_nodeNameHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  TraceElements m_traceElements;
  bool m_traceElementsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
