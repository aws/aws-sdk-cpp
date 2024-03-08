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
   * <p>Contains the information of an agent alias</p><p><h3>See Also:</h3>   <a
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


    
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    
    inline AgentAlias& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    
    inline AgentAlias& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    
    inline AgentAlias& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    
    inline AgentAlias& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    
    inline AgentAlias& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    
    inline AgentAlias& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    
    inline const Aws::String& GetAgentAliasName() const{ return m_agentAliasName; }

    
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }

    
    inline void SetAgentAliasName(const Aws::String& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = value; }

    
    inline void SetAgentAliasName(Aws::String&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::move(value); }

    
    inline void SetAgentAliasName(const char* value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName.assign(value); }

    
    inline AgentAlias& WithAgentAliasName(const Aws::String& value) { SetAgentAliasName(value); return *this;}

    
    inline AgentAlias& WithAgentAliasName(Aws::String&& value) { SetAgentAliasName(std::move(value)); return *this;}

    
    inline AgentAlias& WithAgentAliasName(const char* value) { SetAgentAliasName(value); return *this;}


    
    inline const Aws::String& GetAgentAliasArn() const{ return m_agentAliasArn; }

    
    inline bool AgentAliasArnHasBeenSet() const { return m_agentAliasArnHasBeenSet; }

    
    inline void SetAgentAliasArn(const Aws::String& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = value; }

    
    inline void SetAgentAliasArn(Aws::String&& value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn = std::move(value); }

    
    inline void SetAgentAliasArn(const char* value) { m_agentAliasArnHasBeenSet = true; m_agentAliasArn.assign(value); }

    
    inline AgentAlias& WithAgentAliasArn(const Aws::String& value) { SetAgentAliasArn(value); return *this;}

    
    inline AgentAlias& WithAgentAliasArn(Aws::String&& value) { SetAgentAliasArn(std::move(value)); return *this;}

    
    inline AgentAlias& WithAgentAliasArn(const char* value) { SetAgentAliasArn(value); return *this;}


    
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    
    inline AgentAlias& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    
    inline AgentAlias& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    
    inline AgentAlias& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline AgentAlias& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline AgentAlias& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline AgentAlias& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    
    inline void SetRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    
    inline void SetRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    
    inline AgentAlias& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    
    inline AgentAlias& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    
    inline AgentAlias& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    
    inline AgentAlias& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    
    inline AgentAlias& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    
    inline AgentAlias& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline AgentAlias& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline AgentAlias& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::Vector<AgentAliasHistoryEvent>& GetAgentAliasHistoryEvents() const{ return m_agentAliasHistoryEvents; }

    
    inline bool AgentAliasHistoryEventsHasBeenSet() const { return m_agentAliasHistoryEventsHasBeenSet; }

    
    inline void SetAgentAliasHistoryEvents(const Aws::Vector<AgentAliasHistoryEvent>& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents = value; }

    
    inline void SetAgentAliasHistoryEvents(Aws::Vector<AgentAliasHistoryEvent>&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents = std::move(value); }

    
    inline AgentAlias& WithAgentAliasHistoryEvents(const Aws::Vector<AgentAliasHistoryEvent>& value) { SetAgentAliasHistoryEvents(value); return *this;}

    
    inline AgentAlias& WithAgentAliasHistoryEvents(Aws::Vector<AgentAliasHistoryEvent>&& value) { SetAgentAliasHistoryEvents(std::move(value)); return *this;}

    
    inline AgentAlias& AddAgentAliasHistoryEvents(const AgentAliasHistoryEvent& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents.push_back(value); return *this; }

    
    inline AgentAlias& AddAgentAliasHistoryEvents(AgentAliasHistoryEvent&& value) { m_agentAliasHistoryEventsHasBeenSet = true; m_agentAliasHistoryEvents.push_back(std::move(value)); return *this; }


    
    inline const AgentAliasStatus& GetAgentAliasStatus() const{ return m_agentAliasStatus; }

    
    inline bool AgentAliasStatusHasBeenSet() const { return m_agentAliasStatusHasBeenSet; }

    
    inline void SetAgentAliasStatus(const AgentAliasStatus& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }

    
    inline void SetAgentAliasStatus(AgentAliasStatus&& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = std::move(value); }

    
    inline AgentAlias& WithAgentAliasStatus(const AgentAliasStatus& value) { SetAgentAliasStatus(value); return *this;}

    
    inline AgentAlias& WithAgentAliasStatus(AgentAliasStatus&& value) { SetAgentAliasStatus(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<AgentAliasHistoryEvent> m_agentAliasHistoryEvents;
    bool m_agentAliasHistoryEventsHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus;
    bool m_agentAliasStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
