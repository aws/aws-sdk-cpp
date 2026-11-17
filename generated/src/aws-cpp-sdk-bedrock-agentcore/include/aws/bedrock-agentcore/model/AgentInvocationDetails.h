/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentCoreRuntimeInvocationDetails.h>

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
 * <p>The agent that a batch evaluation invoked with each scenario in the
 * dataset.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentInvocationDetails">AWS
 * API Reference</a></p>
 */
class AgentInvocationDetails {
 public:
  AWS_BEDROCKAGENTCORE_API AgentInvocationDetails() = default;
  AWS_BEDROCKAGENTCORE_API AgentInvocationDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentInvocationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The details of the agent hosted on AgentCore Runtime that the batch
   * evaluation invoked.</p>
   */
  inline const AgentCoreRuntimeInvocationDetails& GetAgentCoreRuntime() const { return m_agentCoreRuntime; }
  inline bool AgentCoreRuntimeHasBeenSet() const { return m_agentCoreRuntimeHasBeenSet; }
  template <typename AgentCoreRuntimeT = AgentCoreRuntimeInvocationDetails>
  void SetAgentCoreRuntime(AgentCoreRuntimeT&& value) {
    m_agentCoreRuntimeHasBeenSet = true;
    m_agentCoreRuntime = std::forward<AgentCoreRuntimeT>(value);
  }
  template <typename AgentCoreRuntimeT = AgentCoreRuntimeInvocationDetails>
  AgentInvocationDetails& WithAgentCoreRuntime(AgentCoreRuntimeT&& value) {
    SetAgentCoreRuntime(std::forward<AgentCoreRuntimeT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCoreRuntimeInvocationDetails m_agentCoreRuntime;
  bool m_agentCoreRuntimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
