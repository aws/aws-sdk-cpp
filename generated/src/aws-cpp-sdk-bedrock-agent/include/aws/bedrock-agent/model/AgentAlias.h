/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/AgentAliasStatus.h>
#include <aws/bedrock-agent/model/AliasInvocationState.h>
#include <aws/bedrock-agent/model/AgentAliasRoutingConfigurationListItem.h>
#include <aws/bedrock-agent/model/AgentAliasHistoryEvent.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentAlias">AWS
   * API Reference</a></p>
   */
  class AgentAlias
  {
  public:
    AWS_BEDROCKAGENT_API AgentAlias() = default;
    AWS_BEDROCKAGENT_API AgentAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AgentAlias& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const { return m_agentAliasId; }
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }
    template<typename AgentAliasIdT = Aws::String>
    void SetAgentAliasId(AgentAliasIdT&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::forward<AgentAliasIdT>(value); }
    template<typename AgentAliasIdT = Aws::String>
    AgentAlias& WithAgentAliasId(AgentAliasIdT&& value) { SetAgentAliasId(std::forward<AgentAliasIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasName() const { return m_agentAliasName; }
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }
    template<typename AgentAliasNameT = Aws::String>
    void SetAgentAliasName(AgentAliasNameT&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::forward<AgentAliasNameT>(value); }
    template<typename AgentAliasNameT = Aws::String>
    AgentAlias& WithAgentAliasName(AgentAliasNameT&& value) { SetAgentAliasName(std::forward<AgentAliasNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasArn() const { return m_agentAliasArn; }
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }
    template<typename AgentAliasArnT = Aws::String>
    void SetAgentAliasArn(AgentAliasArnT&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::forward<AgentAliasArnT>(value); }
    template<typename AgentAliasArnT = Aws::String>
    AgentAlias& WithAgentAliasArn(AgentAliasArnT&& value) { SetAgentAliasArn(std::forward<AgentAliasArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AgentAlias& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AgentAlias& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    AgentAlias& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = AgentAliasRoutingConfigurationListItem>
    AgentAlias& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
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
    AgentAlias& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    AgentAlias& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline const Aws::Vector<AgentAliasHistoryEvent>& GetAgentAliasHistoryEvents() const { return m_agentAliasHistoryEvents; }
    inline bool AgentAliasHistoryEventsHasBeenSet() const { return m_agentAliasHistoryEventsHasBeenSet; }
    template<typename AgentAliasHistoryEventsT = Aws::Vector<AgentAliasHistoryEvent>>
    void SetAgentAliasHistoryEvents(AgentAliasHistoryEventsT&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents = std::forward<AgentAliasHistoryEventsT>(value); }
    template<typename AgentAliasHistoryEventsT = Aws::Vector<AgentAliasHistoryEvent>>
    AgentAlias& WithAgentAliasHistoryEvents(AgentAliasHistoryEventsT&& value) { SetAgentAliasHistoryEvents(std::forward<AgentAliasHistoryEventsT>(value)); return *this;}
    template<typename AgentAliasHistoryEventsT = AgentAliasHistoryEvent>
    AgentAlias& AddAgentAliasHistoryEvents(AgentAliasHistoryEventsT&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents.emplace_back(std::forward<AgentAliasHistoryEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> <li> <p>DISSOCIATED - The agent alias has no version
     * associated with it.</p> </li> </ul>
     */
    inline AgentAliasStatus GetAgentAliasStatus() const { return m_agentAliasStatus; }
    inline bool AgentAliasStatusHasBeenSet() const { return m_agentAliasStatusHasBeenSet; }
    inline void SetAgentAliasStatus(AgentAliasStatus value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }
    inline AgentAlias& WithAgentAliasStatus(AgentAliasStatus value) { SetAgentAliasStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    AgentAlias& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    AgentAlias& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
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
    inline AgentAlias& WithAliasInvocationState(AliasInvocationState value) { SetAliasInvocationState(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<AgentAliasHistoryEvent> m_agentAliasHistoryEvents;
    bool m_agentAliasHistoryEventsHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus{AgentAliasStatus::NOT_SET};
    bool m_agentAliasStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    AliasInvocationState m_aliasInvocationState{AliasInvocationState::NOT_SET};
    bool m_aliasInvocationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
