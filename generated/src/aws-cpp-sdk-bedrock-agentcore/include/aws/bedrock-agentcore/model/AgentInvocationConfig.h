/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentCoreRuntimeInvocation.h>

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
 * <p>The agent that the batch evaluation invokes with each scenario in the
 * dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentInvocationConfig">AWS
 * API Reference</a></p>
 */
class AgentInvocationConfig {
 public:
  AWS_BEDROCKAGENTCORE_API AgentInvocationConfig() = default;
  AWS_BEDROCKAGENTCORE_API AgentInvocationConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentInvocationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for invoking an agent hosted on AgentCore Runtime.</p>
   */
  inline const AgentCoreRuntimeInvocation& GetAgentCoreRuntime() const { return m_agentCoreRuntime; }
  inline bool AgentCoreRuntimeHasBeenSet() const { return m_agentCoreRuntimeHasBeenSet; }
  template <typename AgentCoreRuntimeT = AgentCoreRuntimeInvocation>
  void SetAgentCoreRuntime(AgentCoreRuntimeT&& value) {
    m_agentCoreRuntimeHasBeenSet = true;
    m_agentCoreRuntime = std::forward<AgentCoreRuntimeT>(value);
  }
  template <typename AgentCoreRuntimeT = AgentCoreRuntimeInvocation>
  AgentInvocationConfig& WithAgentCoreRuntime(AgentCoreRuntimeT&& value) {
    SetAgentCoreRuntime(std::forward<AgentCoreRuntimeT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCoreRuntimeInvocation m_agentCoreRuntime;
  bool m_agentCoreRuntimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
