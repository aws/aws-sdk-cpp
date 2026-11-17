/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreEnablementStatus.h>
#include <aws/bedrock-agentcore-control/model/AgentInsightStoreStatus.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {
class UpdateAgentInsightStoreResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentInsightStoreResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentInsightStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdateAgentInsightStoreResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the updated Agent Insight Store.</p>
   */
  inline const Aws::String& GetAgentInsightStoreArn() const { return m_agentInsightStoreArn; }
  template <typename AgentInsightStoreArnT = Aws::String>
  void SetAgentInsightStoreArn(AgentInsightStoreArnT&& value) {
    m_agentInsightStoreArnHasBeenSet = true;
    m_agentInsightStoreArn = std::forward<AgentInsightStoreArnT>(value);
  }
  template <typename AgentInsightStoreArnT = Aws::String>
  UpdateAgentInsightStoreResult& WithAgentInsightStoreArn(AgentInsightStoreArnT&& value) {
    SetAgentInsightStoreArn(std::forward<AgentInsightStoreArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the updated Agent Insight Store.</p>
   */
  inline const Aws::String& GetAgentInsightStoreId() const { return m_agentInsightStoreId; }
  template <typename AgentInsightStoreIdT = Aws::String>
  void SetAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    m_agentInsightStoreIdHasBeenSet = true;
    m_agentInsightStoreId = std::forward<AgentInsightStoreIdT>(value);
  }
  template <typename AgentInsightStoreIdT = Aws::String>
  UpdateAgentInsightStoreResult& WithAgentInsightStoreId(AgentInsightStoreIdT&& value) {
    SetAgentInsightStoreId(std::forward<AgentInsightStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the Agent Insight Store after the update request.
   * Valid values:</p> <dl> <dt>ACTIVE</dt> <dd> <p>The store is available.</p> </dd>
   * <dt>UPDATING</dt> <dd> <p>The service is applying a requested change.</p> </dd>
   * <dt>INACTIVE</dt> <dd> <p>The store does not accept new Agent Insights.</p>
   * </dd> <dt>ERROR</dt> <dd> <p>The store requires intervention.</p> </dd> </dl>
   */
  inline AgentInsightStoreStatus GetStatus() const { return m_status; }
  inline void SetStatus(AgentInsightStoreStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAgentInsightStoreResult& WithStatus(AgentInsightStoreStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the Agent Insight Store accepts new Agent Insights after
   * the update request.</p>
   */
  inline AgentInsightStoreEnablementStatus GetEnablementStatus() const { return m_enablementStatus; }
  inline void SetEnablementStatus(AgentInsightStoreEnablementStatus value) {
    m_enablementStatusHasBeenSet = true;
    m_enablementStatus = value;
  }
  inline UpdateAgentInsightStoreResult& WithEnablementStatus(AgentInsightStoreEnablementStatus value) {
    SetEnablementStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the Agent Insight Store was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateAgentInsightStoreResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Describes the failure that prevented the Agent Insight Store from reaching
   * its requested lifecycle status.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  UpdateAgentInsightStoreResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  UpdateAgentInsightStoreResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_agentInsightStoreArn;

  Aws::String m_agentInsightStoreId;

  AgentInsightStoreStatus m_status{AgentInsightStoreStatus::NOT_SET};

  AgentInsightStoreEnablementStatus m_enablementStatus{AgentInsightStoreEnablementStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_agentInsightStoreArnHasBeenSet = false;
  bool m_agentInsightStoreIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_enablementStatusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
