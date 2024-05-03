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
#include <aws/bedrock-agent/model/AgentAliasHistoryEvent.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/AgentAlias">AWS
   * API Reference</a></p>
   */
  class AgentAlias
  {
  public:
    AWS_BEDROCKAGENT_API AgentAlias();
    AWS_BEDROCKAGENT_API AgentAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasArn() const{ return m_agentAliasArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline void SetAgentAliasArn(const Aws::String& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline void SetAgentAliasArn(Aws::String&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline void SetAgentAliasArn(const char* value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasArn(const Aws::String& value) { SetAgentAliasArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasArn(Aws::String&& value) { SetAgentAliasArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasArn(const char* value) { SetAgentAliasArn(value); return *this;}


    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline const Aws::Vector<AgentAliasHistoryEvent>& GetAgentAliasHistoryEvents() const{ return m_agentAliasHistoryEvents; }

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline bool AgentAliasHistoryEventsHasBeenSet() const { return m_agentAliasHistoryEventsHasBeenSet; }

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline void SetAgentAliasHistoryEvents(const Aws::Vector<AgentAliasHistoryEvent>& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents = value; }

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline void SetAgentAliasHistoryEvents(Aws::Vector<AgentAliasHistoryEvent>&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents = std::move(value); }

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline AgentAlias& WithAgentAliasHistoryEvents(const Aws::Vector<AgentAliasHistoryEvent>& value) { SetAgentAliasHistoryEvents(value); return *this;}

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline AgentAlias& WithAgentAliasHistoryEvents(Aws::Vector<AgentAliasHistoryEvent>&& value) { SetAgentAliasHistoryEvents(std::move(value)); return *this;}

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline AgentAlias& AddAgentAliasHistoryEvents(const AgentAliasHistoryEvent& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents.push_back(value); return *this; }

    /**
     * <p>Contains details about the history of the alias.</p>
     */
    inline AgentAlias& AddAgentAliasHistoryEvents(AgentAliasHistoryEvent&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline const Aws::String& GetAgentAliasName() const{ return m_agentAliasName; }

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline void SetAgentAliasName(const Aws::String& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = value; }

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline void SetAgentAliasName(Aws::String&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::move(value); }

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline void SetAgentAliasName(const char* value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName.assign(value); }

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasName(const Aws::String& value) { SetAgentAliasName(value); return *this;}

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasName(Aws::String&& value) { SetAgentAliasName(std::move(value)); return *this;}

    /**
     * <p>The name of the alias of the agent.</p>
     */
    inline AgentAlias& WithAgentAliasName(const char* value) { SetAgentAliasName(value); return *this;}


    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline const AgentAliasStatus& GetAgentAliasStatus() const{ return m_agentAliasStatus; }

    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline bool AgentAliasStatusHasBeenSet() const { return m_agentAliasStatusHasBeenSet; }

    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline void SetAgentAliasStatus(const AgentAliasStatus& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }

    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline void SetAgentAliasStatus(AgentAliasStatus&& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = std::move(value); }

    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline AgentAlias& WithAgentAliasStatus(const AgentAliasStatus& value) { SetAgentAliasStatus(value); return *this;}

    /**
     * <p>The status of the alias of the agent and whether it is ready for use. The
     * following statuses are possible:</p> <ul> <li> <p>CREATING – The agent alias is
     * being created.</p> </li> <li> <p>PREPARED – The agent alias is finished being
     * created or updated and is ready to be invoked.</p> </li> <li> <p>FAILED – The
     * agent alias API operation failed.</p> </li> <li> <p>UPDATING – The agent alias
     * is being updated.</p> </li> <li> <p>DELETING – The agent alias is being
     * deleted.</p> </li> </ul>
     */
    inline AgentAlias& WithAgentAliasStatus(AgentAliasStatus&& value) { SetAgentAliasStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline AgentAlias& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline AgentAlias& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline AgentAlias& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline AgentAlias& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline AgentAlias& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline AgentAlias& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline AgentAlias& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline AgentAlias& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline AgentAlias& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline AgentAlias& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alias of the agent.</p>
     */
    inline AgentAlias& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline AgentAlias& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline AgentAlias& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline AgentAlias& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline AgentAlias& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>Information on the failure of Provisioned Throughput assigned to an agent
     * alias.</p>
     */
    inline AgentAlias& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline AgentAlias& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline AgentAlias& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline AgentAlias& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline AgentAlias& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }


    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline AgentAlias& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline AgentAlias& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_agentAliasArn;
    bool m_agentAliasArnHasBeenSet = false;

    Aws::Vector<AgentAliasHistoryEvent> m_agentAliasHistoryEvents;
    bool m_agentAliasHistoryEventsHasBeenSet = false;

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus;
    bool m_agentAliasStatusHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
