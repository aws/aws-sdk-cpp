﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/NodeInputField.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains information about the inputs provided to a specific node during a
 * flow execution.</p>  <p>Flow executions is in preview release for Amazon
 * Bedrock and is subject to change.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/NodeInputEvent">AWS
 * API Reference</a></p>
 */
class NodeInputEvent {
 public:
  AWS_BEDROCKAGENTRUNTIME_API NodeInputEvent() = default;
  AWS_BEDROCKAGENTRUNTIME_API NodeInputEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API NodeInputEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the node that received the inputs.</p>
   */
  inline const Aws::String& GetNodeName() const { return m_nodeName; }
  inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
  template <typename NodeNameT = Aws::String>
  void SetNodeName(NodeNameT&& value) {
    m_nodeNameHasBeenSet = true;
    m_nodeName = std::forward<NodeNameT>(value);
  }
  template <typename NodeNameT = Aws::String>
  NodeInputEvent& WithNodeName(NodeNameT&& value) {
    SetNodeName(std::forward<NodeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the inputs were provided to the node.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  NodeInputEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of input fields provided to the node.</p>
   */
  inline const Aws::Vector<NodeInputField>& GetFields() const { return m_fields; }
  inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
  template <typename FieldsT = Aws::Vector<NodeInputField>>
  void SetFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields = std::forward<FieldsT>(value);
  }
  template <typename FieldsT = Aws::Vector<NodeInputField>>
  NodeInputEvent& WithFields(FieldsT&& value) {
    SetFields(std::forward<FieldsT>(value));
    return *this;
  }
  template <typename FieldsT = NodeInputField>
  NodeInputEvent& AddFields(FieldsT&& value) {
    m_fieldsHasBeenSet = true;
    m_fields.emplace_back(std::forward<FieldsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_nodeName;
  bool m_nodeNameHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  Aws::Vector<NodeInputField> m_fields;
  bool m_fieldsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
