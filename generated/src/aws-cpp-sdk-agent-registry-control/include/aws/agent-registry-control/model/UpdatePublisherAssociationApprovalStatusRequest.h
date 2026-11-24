/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/agent-registry-control/AgentRegistryControlRequest.h>
#include <aws/agent-registry-control/AgentRegistryControl_EXPORTS.h>
#include <aws/agent-registry-control/model/AssociationApprovalStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

/**
 */
class UpdatePublisherAssociationApprovalStatusRequest : public AgentRegistryControlRequest {
 public:
  AWS_AGENTREGISTRYCONTROL_API UpdatePublisherAssociationApprovalStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdatePublisherAssociationApprovalStatus"; }

  AWS_AGENTREGISTRYCONTROL_API Aws::String SerializePayload() const override;

  ///@{

  inline const Aws::String& GetRecordArn() const { return m_recordArn; }
  inline bool RecordArnHasBeenSet() const { return m_recordArnHasBeenSet; }
  template <typename RecordArnT = Aws::String>
  void SetRecordArn(RecordArnT&& value) {
    m_recordArnHasBeenSet = true;
    m_recordArn = std::forward<RecordArnT>(value);
  }
  template <typename RecordArnT = Aws::String>
  UpdatePublisherAssociationApprovalStatusRequest& WithRecordArn(RecordArnT&& value) {
    SetRecordArn(std::forward<RecordArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline AssociationApprovalStatus GetApprovalStatus() const { return m_approvalStatus; }
  inline bool ApprovalStatusHasBeenSet() const { return m_approvalStatusHasBeenSet; }
  inline void SetApprovalStatus(AssociationApprovalStatus value) {
    m_approvalStatusHasBeenSet = true;
    m_approvalStatus = value;
  }
  inline UpdatePublisherAssociationApprovalStatusRequest& WithApprovalStatus(AssociationApprovalStatus value) {
    SetApprovalStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The curator's reason for the decision; may be empty.</p>
   */
  inline const Aws::String& GetApprovalStatusReason() const { return m_approvalStatusReason; }
  inline bool ApprovalStatusReasonHasBeenSet() const { return m_approvalStatusReasonHasBeenSet; }
  template <typename ApprovalStatusReasonT = Aws::String>
  void SetApprovalStatusReason(ApprovalStatusReasonT&& value) {
    m_approvalStatusReasonHasBeenSet = true;
    m_approvalStatusReason = std::forward<ApprovalStatusReasonT>(value);
  }
  template <typename ApprovalStatusReasonT = Aws::String>
  UpdatePublisherAssociationApprovalStatusRequest& WithApprovalStatusReason(ApprovalStatusReasonT&& value) {
    SetApprovalStatusReason(std::forward<ApprovalStatusReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordArn;

  AssociationApprovalStatus m_approvalStatus{AssociationApprovalStatus::NOT_SET};

  Aws::String m_approvalStatusReason;
  bool m_recordArnHasBeenSet = false;
  bool m_approvalStatusHasBeenSet = false;
  bool m_approvalStatusReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
