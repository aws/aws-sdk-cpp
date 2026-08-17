/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMemoryMetadataFilter.h>
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
 * <p>The long-term memory namespace that the agent might retrieve memory records
 * from, and the filters applied to that retrieval. You must specify either
 * namespace or namespacePath.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryRetrievalConfig">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryRetrievalConfig {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrievalConfig() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrievalConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrievalConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The metadata filter expressions that restrict retrieval to matching memory
   * records. You can specify a maximum of 5 expressions.</p>
   */
  inline const Aws::Vector<AgenticRetrieveMemoryMetadataFilter>& GetMetadataFilters() const { return m_metadataFilters; }
  inline bool MetadataFiltersHasBeenSet() const { return m_metadataFiltersHasBeenSet; }
  template <typename MetadataFiltersT = Aws::Vector<AgenticRetrieveMemoryMetadataFilter>>
  void SetMetadataFilters(MetadataFiltersT&& value) {
    m_metadataFiltersHasBeenSet = true;
    m_metadataFilters = std::forward<MetadataFiltersT>(value);
  }
  template <typename MetadataFiltersT = Aws::Vector<AgenticRetrieveMemoryMetadataFilter>>
  AgenticRetrieveMemoryRetrievalConfig& WithMetadataFilters(MetadataFiltersT&& value) {
    SetMetadataFilters(std::forward<MetadataFiltersT>(value));
    return *this;
  }
  template <typename MetadataFiltersT = AgenticRetrieveMemoryMetadataFilter>
  AgenticRetrieveMemoryRetrievalConfig& AddMetadataFilters(MetadataFiltersT&& value) {
    m_metadataFiltersHasBeenSet = true;
    m_metadataFilters.emplace_back(std::forward<MetadataFiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace prefix to filter memory records by. The agent retrieves memory
   * records in namespaces that start with the provided prefix. You must specify
   * either namespace or namespacePath.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  AgenticRetrieveMemoryRetrievalConfig& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent namespace to use for hierarchical retrievals. The agent retrieves
   * all memory records whose namespace falls under the same parent hierarchy. You
   * must specify either namespace or namespacePath.</p>
   */
  inline const Aws::String& GetNamespacePath() const { return m_namespacePath; }
  inline bool NamespacePathHasBeenSet() const { return m_namespacePathHasBeenSet; }
  template <typename NamespacePathT = Aws::String>
  void SetNamespacePath(NamespacePathT&& value) {
    m_namespacePathHasBeenSet = true;
    m_namespacePath = std::forward<NamespacePathT>(value);
  }
  template <typename NamespacePathT = Aws::String>
  AgenticRetrieveMemoryRetrievalConfig& WithNamespacePath(NamespacePathT&& value) {
    SetNamespacePath(std::forward<NamespacePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extraction strategy ID that restricts retrieval to memory records
   * produced by a single strategy. Omit this parameter to retrieve records from
   * every strategy on the memory resource.</p>
   */
  inline const Aws::String& GetStrategyId() const { return m_strategyId; }
  inline bool StrategyIdHasBeenSet() const { return m_strategyIdHasBeenSet; }
  template <typename StrategyIdT = Aws::String>
  void SetStrategyId(StrategyIdT&& value) {
    m_strategyIdHasBeenSet = true;
    m_strategyId = std::forward<StrategyIdT>(value);
  }
  template <typename StrategyIdT = Aws::String>
  AgenticRetrieveMemoryRetrievalConfig& WithStrategyId(StrategyIdT&& value) {
    SetStrategyId(std::forward<StrategyIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AgenticRetrieveMemoryMetadataFilter> m_metadataFilters;

  Aws::String m_namespace;

  Aws::String m_namespacePath;

  Aws::String m_strategyId;
  bool m_metadataFiltersHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_namespacePathHasBeenSet = false;
  bool m_strategyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
