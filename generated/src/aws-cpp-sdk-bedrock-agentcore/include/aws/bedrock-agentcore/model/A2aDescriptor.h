/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentCardDefinition.h>

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
 * <p> The A2A (Agent-to-Agent) descriptor configuration for a registry
 * record.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/A2aDescriptor">AWS
 * API Reference</a></p>
 */
class A2aDescriptor {
 public:
  AWS_BEDROCKAGENTCORE_API A2aDescriptor() = default;
  AWS_BEDROCKAGENTCORE_API A2aDescriptor(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API A2aDescriptor& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The agent card definition that describes the agent's capabilities and
   * interface.</p>
   */
  inline const AgentCardDefinition& GetAgentCard() const { return m_agentCard; }
  inline bool AgentCardHasBeenSet() const { return m_agentCardHasBeenSet; }
  template <typename AgentCardT = AgentCardDefinition>
  void SetAgentCard(AgentCardT&& value) {
    m_agentCardHasBeenSet = true;
    m_agentCard = std::forward<AgentCardT>(value);
  }
  template <typename AgentCardT = AgentCardDefinition>
  A2aDescriptor& WithAgentCard(AgentCardT&& value) {
    SetAgentCard(std::forward<AgentCardT>(value));
    return *this;
  }
  ///@}
 private:
  AgentCardDefinition m_agentCard;
  bool m_agentCardHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
