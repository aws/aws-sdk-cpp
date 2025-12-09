/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentManagedRuntimeType.h>
#include <aws/bedrock-agentcore-control/model/Code.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>The configuration for the source code that defines how the agent runtime code
 * should be executed, including the code location, runtime environment, and entry
 * point.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CodeConfiguration">AWS
 * API Reference</a></p>
 */
class CodeConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CodeConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CodeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CodeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The source code location and configuration details.</p>
   */
  inline const Code& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Code>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Code>
  CodeConfiguration& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime environment for executing the code (for example, Python 3.9 or
   * Node.js 18).</p>
   */
  inline AgentManagedRuntimeType GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  inline void SetRuntime(AgentManagedRuntimeType value) {
    m_runtimeHasBeenSet = true;
    m_runtime = value;
  }
  inline CodeConfiguration& WithRuntime(AgentManagedRuntimeType value) {
    SetRuntime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entry point for the code execution, specifying the function or method
   * that should be invoked when the code runs.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntryPoint() const { return m_entryPoint; }
  inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
  template <typename EntryPointT = Aws::Vector<Aws::String>>
  void SetEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint = std::forward<EntryPointT>(value);
  }
  template <typename EntryPointT = Aws::Vector<Aws::String>>
  CodeConfiguration& WithEntryPoint(EntryPointT&& value) {
    SetEntryPoint(std::forward<EntryPointT>(value));
    return *this;
  }
  template <typename EntryPointT = Aws::String>
  CodeConfiguration& AddEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint.emplace_back(std::forward<EntryPointT>(value));
    return *this;
  }
  ///@}
 private:
  Code m_code;

  AgentManagedRuntimeType m_runtime{AgentManagedRuntimeType::NOT_SET};

  Aws::Vector<Aws::String> m_entryPoint;
  bool m_codeHasBeenSet = false;
  bool m_runtimeHasBeenSet = false;
  bool m_entryPointHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
