/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agentcore-control/model/TargetStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore-control/model/TargetConfiguration.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderConfiguration.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{
  class CreateGatewayTargetResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayTargetResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayTargetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API CreateGatewayTargetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    CreateGatewayTargetResult& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the created target.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    CreateGatewayTargetResult& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    CreateGatewayTargetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the target was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    CreateGatewayTargetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the target.</p>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGatewayTargetResult& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reasons for the current status of the target.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    CreateGatewayTargetResult& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = Aws::String>
    CreateGatewayTargetResult& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGatewayTargetResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the target.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateGatewayTargetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the target.</p>
     */
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    CreateGatewayTargetResult& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credential provider configurations for the target.</p>
     */
    inline const Aws::Vector<CredentialProviderConfiguration>& GetCredentialProviderConfigurations() const { return m_credentialProviderConfigurations; }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value); }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    CreateGatewayTargetResult& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value)); return *this;}
    template<typename CredentialProviderConfigurationsT = CredentialProviderConfiguration>
    CreateGatewayTargetResult& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGatewayTargetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_gatewayArn;
    bool m_gatewayArnHasBeenSet = false;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    TargetStatus m_status{TargetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_statusReasons;
    bool m_statusReasonsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    TargetConfiguration m_targetConfiguration;
    bool m_targetConfigurationHasBeenSet = false;

    Aws::Vector<CredentialProviderConfiguration> m_credentialProviderConfigurations;
    bool m_credentialProviderConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
