/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationConfigStatus.h>
#include <aws/bedrock-agentcore-control/model/OnlineEvaluationExecutionStatus.h>
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
class UpdateOnlineEvaluationConfigResult {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateOnlineEvaluationConfigResult() = default;
  AWS_BEDROCKAGENTCORECONTROL_API UpdateOnlineEvaluationConfigResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCKAGENTCORECONTROL_API UpdateOnlineEvaluationConfigResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the updated online evaluation
   * configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigArn() const { return m_onlineEvaluationConfigArn; }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  void SetOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    m_onlineEvaluationConfigArnHasBeenSet = true;
    m_onlineEvaluationConfigArn = std::forward<OnlineEvaluationConfigArnT>(value);
  }
  template <typename OnlineEvaluationConfigArnT = Aws::String>
  UpdateOnlineEvaluationConfigResult& WithOnlineEvaluationConfigArn(OnlineEvaluationConfigArnT&& value) {
    SetOnlineEvaluationConfigArn(std::forward<OnlineEvaluationConfigArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the updated online evaluation configuration. </p>
   */
  inline const Aws::String& GetOnlineEvaluationConfigId() const { return m_onlineEvaluationConfigId; }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  void SetOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    m_onlineEvaluationConfigIdHasBeenSet = true;
    m_onlineEvaluationConfigId = std::forward<OnlineEvaluationConfigIdT>(value);
  }
  template <typename OnlineEvaluationConfigIdT = Aws::String>
  UpdateOnlineEvaluationConfigResult& WithOnlineEvaluationConfigId(OnlineEvaluationConfigIdT&& value) {
    SetOnlineEvaluationConfigId(std::forward<OnlineEvaluationConfigIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the online evaluation configuration was last updated.
   * </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  UpdateOnlineEvaluationConfigResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The status of the online evaluation configuration. </p>
   */
  inline OnlineEvaluationConfigStatus GetStatus() const { return m_status; }
  inline void SetStatus(OnlineEvaluationConfigStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateOnlineEvaluationConfigResult& WithStatus(OnlineEvaluationConfigStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The execution status indicating whether the online evaluation is currently
   * running. </p>
   */
  inline OnlineEvaluationExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
  inline void SetExecutionStatus(OnlineEvaluationExecutionStatus value) {
    m_executionStatusHasBeenSet = true;
    m_executionStatus = value;
  }
  inline UpdateOnlineEvaluationConfigResult& WithExecutionStatus(OnlineEvaluationExecutionStatus value) {
    SetExecutionStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The reason for failure if the online evaluation configuration update or
   * execution failed. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  UpdateOnlineEvaluationConfigResult& WithFailureReason(FailureReasonT&& value) {
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
  UpdateOnlineEvaluationConfigResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_onlineEvaluationConfigArn;
  bool m_onlineEvaluationConfigArnHasBeenSet = false;

  Aws::String m_onlineEvaluationConfigId;
  bool m_onlineEvaluationConfigIdHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  OnlineEvaluationConfigStatus m_status{OnlineEvaluationConfigStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  OnlineEvaluationExecutionStatus m_executionStatus{OnlineEvaluationExecutionStatus::NOT_SET};
  bool m_executionStatusHasBeenSet = false;

  Aws::String m_failureReason;
  bool m_failureReasonHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
