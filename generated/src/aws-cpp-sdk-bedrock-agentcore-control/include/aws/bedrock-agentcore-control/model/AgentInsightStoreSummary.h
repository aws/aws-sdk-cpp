/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEnablementStatus.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEncryptionConfiguration.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Contains summary information about an Agent Insight Store.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/AgentInsightStoreSummary">AWS
 * API Reference</a></p>
 */
class AgentInsightStoreSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API AgentInsightStoreSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Agent Insight Store.</p>
   */
  inline const Aws::String& GetAgentInsightStoreArn() const { return m_agentInsightStoreArn; }
  inline bool AgentInsightStoreArnHasBeenSet() const { return m_agentInsightStoreArnHasBeenSet; }
  template <typename AgentInsightStoreArnT = Aws::String>
  void SetAgentInsightStoreArn(AgentInsightStoreArnT&& value) {
    m_agentInsightStoreArnHasBeenSet = true;
    m_agentInsightStoreArn = std::forward<AgentInsightStoreArnT>(value);
  }
  template <typename AgentInsightStoreArnT = Aws::String>
  AgentInsightStoreSummary& WithAgentInsightStoreArn(AgentInsightStoreArnT&& value) {
    SetAgentInsightStoreArn(std::forward<AgentInsightStoreArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Agent Insight Store.</p>
   */
  inline const Aws::String& GetAgentInsightStoreId() const { return m_agentInsightStoreId; }
  inline bool AgentInsightStoreIdHasBeenSet() const { return m_agentInsightStoreIdHasBeenSet; }
  template <typename AgentInsightStoreIdT = Aws::String>
  void SetAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    m_agentInsightStoreIdHasBeenSet = true;
    m_agentInsightStoreId = std::forward<AgentInsightStoreIdT>(value);
  }
  template <typename AgentInsightStoreIdT = Aws::String>
  AgentInsightStoreSummary& WithAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    SetAgentInsightStoreId(std::forward<AgentInsightStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current lifecycle status of the Agent Insight Store. Valid values:</p>
   * <dl> <dt>ACTIVE</dt> <dd> <p>The store is available.</p> </dd> <dt>UPDATING</dt>
   * <dd> <p>The service is applying a requested change.</p> </dd> <dt>INACTIVE</dt>
   * <dd> <p>The store does not accept new Agent Insights.</p> </dd> <dt>ERROR</dt>
   * <dd> <p>The store requires intervention.</p> </dd> </dl>
   */
  inline AgentInsightStoreStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AgentInsightStoreStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AgentInsightStoreSummary& WithStatus(AgentInsightStoreStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Agent Insight Store accepts new Agent Insights. The
   * default value is enabled.</p>
   */
  inline AgentInsightStoreEnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline bool EnablementStatusHasBeenSet() const { return m_enablementStatusHasBeenSet; }
  inline void SetEnablementStatus(AgentInsightStoreEnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline AgentInsightStoreSummary& WithEnablementStatus(AgentInsightStoreEnablementStatus value) {
    SetEnablementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the encryption mode and key configuration that encrypts new Agent
   * Insights and protects the data at rest.</p>
   */
  inline const AgentInsightStoreEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = AgentInsightStoreEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = AgentInsightStoreEncryptionConfiguration>
  AgentInsightStoreSummary& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight Store was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentInsightStoreSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight Store was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AgentInsightStoreSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentInsightStoreArn;

  Aws::String m_agentInsightStoreId;

  AgentInsightStoreStatus m_status{AgentInsightStoreStatus::NOT_SET};

  AgentInsightStoreEnablementStatus m_enablementStatus{AgentInsightStoreEnablementStatus::NOT_SET};

  AgentInsightStoreEncryptionConfiguration m_encryptionConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_agentInsightStoreArnHasBeenSet = false;
  bool m_agentInsightStoreIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
