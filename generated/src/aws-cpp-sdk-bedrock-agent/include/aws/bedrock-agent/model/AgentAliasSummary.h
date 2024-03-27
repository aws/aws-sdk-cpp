/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/AgentAliasStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API AgentAliasSummary();
    AWS_BEDROCKAGENT_API AgentAliasSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API AgentAliasSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains details about </p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>Contains details about </p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>Contains details about </p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>Contains details about </p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>Contains details about </p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>Contains details about </p>
     */
    inline AgentAliasSummary& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>Contains details about </p>
     */
    inline AgentAliasSummary& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>Contains details about </p>
     */
    inline AgentAliasSummary& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetAgentAliasName() const{ return m_agentAliasName; }

    /**
     * <p>The name of the alias.</p>
     */
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetAgentAliasName(const Aws::String& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = value; }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetAgentAliasName(Aws::String&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::move(value); }

    /**
     * <p>The name of the alias.</p>
     */
    inline void SetAgentAliasName(const char* value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName.assign(value); }

    /**
     * <p>The name of the alias.</p>
     */
    inline AgentAliasSummary& WithAgentAliasName(const Aws::String& value) { SetAgentAliasName(value); return *this;}

    /**
     * <p>The name of the alias.</p>
     */
    inline AgentAliasSummary& WithAgentAliasName(Aws::String&& value) { SetAgentAliasName(std::move(value)); return *this;}

    /**
     * <p>The name of the alias.</p>
     */
    inline AgentAliasSummary& WithAgentAliasName(const char* value) { SetAgentAliasName(value); return *this;}


    /**
     * <p>The status of the alias.</p>
     */
    inline const AgentAliasStatus& GetAgentAliasStatus() const{ return m_agentAliasStatus; }

    /**
     * <p>The status of the alias.</p>
     */
    inline bool AgentAliasStatusHasBeenSet() const { return m_agentAliasStatusHasBeenSet; }

    /**
     * <p>The status of the alias.</p>
     */
    inline void SetAgentAliasStatus(const AgentAliasStatus& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = value; }

    /**
     * <p>The status of the alias.</p>
     */
    inline void SetAgentAliasStatus(AgentAliasStatus&& value) { m_agentAliasStatusHasBeenSet = true; m_agentAliasStatus = std::move(value); }

    /**
     * <p>The status of the alias.</p>
     */
    inline AgentAliasSummary& WithAgentAliasStatus(const AgentAliasStatus& value) { SetAgentAliasStatus(value); return *this;}

    /**
     * <p>The status of the alias.</p>
     */
    inline AgentAliasSummary& WithAgentAliasStatus(AgentAliasStatus&& value) { SetAgentAliasStatus(std::move(value)); return *this;}


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
    inline AgentAliasSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the alias of the agent was created.</p>
     */
    inline AgentAliasSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the alias.</p>
     */
    inline AgentAliasSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the alias.</p>
     */
    inline AgentAliasSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the alias.</p>
     */
    inline AgentAliasSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline const Aws::Vector<AgentAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline void SetRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline void SetRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasSummary& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasSummary& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasSummary& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>Contains details about the version of the agent with which the alias is
     * associated.</p>
     */
    inline AgentAliasSummary& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }


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
    inline AgentAliasSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the alias was last updated.</p>
     */
    inline AgentAliasSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    AgentAliasStatus m_agentAliasStatus;
    bool m_agentAliasStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
