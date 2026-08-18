/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMessageContent.h>
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
 * <p>A long-term memory retrieval that the agent chose to perform. The record
 * reports the query and the namespace. The corresponding Retrieval step reports
 * the results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryRetrieveDetails">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryRetrieveDetails {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrieveDetails() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrieveDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryRetrieveDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The query that the agent composed.</p>
   */
  inline const AgenticRetrieveMessageContent& GetInputQuery() const { return m_inputQuery; }
  inline bool InputQueryHasBeenSet() const { return m_inputQueryHasBeenSet; }
  template <typename InputQueryT = AgenticRetrieveMessageContent>
  void SetInputQuery(InputQueryT&& value) {
    m_inputQueryHasBeenSet = true;
    m_inputQuery = std::forward<InputQueryT>(value);
  }
  template <typename InputQueryT = AgenticRetrieveMessageContent>
  AgenticRetrieveMemoryRetrieveDetails& WithInputQuery(InputQueryT&& value) {
    SetInputQuery(std::forward<InputQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the AgentCore Memory resource retrieved from.</p>
   */
  inline const Aws::String& GetMemoryId() const { return m_memoryId; }
  inline bool MemoryIdHasBeenSet() const { return m_memoryIdHasBeenSet; }
  template <typename MemoryIdT = Aws::String>
  void SetMemoryId(MemoryIdT&& value) {
    m_memoryIdHasBeenSet = true;
    m_memoryId = std::forward<MemoryIdT>(value);
  }
  template <typename MemoryIdT = Aws::String>
  AgenticRetrieveMemoryRetrieveDetails& WithMemoryId(MemoryIdT&& value) {
    SetMemoryId(std::forward<MemoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The namespace prefix retrieved from, as supplied in the request. This field
   * is present when the request specified namespace.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  AgenticRetrieveMemoryRetrieveDetails& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent namespace retrieved from hierarchically, as supplied in the
   * request. This field is present when the request specified namespacePath.</p>
   */
  inline const Aws::String& GetNamespacePath() const { return m_namespacePath; }
  inline bool NamespacePathHasBeenSet() const { return m_namespacePathHasBeenSet; }
  template <typename NamespacePathT = Aws::String>
  void SetNamespacePath(NamespacePathT&& value) {
    m_namespacePathHasBeenSet = true;
    m_namespacePath = std::forward<NamespacePathT>(value);
  }
  template <typename NamespacePathT = Aws::String>
  AgenticRetrieveMemoryRetrieveDetails& WithNamespacePath(NamespacePathT&& value) {
    SetNamespacePath(std::forward<NamespacePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The extraction strategy that restricted retrieval, if the request specified
   * one.</p>
   */
  inline const Aws::String& GetStrategyId() const { return m_strategyId; }
  inline bool StrategyIdHasBeenSet() const { return m_strategyIdHasBeenSet; }
  template <typename StrategyIdT = Aws::String>
  void SetStrategyId(StrategyIdT&& value) {
    m_strategyIdHasBeenSet = true;
    m_strategyId = std::forward<StrategyIdT>(value);
  }
  template <typename StrategyIdT = Aws::String>
  AgenticRetrieveMemoryRetrieveDetails& WithStrategyId(StrategyIdT&& value) {
    SetStrategyId(std::forward<StrategyIdT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveMessageContent m_inputQuery;

  Aws::String m_memoryId;

  Aws::String m_namespace;

  Aws::String m_namespacePath;

  Aws::String m_strategyId;
  bool m_inputQueryHasBeenSet = false;
  bool m_memoryIdHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_namespacePathHasBeenSet = false;
  bool m_strategyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
