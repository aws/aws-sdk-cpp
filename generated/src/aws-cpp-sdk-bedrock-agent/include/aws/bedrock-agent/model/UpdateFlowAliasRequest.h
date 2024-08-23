/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowAliasRoutingConfigurationListItem.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateFlowAliasRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateFlowAliasRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline const Aws::String& GetAliasIdentifier() const{ return m_aliasIdentifier; }
    inline bool AliasIdentifierHasBeenSet() const { return m_aliasIdentifierHasBeenSet; }
    inline void SetAliasIdentifier(const Aws::String& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = value; }
    inline void SetAliasIdentifier(Aws::String&& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = std::move(value); }
    inline void SetAliasIdentifier(const char* value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier.assign(value); }
    inline UpdateFlowAliasRequest& WithAliasIdentifier(const Aws::String& value) { SetAliasIdentifier(value); return *this;}
    inline UpdateFlowAliasRequest& WithAliasIdentifier(Aws::String&& value) { SetAliasIdentifier(std::move(value)); return *this;}
    inline UpdateFlowAliasRequest& WithAliasIdentifier(const char* value) { SetAliasIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the alias.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateFlowAliasRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateFlowAliasRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateFlowAliasRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const{ return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    inline void SetFlowIdentifier(const Aws::String& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = value; }
    inline void SetFlowIdentifier(Aws::String&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::move(value); }
    inline void SetFlowIdentifier(const char* value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier.assign(value); }
    inline UpdateFlowAliasRequest& WithFlowIdentifier(const Aws::String& value) { SetFlowIdentifier(value); return *this;}
    inline UpdateFlowAliasRequest& WithFlowIdentifier(Aws::String&& value) { SetFlowIdentifier(std::move(value)); return *this;}
    inline UpdateFlowAliasRequest& WithFlowIdentifier(const char* value) { SetFlowIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateFlowAliasRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateFlowAliasRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateFlowAliasRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the version to which to map the alias.</p>
     */
    inline const Aws::Vector<FlowAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const{ return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    inline void SetRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = value; }
    inline void SetRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::move(value); }
    inline UpdateFlowAliasRequest& WithRoutingConfiguration(const Aws::Vector<FlowAliasRoutingConfigurationListItem>& value) { SetRoutingConfiguration(value); return *this;}
    inline UpdateFlowAliasRequest& WithRoutingConfiguration(Aws::Vector<FlowAliasRoutingConfigurationListItem>&& value) { SetRoutingConfiguration(std::move(value)); return *this;}
    inline UpdateFlowAliasRequest& AddRoutingConfiguration(const FlowAliasRoutingConfigurationListItem& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(value); return *this; }
    inline UpdateFlowAliasRequest& AddRoutingConfiguration(FlowAliasRoutingConfigurationListItem&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_aliasIdentifier;
    bool m_aliasIdentifierHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<FlowAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
