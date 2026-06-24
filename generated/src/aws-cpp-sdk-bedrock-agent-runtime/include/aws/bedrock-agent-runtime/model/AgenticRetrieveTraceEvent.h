/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveTraceEventAttributes.h>
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
 * <p>A trace event providing visibility into the agentic retrieval
 * process.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveTraceEvent">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveTraceEvent {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEvent() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveTraceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attributes describing the trace event details.</p>
   */
  inline const AgenticRetrieveTraceEventAttributes& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = AgenticRetrieveTraceEventAttributes>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = AgenticRetrieveTraceEventAttributes>
  AgenticRetrieveTraceEvent& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the trace event.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  AgenticRetrieveTraceEvent& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the trace event occurred.</p>
   */
  inline long long GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  inline void SetTimestamp(long long value) {
    m_timestampHasBeenSet = true;
    m_timestamp = value;
  }
  inline AgenticRetrieveTraceEvent& WithTimestamp(long long value) {
    SetTimestamp(value);
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveTraceEventAttributes m_attributes;

  Aws::String m_id;

  long long m_timestamp{0};
  bool m_attributesHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
