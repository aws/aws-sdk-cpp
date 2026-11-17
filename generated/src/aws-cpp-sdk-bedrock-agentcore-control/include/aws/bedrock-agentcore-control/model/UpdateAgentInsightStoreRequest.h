/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEnablementStatus.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEncryptionConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateAgentInsightStoreRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentInsightStoreRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentInsightStore"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateAgentInsightStoreRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the unique identifier of the Agent Insight Store to update.</p>
   */
  inline const Aws::String& GetAgentInsightStoreId() const { return m_agentInsightStoreId; }
  inline bool AgentInsightStoreIdHasBeenSet() const { return m_agentInsightStoreIdHasBeenSet; }
  template <typename AgentInsightStoreIdT = Aws::String>
  void SetAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    m_agentInsightStoreIdHasBeenSet = true;
    m_agentInsightStoreId = std::forward<AgentInsightStoreIdT>(value);
  }
  template <typename AgentInsightStoreIdT = Aws::String>
  UpdateAgentInsightStoreRequest& WithAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    SetAgentInsightStoreId(std::forward<AgentInsightStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Agent Insight Store accepts new Agent Insights. If you
   * don't specify this parameter, the store's current enablement setting remains
   * unchanged.</p>
   */
  inline AgentInsightStoreEnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline bool EnablementStatusHasBeenSet() const { return m_enablementStatusHasBeenSet; }
  inline void SetEnablementStatus(AgentInsightStoreEnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline UpdateAgentInsightStoreRequest& WithEnablementStatus(AgentInsightStoreEnablementStatus value) {
    SetEnablementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption mode and key configuration to use for new Agent
   * Insights. If you don't specify this parameter, the store's current encryption
   * configuration remains unchanged.</p>
   */
  inline const AgentInsightStoreEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = AgentInsightStoreEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = AgentInsightStoreEncryptionConfiguration>
  UpdateAgentInsightStoreRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_agentInsightStoreId;

  AgentInsightStoreEnablementStatus m_enablementStatus{AgentInsightStoreEnablementStatus::NOT_SET};

  AgentInsightStoreEncryptionConfiguration m_encryptionConfiguration;
  bool m_clientTokenHasBeenSet = true;
  bool m_agentInsightStoreIdHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
