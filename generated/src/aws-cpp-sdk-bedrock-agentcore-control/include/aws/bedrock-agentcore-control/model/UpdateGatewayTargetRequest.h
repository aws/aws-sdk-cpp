/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/TargetConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class UpdateGatewayTargetRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API UpdateGatewayTargetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateGatewayTarget"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the gateway associated with the target.</p>
     */
    inline const Aws::String& GetGatewayIdentifier() const { return m_gatewayIdentifier; }
    inline bool GatewayIdentifierHasBeenSet() const { return m_gatewayIdentifierHasBeenSet; }
    template<typename GatewayIdentifierT = Aws::String>
    void SetGatewayIdentifier(GatewayIdentifierT&& value) { m_gatewayIdentifierHasBeenSet = true; m_gatewayIdentifier = std::forward<GatewayIdentifierT>(value); }
    template<typename GatewayIdentifierT = Aws::String>
    UpdateGatewayTargetRequest& WithGatewayIdentifier(GatewayIdentifierT&& value) { SetGatewayIdentifier(std::forward<GatewayIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the gateway target to update.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    UpdateGatewayTargetRequest& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for the gateway target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateGatewayTargetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated description for the gateway target.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateGatewayTargetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    UpdateGatewayTargetRequest& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated credential provider configurations for the gateway target.</p>
     */
    inline const Aws::Vector<CredentialProviderConfiguration>& GetCredentialProviderConfigurations() const { return m_credentialProviderConfigurations; }
    inline bool CredentialProviderConfigurationsHasBeenSet() const { return m_credentialProviderConfigurationsHasBeenSet; }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value); }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    UpdateGatewayTargetRequest& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value)); return *this;}
    template<typename CredentialProviderConfigurationsT = CredentialProviderConfiguration>
    UpdateGatewayTargetRequest& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayIdentifier;
    bool m_gatewayIdentifierHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    Aws::Vector<CredentialProviderConfiguration> m_credentialProviderConfigurations;
    bool m_credentialProviderConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
