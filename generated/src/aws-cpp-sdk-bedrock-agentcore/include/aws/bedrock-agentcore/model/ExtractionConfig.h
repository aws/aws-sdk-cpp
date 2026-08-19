/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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

/**
 * <p>The configuration for extraction behavior. Use this structure to specify
 * namespace variable keys and their values for namespace substitution during
 * long-term memory extraction.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/ExtractionConfig">AWS
 * API Reference</a></p>
 */
class ExtractionConfig {
 public:
  AWS_BEDROCKAGENTCORE_API ExtractionConfig() = default;
  AWS_BEDROCKAGENTCORE_API ExtractionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API ExtractionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A map of <code>namespaceKeys</code> to their values. The service substitutes
   * these values into <code>namespaceTemplates</code> during long-term memory
   * extraction to control namespace hierarchy.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetNamespaceVariables() const { return m_namespaceVariables; }
  inline bool NamespaceVariablesHasBeenSet() const { return m_namespaceVariablesHasBeenSet; }
  template <typename NamespaceVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetNamespaceVariables(NamespaceVariablesT&& value) {
    m_namespaceVariablesHasBeenSet = true;
    m_namespaceVariables = std::forward<NamespaceVariablesT>(value);
  }
  template <typename NamespaceVariablesT = Aws::Map<Aws::String, Aws::String>>
  ExtractionConfig& WithNamespaceVariables(NamespaceVariablesT&& value) {
    SetNamespaceVariables(std::forward<NamespaceVariablesT>(value));
    return *this;
  }
  template <typename NamespaceVariablesKeyT = Aws::String, typename NamespaceVariablesValueT = Aws::String>
  ExtractionConfig& AddNamespaceVariables(NamespaceVariablesKeyT&& key, NamespaceVariablesValueT&& value) {
    m_namespaceVariablesHasBeenSet = true;
    m_namespaceVariables.emplace(std::forward<NamespaceVariablesKeyT>(key), std::forward<NamespaceVariablesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Map<Aws::String, Aws::String> m_namespaceVariables;
  bool m_namespaceVariablesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
