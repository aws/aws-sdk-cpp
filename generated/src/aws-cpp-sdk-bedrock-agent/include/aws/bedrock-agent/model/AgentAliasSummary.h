/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/AgentAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/AliasInvocationState.h>
#include <aws/bedrock-agent/model/AgentAliasRoutingConfigurationListItem.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about an alias of an agent.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentAliasSummary">AWS
   * API Reference</a></p>
   */
  class AgentAliasSummary
  {
  public:
    AWS_BEDROCKAGENT_API AgentAliasSummary() = default;
    AWS_BEDROCKAGENT_API AgentAliasSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAliasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about </p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    AgentAliasSummary& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetAgentAliasName() const { return m_agentAliasName; }
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }
    template<typename AgentAliasNameT = Aws::String>
    void SetAgentAliasName(AgentAliasNameT&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::forward<AgentAliasNameT>(value); }
    template<typename AgentAliasNameT = Aws::String>
    AgentAliasSummary& WithAgentAliasName(AgentAliasNameT&& value) { SetAgentAliasName(std::forward<AgentAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentAliasSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<AgentAliasRoutingConfigurationListItem>>
    AgentAliasSummary& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = AgentAliasRoutingConfigurationListItem>
    AgentAliasSummary& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the alias.</p>
     */
    inline AgentAliasStatus GetAgentAliasStatus() const { return m_agentAliasStatus; }
    inline bool AgentAliasStatusHasBeenSet() const { return m_agentAliasStatusHasBeenSet; }
    inline void SetAgentAliasStatus(AgentAliasStatus value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }
    inline AgentAliasSummary& WithAgentAliasStatus(AgentAliasStatus value) { SetAgentAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AgentAliasSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AgentAliasSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The invocation state for the agent alias. If the agent alias is running, the
     * value is <code>ACCEPT_INVOCATIONS</code>. If the agent alias is paused, the
     * value is <code>REJECT_INVOCATIONS</code>. Use the <code>UpdateAgentAlias</code>
     * operation to change the invocation state.</p>
     */
    inline AliasInvocationState GetAliasInvocationState() const { return m_aliasInvocationState; }
    inline bool AliasInvocationStateHasBeenSet() const { return m_aliasInvocationStateHasBeenSet; }
    inline void SetAliasInvocationState(AliasInvocationState value) { m_aliasInvocationStateHasBeenSet = true; m_aliasInvocationState = value; }
    inline AgentAliasSummary& WithAliasInvocationState(AliasInvocationState value) { SetAliasInvocationState(value); return *this;}
    ///@}
  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus{AgentAliasStatus::NOT_SET};
    bool m_agentAliasStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    AliasInvocationState m_aliasInvocationState{AliasInvocationState::NOT_SET};
    bool m_aliasInvocationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
