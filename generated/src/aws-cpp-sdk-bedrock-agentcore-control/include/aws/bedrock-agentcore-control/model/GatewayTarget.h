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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>The gateway target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/GatewayTarget">AWS
   * API Reference</a></p>
   */
  class GatewayTarget
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API GatewayTarget() = default;
    AWS_BEDROCKAGENTCORECONTROL_API GatewayTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API GatewayTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway target.</p>
     */
    inline const Aws::String& GetGatewayArn() const { return m_gatewayArn; }
    inline bool GatewayArnHasBeenSet() const { return m_gatewayArnHasBeenSet; }
    template<typename GatewayArnT = Aws::String>
    void SetGatewayArn(GatewayArnT&& value) { m_gatewayArnHasBeenSet = true; m_gatewayArn = std::forward<GatewayArnT>(value); }
    template<typename GatewayArnT = Aws::String>
    GatewayTarget& WithGatewayArn(GatewayArnT&& value) { SetGatewayArn(std::forward<GatewayArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target ID.</p>
     */
    inline const Aws::String& GetTargetId() const { return m_targetId; }
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }
    template<typename TargetIdT = Aws::String>
    void SetTargetId(TargetIdT&& value) { m_targetIdHasBeenSet = true; m_targetId = std::forward<TargetIdT>(value); }
    template<typename TargetIdT = Aws::String>
    GatewayTarget& WithTargetId(TargetIdT&& value) { SetTargetId(std::forward<TargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the target was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GatewayTarget& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the target was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GatewayTarget& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the gateway target.</p>
     */
    inline TargetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TargetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GatewayTarget& WithStatus(TargetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status reasons for the target status.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStatusReasons() const { return m_statusReasons; }
    inline bool StatusReasonsHasBeenSet() const { return m_statusReasonsHasBeenSet; }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    void SetStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons = std::forward<StatusReasonsT>(value); }
    template<typename StatusReasonsT = Aws::Vector<Aws::String>>
    GatewayTarget& WithStatusReasons(StatusReasonsT&& value) { SetStatusReasons(std::forward<StatusReasonsT>(value)); return *this;}
    template<typename StatusReasonsT = Aws::String>
    GatewayTarget& AddStatusReasons(StatusReasonsT&& value) { m_statusReasonsHasBeenSet = true; m_statusReasons.emplace_back(std::forward<StatusReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the gateway target.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GatewayTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the gateway target.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GatewayTarget& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TargetConfiguration& GetTargetConfiguration() const { return m_targetConfiguration; }
    inline bool TargetConfigurationHasBeenSet() const { return m_targetConfigurationHasBeenSet; }
    template<typename TargetConfigurationT = TargetConfiguration>
    void SetTargetConfiguration(TargetConfigurationT&& value) { m_targetConfigurationHasBeenSet = true; m_targetConfiguration = std::forward<TargetConfigurationT>(value); }
    template<typename TargetConfigurationT = TargetConfiguration>
    GatewayTarget& WithTargetConfiguration(TargetConfigurationT&& value) { SetTargetConfiguration(std::forward<TargetConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provider configurations.</p>
     */
    inline const Aws::Vector<CredentialProviderConfiguration>& GetCredentialProviderConfigurations() const { return m_credentialProviderConfigurations; }
    inline bool CredentialProviderConfigurationsHasBeenSet() const { return m_credentialProviderConfigurationsHasBeenSet; }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    void SetCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations = std::forward<CredentialProviderConfigurationsT>(value); }
    template<typename CredentialProviderConfigurationsT = Aws::Vector<CredentialProviderConfiguration>>
    GatewayTarget& WithCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { SetCredentialProviderConfigurations(std::forward<CredentialProviderConfigurationsT>(value)); return *this;}
    template<typename CredentialProviderConfigurationsT = CredentialProviderConfiguration>
    GatewayTarget& AddCredentialProviderConfigurations(CredentialProviderConfigurationsT&& value) { m_credentialProviderConfigurationsHasBeenSet = true; m_credentialProviderConfigurations.emplace_back(std::forward<CredentialProviderConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last synchronization time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSynchronizedAt() const { return m_lastSynchronizedAt; }
    inline bool LastSynchronizedAtHasBeenSet() const { return m_lastSynchronizedAtHasBeenSet; }
    template<typename LastSynchronizedAtT = Aws::Utils::DateTime>
    void SetLastSynchronizedAt(LastSynchronizedAtT&& value) { m_lastSynchronizedAtHasBeenSet = true; m_lastSynchronizedAt = std::forward<LastSynchronizedAtT>(value); }
    template<typename LastSynchronizedAtT = Aws::Utils::DateTime>
    GatewayTarget& WithLastSynchronizedAt(LastSynchronizedAtT&& value) { SetLastSynchronizedAt(std::forward<LastSynchronizedAtT>(value)); return *this;}
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

    Aws::Utils::DateTime m_lastSynchronizedAt{};
    bool m_lastSynchronizedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
