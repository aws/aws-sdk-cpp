/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInsightArchiveStatus.h>
#include <aws/bedrock-agentcore/model/AgentInsightCustomerMetadataStatus.h>
#include <aws/bedrock-agentcore/model/InsightRootCause.h>
#include <aws/bedrock-agentcore/model/InsightType.h>
#include <aws/bedrock-agentcore/model/SampleSession.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {
class GetAgentInsightResult {
 public:
  AWS_BEDROCKAGENTCORE_API GetAgentInsightResult() = default;
  AWS_BEDROCKAGENTCORE_API GetAgentInsightResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORE_API GetAgentInsightResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline InsightType GetType() const { return m_type; }
  inline void SetType(InsightType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline GetAgentInsightResult& WithType(InsightType value) {
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
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetAgentInsightResult& WithName(NameT&& value) {
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
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetAgentInsightResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight was first created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetAgentInsightResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of sessions affected by the insight pattern.</p>
   */
  inline int GetAffectedSessionCount() const { return m_affectedSessionCount; }
  inline void SetAffectedSessionCount(int value) {
    m_affectedSessionCountHasBeenSet = true;
    m_affectedSessionCount = value;
  }
  inline GetAgentInsightResult& WithAffectedSessionCount(int value) {
    SetAffectedSessionCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of sample sessions that illustrate the Agent Insight, including
   * per-session findings that point to the relevant spans or traces.</p>
   */
  inline const Aws::Vector<SampleSession>& GetSampleSessions() const { return m_sampleSessions; }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  void SetSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions = std::forward<SampleSessionsT>(value);
  }
  template <typename SampleSessionsT = Aws::Vector<SampleSession>>
  GetAgentInsightResult& WithSampleSessions(SampleSessionsT&& value) {
    SetSampleSessions(std::forward<SampleSessionsT>(value));
    return *this;
  }
  template <typename SampleSessionsT = SampleSession>
  GetAgentInsightResult& AddSampleSessions(SampleSessionsT&& value) {
    m_sampleSessionsHasBeenSet = true;
    m_sampleSessions.emplace_back(std::forward<SampleSessionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The root causes identified for the Agent Insight, each with an explanation,
   * an affected session count, an optional suggested fix, and sample sessions that
   * illustrate the root cause.</p>
   */
  inline const Aws::Vector<InsightRootCause>& GetRootCauses() const { return m_rootCauses; }
  template <typename RootCausesT = Aws::Vector<InsightRootCause>>
  void SetRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses = std::forward<RootCausesT>(value);
  }
  template <typename RootCausesT = Aws::Vector<InsightRootCause>>
  GetAgentInsightResult& WithRootCauses(RootCausesT&& value) {
    SetRootCauses(std::forward<RootCausesT>(value));
    return *this;
  }
  template <typename RootCausesT = InsightRootCause>
  GetAgentInsightResult& AddRootCauses(RootCausesT&& value) {
    m_rootCausesHasBeenSet = true;
    m_rootCauses.emplace_back(std::forward<RootCausesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the Agent Insight.</p>
   */
  inline const Aws::String& GetAgentInsightId() const { return m_agentInsightId; }
  template <typename AgentInsightIdT = Aws::String>
  void SetAgentInsightId(AgentInsightIdT&& value) {
    m_agentInsightIdHasBeenSet = true;
    m_agentInsightId = std::forward<AgentInsightIdT>(value);
  }
  template <typename AgentInsightIdT = Aws::String>
  GetAgentInsightResult& WithAgentInsightId(AgentInsightIdT&& value) {
    SetAgentInsightId(std::forward<AgentInsightIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application that the Agent Insight belongs to.</p>
   */
  inline const Aws::String& GetApplicationName() const { return m_applicationName; }
  template <typename ApplicationNameT = Aws::String>
  void SetApplicationName(ApplicationNameT&& value) {
    m_applicationNameHasBeenSet = true;
    m_applicationName = std::forward<ApplicationNameT>(value);
  }
  template <typename ApplicationNameT = Aws::String>
  GetAgentInsightResult& WithApplicationName(ApplicationNameT&& value) {
    SetApplicationName(std::forward<ApplicationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Batch Evaluation that produced this Insight, when applicable.</p>
   */
  inline const Aws::String& GetBatchEvaluationId() const { return m_batchEvaluationId; }
  template <typename BatchEvaluationIdT = Aws::String>
  void SetBatchEvaluationId(BatchEvaluationIdT&& value) {
    m_batchEvaluationIdHasBeenSet = true;
    m_batchEvaluationId = std::forward<BatchEvaluationIdT>(value);
  }
  template <typename BatchEvaluationIdT = Aws::String>
  GetAgentInsightResult& WithBatchEvaluationId(BatchEvaluationIdT&& value) {
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
  inline void SetCustomerMetadataStatus(AgentInsightCustomerMetadataStatus value) {
    m_customerMetadataStatusHasBeenSet = true;
    m_customerMetadataStatus = value;
  }
  inline GetAgentInsightResult& WithCustomerMetadataStatus(AgentInsightCustomerMetadataStatus value) {
    SetCustomerMetadataStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetAgentInsightResult& WithUpdatedAt(UpdatedAtT&& value) {
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
  inline void SetArchiveStatus(AgentInsightArchiveStatus value) {
    m_archiveStatusHasBeenSet = true;
    m_archiveStatus = value;
  }
  inline GetAgentInsightResult& WithArchiveStatus(AgentInsightArchiveStatus value) {
    SetArchiveStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The most recent date and time when the insight pattern was observed.</p>
   */
  inline const Aws::Utils::DateTime& GetLastSeenAt() const { return m_lastSeenAt; }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  void SetLastSeenAt(LastSeenAtT&& value) {
    m_lastSeenAtHasBeenSet = true;
    m_lastSeenAt = std::forward<LastSeenAtT>(value);
  }
  template <typename LastSeenAtT = Aws::Utils::DateTime>
  GetAgentInsightResult& WithLastSeenAt(LastSeenAtT&& value) {
    SetLastSeenAt(std::forward<LastSeenAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetAgentInsightResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  InsightType m_type{InsightType::NOT_SET};

  Aws::String m_name;

  Aws::String m_description;

  Aws::Utils::DateTime m_createdAt{};

  int m_affectedSessionCount{0};

  Aws::Vector<SampleSession> m_sampleSessions;

  Aws::Vector<InsightRootCause> m_rootCauses;

  Aws::String m_agentInsightId;

  Aws::String m_applicationName;

  Aws::String m_batchEvaluationId;

  AgentInsightCustomerMetadataStatus m_customerMetadataStatus{AgentInsightCustomerMetadataStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  AgentInsightArchiveStatus m_archiveStatus{AgentInsightArchiveStatus::NOT_SET};

  Aws::Utils::DateTime m_lastSeenAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_typeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_affectedSessionCountHasBeenSet = false;
  bool m_sampleSessionsHasBeenSet = false;
  bool m_rootCausesHasBeenSet = false;
  bool m_agentInsightIdHasBeenSet = false;
  bool m_applicationNameHasBeenSet = false;
  bool m_batchEvaluationIdHasBeenSet = false;
  bool m_customerMetadataStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_archiveStatusHasBeenSet = false;
  bool m_lastSeenAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
