/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
#include <aws/bedrock-agentcore/model/AgentInsightCustomerMetadataStatus.h>
#include <aws/bedrock-agentcore/model/InsightType.h>
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
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Contains summary information about an Amazon Bedrock AgentCore Agent Insight,
 * including its label, description, and creation time. This structure is returned
 * by <code>ListAgentInsights</code>; use <code>GetAgentInsight</code> to retrieve
 * the sample sessions and root causes for a specific insight.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentInsightSummary">AWS
 * API Reference</a></p>
 */
class AgentInsightSummary {
 public:
  AWS_BEDROCKAGENTCORE_API AgentInsightSummary() = default;
  AWS_BEDROCKAGENTCORE_API AgentInsightSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentInsightSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline InsightType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InsightType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AgentInsightSummary& WithType(InsightType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A generated display label for the Agent Insight. This is a human-readable
   * summary of the detected pattern, not an identifier.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AgentInsightSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A generated description of the Agent Insight that explains the detected
   * pattern and its observed behavior across sessions.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AgentInsightSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight was first created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  AgentInsightSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions affected by the insight pattern.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline bool AffectedSessionCountHasBeenSet() const { return m_affectedSessionCountHasBeenSet; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline AgentInsightSummary& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Agent Insight.</p>
   */
  inline const Aws::String& GetAgentInsightId() const { return m_agentInsightId; }
  inline bool AgentInsightIdHasBeenSet() const { return m_agentInsightIdHasBeenSet; }
  template <typename AgentInsightIdT = Aws::String>
  void SetAgentInsightId(AgentInsightIdT&& value) {
    m_agentInsightIdHasBeenSet = true;
    m_agentInsightId = std::forward<AgentInsightIdT>(value);
  }
  template <typename AgentInsightIdT = Aws::String>
  AgentInsightSummary& WithAgentInsightId(AgentInsightIdT&& value) {
    SetAgentInsightId(std::forward<AgentInsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application that the Agent Insight belongs to.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  AgentInsightSummary& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Batch Evaluation that produced this Insight, when applicable.</p>
   */
  inline const Aws::String& GetBatchEvaluationId() const { return m_batchEvaluationId; }
  inline bool BatchEvaluationIdHasBeenSet() const { return m_batchEvaluationIdHasBeenSet; }
  template <typename BatchEvaluationIdT = Aws::String>
  void SetBatchEvaluationId(BatchEvaluationIdT&& value) {
    m_batchEvaluationIdHasBeenSet = true;
    m_batchEvaluationId = std::forward<BatchEvaluationIdT>(value);
  }
  template <typename BatchEvaluationIdT = Aws::String>
  AgentInsightSummary& WithBatchEvaluationId(BatchEvaluationIdT&& value) {
    SetBatchEvaluationId(std::forward<BatchEvaluationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether customer-encrypted metadata is available for the Agent
   * Insight.</p>
   */
  inline AgentInsightCustomerMetadataStatus GetCustomerMetadataStatus() const { return m_customerMetadataStatus; }
  inline bool CustomerMetadataStatusHasBeenSet() const { return m_customerMetadataStatusHasBeenSet; }
  inline void SetCustomerMetadataStatus(AgentInsightCustomerMetadataStatus value) {
    m_customerMetadataStatusHasBeenSet = true;
    m_customerMetadataStatus = value;
  }
  inline AgentInsightSummary& WithCustomerMetadataStatus(AgentInsightCustomerMetadataStatus value) {
    SetCustomerMetadataStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  AgentInsightSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Agent Insight is active or archived. Valid values:</p>
   * <ul> <li> <p> <code>ACTIVE</code> - The insight is currently active.</p> </li>
   * <li> <p> <code>ARCHIVED</code> - The insight has been archived.</p> </li> </ul>
   */
  inline AgentInsightArchiveStatus GetArchiveStatus() const { return m_archiveStatus; }
  inline bool ArchiveStatusHasBeenSet() const { return m_archiveStatusHasBeenSet; }
  inline void SetArchiveStatus(AgentInsightArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline AgentInsightSummary& WithArchiveStatus(AgentInsightArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent date and time when the insight pattern was observed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
  inline bool LastSeenAtHasBeenSet() const { return m_lastSeenAtHasBeenSet; }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  void SetLastSeenAt(LastSeenAtT&& value) {
    m_lastSeenAtHasBeenSet = true;
    m_lastSeenAt = std::forward<LastSeenAtT>(value);
  }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  AgentInsightSummary& WithLastSeenAt(LastSeenAtT&& value) {
    SetLastSeenAt(std::forward<LastSeenAtT>(value));
    return *this;
  }
  ///@}
 private:
  InsightType m_type{InsightType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  int m_affectedSessionCount{0};

  Aws::String m_agentInsightId;

  Aws::String m_applicationName;

  Aws::String m_batchEvaluationId;

  AgentInsightCustomerMetadataStatus m_customerMetadataStatus{AgentInsightCustomerMetadataStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  AgentInsightArchiveStatus m_archiveStatus{AgentInsightArchiveStatus::NOT_SET};

  Aws::Utils::DateTime m_lastSeenAt{};
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_agentInsightIdHasBeenSet = false;
  bool m_applicationNameHasBeenSet = false;
  bool m_batchEvaluationIdHasBeenSet = false;
  bool m_customerMetadataStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_lastSeenAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
