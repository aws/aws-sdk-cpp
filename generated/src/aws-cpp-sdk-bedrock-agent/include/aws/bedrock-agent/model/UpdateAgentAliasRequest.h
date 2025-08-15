/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/AliasInvocationState.h>
#include <aws/bedrock-agent/model/AgentAliasRoutingConfigurationListItem.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateAgentAliasRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateAgentAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    UpdateAgentAliasRequest& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    UpdateAgentAliasRequest& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline const Aws::String& GetAgentAliasName() const { return m_agentAliasName; }
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }
    template<typename AgentAliasNameT = Aws::String>
    void SetAgentAliasName(AgentAliasNameT&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::forward<AgentAliasNameT>(value); }
    template<typename AgentAliasNameT = Aws::String>
    UpdateAgentAliasRequest& WithAgentAliasName(AgentAliasNameT&& value) { SetAgentAliasName(std::forward<AgentAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateAgentAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    UpdateAgentAliasRequest& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = AgentAliasRoutingConfigurationListItem>
    UpdateAgentAliasRequest& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The invocation state for the agent alias. To pause the agent alias, set the
     * value to <code>REJECT_INVOCATIONS</code>. To start the agent alias running
     * again, set the value to <code>ACCEPT_INVOCATIONS</code>. Use the
     * <code>GetAgentAlias</code>, or <code>ListAgentAliases</code>, operation to get
     * the invocation state of an agent alias.</p>
     */
    inline AliasInvocationState GetAliasInvocationState() const { return m_aliasInvocationState; }
    inline bool AliasInvocationStateHasBeenSet() const { return m_aliasInvocationStateHasBeenSet; }
    inline void SetAliasInvocationState(AliasInvocationState value) { m_aliasInvocationStateHasBeenSet = true; m_aliasInvocationState = value; }
    inline UpdateAgentAliasRequest& WithAliasInvocationState(AliasInvocationState value) { SetAliasInvocationState(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    AliasInvocationState m_aliasInvocationState{AliasInvocationState::NOT_SET};
    bool m_aliasInvocationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
