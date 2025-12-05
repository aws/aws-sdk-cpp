/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/MemoryContent.h>
#include <aws/bedrock-agentcore/model/MetadataValue.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Contains information about a memory record in an AgentCore Memory
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/MemoryRecord">AWS
 * API Reference</a></p>
 */
class MemoryRecord {
 public:
  AWS_BEDROCKAGENTCORE_API MemoryRecord() = default;
  AWS_BEDROCKAGENTCORE_API MemoryRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API MemoryRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the memory record.</p>
   */
  inline const Aws::String& GetMemoryRecordId() const { return m_memoryRecordId; }
  inline bool MemoryRecordIdHasBeenSet() const { return m_memoryRecordIdHasBeenSet; }
  template <typename MemoryRecordIdT = Aws::String>
  void SetMemoryRecordId(MemoryRecordIdT&& value) {
    m_memoryRecordIdHasBeenSet = true;
    m_memoryRecordId = std::forward<MemoryRecordIdT>(value);
  }
  template <typename MemoryRecordIdT = Aws::String>
  MemoryRecord& WithMemoryRecordId(MemoryRecordIdT&& value) {
    SetMemoryRecordId(std::forward<MemoryRecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The content of the memory record.</p>
   */
  inline const MemoryContent& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = MemoryContent>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = MemoryContent>
  MemoryRecord& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the memory strategy associated with this record.</p>
   */
  inline const Aws::String& GetMemoryStrategyId() const { return m_memoryStrategyId; }
  inline bool MemoryStrategyIdHasBeenSet() const { return m_memoryStrategyIdHasBeenSet; }
  template <typename MemoryStrategyIdT = Aws::String>
  void SetMemoryStrategyId(MemoryStrategyIdT&& value) {
    m_memoryStrategyIdHasBeenSet = true;
    m_memoryStrategyId = std::forward<MemoryStrategyIdT>(value);
  }
  template <typename MemoryStrategyIdT = Aws::String>
  MemoryRecord& WithMemoryStrategyId(MemoryStrategyIdT&& value) {
    SetMemoryStrategyId(std::forward<MemoryStrategyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespaces associated with this memory record. Namespaces help organize
   * and categorize memory records.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNamespaces() const { return m_namespaces; }
  inline bool NamespacesHasBeenSet() const { return m_namespacesHasBeenSet; }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  void SetNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces = std::forward<NamespacesT>(value);
  }
  template <typename NamespacesT = Aws::Vector<Aws::String>>
  MemoryRecord& WithNamespaces(NamespacesT&& value) {
    SetNamespaces(std::forward<NamespacesT>(value));
    return *this;
  }
  template <typename NamespacesT = Aws::String>
  MemoryRecord& AddNamespaces(NamespacesT&& value) {
    m_namespacesHasBeenSet = true;
    m_namespaces.emplace_back(std::forward<NamespacesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the memory record was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  MemoryRecord& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of metadata key-value pairs associated with a memory record.</p>
   */
  inline const Aws::Map<Aws::String, MetadataValue>& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = Aws::Map<Aws::String, MetadataValue>>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = Aws::Map<Aws::String, MetadataValue>>
  MemoryRecord& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  template <typename MetadataKeyT = Aws::String, typename MetadataValueT = MetadataValue>
  MemoryRecord& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_memoryRecordId;

  MemoryContent m_content;

  Aws::String m_memoryStrategyId;

  Aws::Vector<Aws::String> m_namespaces;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Map<Aws::String, MetadataValue> m_metadata;
  bool m_memoryRecordIdHasBeenSet = false;
  bool m_contentHasBeenSet = false;
  bool m_memoryStrategyIdHasBeenSet = false;
  bool m_namespacesHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
