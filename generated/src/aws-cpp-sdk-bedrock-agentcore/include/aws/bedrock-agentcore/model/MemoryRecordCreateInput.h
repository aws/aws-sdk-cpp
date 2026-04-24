/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryContent.h>
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
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Input structure to create a new memory record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecordCreateInput">AWS
 * API Reference</a></p>
 */
class MemoryRecordCreateInput {
 public:
  AWS_BEDROCKAGENTCORE_API MemoryRecordCreateInput() = default;
  AWS_BEDROCKAGENTCORE_API MemoryRecordCreateInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MemoryRecordCreateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A client-provided identifier for tracking this specific record creation
   * request.</p>
   */
  inline const Aws::String& GetRequestIdentifier() const { return m_requestIdentifier; }
  inline bool RequestIdentifierHasBeenSet() const { return m_requestIdentifierHasBeenSet; }
  template <typename RequestIdentifierT = Aws::String>
  void SetRequestIdentifier(RequestIdentifierT&& value) {
    m_requestIdentifierHasBeenSet = true;
    m_requestIdentifier = std::forward<RequestIdentifierT>(value);
  }
  template <typename RequestIdentifierT = Aws::String>
  MemoryRecordCreateInput& WithRequestIdentifier(RequestIdentifierT&& value) {
    SetRequestIdentifier(std::forward<RequestIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of namespace identifiers that categorize or group the memory
   * record.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
  inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  void SetNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces = std::forward<NamespacesT>(value);
  }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  MemoryRecordCreateInput& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  MemoryRecordCreateInput& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content to be stored within the memory record.</p>
   */
  inline const MemoryContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = MemoryContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = MemoryContent>
  MemoryRecordCreateInput& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time at which the memory record was created.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  MemoryRecordCreateInput& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the memory strategy that defines how this memory record is
   * grouped.</p>
   */
  inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
  inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
  template <typename MemoryStrategyIdT = Aws::String>
  void SetMemoryStrategyId(MemoryStrategyIdT&& value) {
    m_memoryStrategyIdHasBeenSet = true;
    m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value);
  }
  template <typename MemoryStrategyIdT = Aws::String>
  MemoryRecordCreateInput& WithMemoryStrategyId(MemoryStrategyIdT&& value) {
    SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestIdentifier;

  Aws::Vector<Aws::String> m_namespaces;

  MemoryContent m_content;

  Aws::Utils::DateTime m_timestamp{};

  Aws::String m_memoryStrategyId;
  bool m_requestIdentifierHasBeenSet = false;
  bool m_namespacesHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_memoryStrategyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
