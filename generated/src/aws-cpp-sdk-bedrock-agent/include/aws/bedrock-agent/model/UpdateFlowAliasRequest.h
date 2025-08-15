/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/FlowAliasConcurrencyConfiguration.h>
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
    AWS_BEDROCKAGENT_API UpdateFlowAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFlowAlias"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the alias.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateFlowAliasRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the alias.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateFlowAliasRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the version to which to map the alias.</p>
     */
    inline const Aws::Vector<FlowAliasRoutingConfigurationListItem>& GetRoutingConfiguration() const { return m_routingConfiguration; }
    inline bool RoutingConfigurationHasBeenSet() const { return m_routingConfigurationHasBeenSet; }
    template<typename RoutingConfigurationT = Aws::Vector<FlowAliasRoutingConfigurationListItem>>
    void SetRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration = std::forward<RoutingConfigurationT>(value); }
    template<typename RoutingConfigurationT = Aws::Vector<FlowAliasRoutingConfigurationListItem>>
    UpdateFlowAliasRequest& WithRoutingConfiguration(RoutingConfigurationT&& value) { SetRoutingConfiguration(std::forward<RoutingConfigurationT>(value)); return *this;}
    template<typename RoutingConfigurationT = FlowAliasRoutingConfigurationListItem>
    UpdateFlowAliasRequest& AddRoutingConfiguration(RoutingConfigurationT&& value) { m_routingConfigurationHasBeenSet = true; m_routingConfiguration.emplace_back(std::forward<RoutingConfigurationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration that specifies how nodes in the flow are executed in
     * parallel.</p>
     */
    inline const FlowAliasConcurrencyConfiguration& GetConcurrencyConfiguration() const { return m_concurrencyConfiguration; }
    inline bool ConcurrencyConfigurationHasBeenSet() const { return m_concurrencyConfigurationHasBeenSet; }
    template<typename ConcurrencyConfigurationT = FlowAliasConcurrencyConfiguration>
    void SetConcurrencyConfiguration(ConcurrencyConfigurationT&& value) { m_concurrencyConfigurationHasBeenSet = true; m_concurrencyConfiguration = std::forward<ConcurrencyConfigurationT>(value); }
    template<typename ConcurrencyConfigurationT = FlowAliasConcurrencyConfiguration>
    UpdateFlowAliasRequest& WithConcurrencyConfiguration(ConcurrencyConfigurationT&& value) { SetConcurrencyConfiguration(std::forward<ConcurrencyConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the flow.</p>
     */
    inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
    inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
    template<typename FlowIdentifierT = Aws::String>
    void SetFlowIdentifier(FlowIdentifierT&& value) { m_flowIdentifierHasBeenSet = true; m_flowIdentifier = std::forward<FlowIdentifierT>(value); }
    template<typename FlowIdentifierT = Aws::String>
    UpdateFlowAliasRequest& WithFlowIdentifier(FlowIdentifierT&& value) { SetFlowIdentifier(std::forward<FlowIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the alias.</p>
     */
    inline const Aws::String& GetAliasIdentifier() const { return m_aliasIdentifier; }
    inline bool AliasIdentifierHasBeenSet() const { return m_aliasIdentifierHasBeenSet; }
    template<typename AliasIdentifierT = Aws::String>
    void SetAliasIdentifier(AliasIdentifierT&& value) { m_aliasIdentifierHasBeenSet = true; m_aliasIdentifier = std::forward<AliasIdentifierT>(value); }
    template<typename AliasIdentifierT = Aws::String>
    UpdateFlowAliasRequest& WithAliasIdentifier(AliasIdentifierT&& value) { SetAliasIdentifier(std::forward<AliasIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FlowAliasRoutingConfigurationListItem> m_routingConfiguration;
    bool m_routingConfigurationHasBeenSet = false;

    FlowAliasConcurrencyConfiguration m_concurrencyConfiguration;
    bool m_concurrencyConfigurationHasBeenSet = false;

    Aws::String m_flowIdentifier;
    bool m_flowIdentifierHasBeenSet = false;

    Aws::String m_aliasIdentifier;
    bool m_aliasIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
