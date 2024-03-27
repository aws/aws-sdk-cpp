/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_BEDROCKAGENT_API UpdateAgentAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline const Aws::String& GetAgentAliasId() const{ return m_agentAliasId; }

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline bool AgentAliasIdHasBeenSet() const { return m_agentAliasIdHasBeenSet; }

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline void SetAgentAliasId(const Aws::String& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = value; }

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline void SetAgentAliasId(Aws::String&& value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId = std::move(value); }

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline void SetAgentAliasId(const char* value) { m_agentAliasIdHasBeenSet = true; m_agentAliasId.assign(value); }

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasId(const Aws::String& value) { SetAgentAliasId(value); return *this;}

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasId(Aws::String&& value) { SetAgentAliasId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasId(const char* value) { SetAgentAliasId(value); return *this;}


    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline const Aws::String& GetAgentAliasName() const{ return m_agentAliasName; }

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline bool AgentAliasNameHasBeenSet() const { return m_agentAliasNameHasBeenSet; }

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline void SetAgentAliasName(const Aws::String& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = value; }

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline void SetAgentAliasName(Aws::String&& value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName = std::move(value); }

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline void SetAgentAliasName(const char* value) { m_agentAliasNameHasBeenSet = true; m_agentAliasName.assign(value); }

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasName(const Aws::String& value) { SetAgentAliasName(value); return *this;}

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasName(Aws::String&& value) { SetAgentAliasName(std::move(value)); return *this;}

    /**
     * <p>Specifies a new name for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentAliasName(const char* value) { SetAgentAliasName(value); return *this;}


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
    inline UpdateAgentAliasRequest& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the agent.</p>
     */
    inline UpdateAgentAliasRequest& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies a new description for the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateAgentAliasRequest& WithRoutingConfiguration(const Aws::Vector<AgentAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline UpdateAgentAliasRequest& WithRoutingConfiguration(Aws::Vector<AgentAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline UpdateAgentAliasRequest& AddRoutingConfiguration(const AgentAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }

    /**
     * <p>Contains details about the routing configuration of the alias.</p>
     */
    inline UpdateAgentAliasRequest& AddRoutingConfiguration(AgentAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_agentAliasId;
    bool m_agentAliasIdHasBeenSet = false;

    Aws::String m_agentAliasName;
    bool m_agentAliasNameHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AgentAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
