/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectSchedulingRequest.h>
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/ApprovalType.h>
#include <aws/connectscheduling/model/RuleFailureAction.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectScheduling {
namespace Model {

/**
 * <p>The request for <code>CreateTimeOff</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/CreateTimeOffRequest">AWS
 * API Reference</a></p>
 */
class CreateTimeOffRequest : public ConnectSchedulingRequest {
 public:
  AWS_CONNECTSCHEDULING_API CreateTimeOffRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTimeOff"; }

  AWS_CONNECTSCHEDULING_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the Connect Customer instance. This can be the ID or the
   * ARN of the instance. You can <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
   * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
   */
  inline const Aws::String& GetInstanceId() const { return m_instanceId; }
  inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
  template <typename InstanceIdT = Aws::String>
  void SetInstanceId(InstanceIdT&& value) {
    m_instanceIdHasBeenSet = true;
    m_instanceId = std::forward<InstanceIdT>(value);
  }
  template <typename InstanceIdT = Aws::String>
  CreateTimeOffRequest& WithInstanceId(InstanceIdT&& value) {
    SetInstanceId(std::forward<InstanceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user who the time off request is for. This can be the
   * ID or the ARN of the user.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  CreateTimeOffRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the shift activity that defines the type of time off being
   * requested. This can be the ID or the ARN of the shift activity. It must be a
   * time off activity. Activities that aren't set as <i>Requestable</i> are
   * accepted.</p>
   */
  inline const Aws::String& GetShiftActivityId() const { return m_shiftActivityId; }
  inline bool ShiftActivityIdHasBeenSet() const { return m_shiftActivityIdHasBeenSet; }
  template <typename ShiftActivityIdT = Aws::String>
  void SetShiftActivityId(ShiftActivityIdT&& value) {
    m_shiftActivityIdHasBeenSet = true;
    m_shiftActivityId = std::forward<ShiftActivityIdT>(value);
  }
  template <typename ShiftActivityIdT = Aws::String>
  CreateTimeOffRequest& WithShiftActivityId(ShiftActivityIdT&& value) {
    SetShiftActivityId(std::forward<ShiftActivityIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time off window, inclusive. It must be no earlier than one
   * year before the current date. Connect Customer stores the value as sent, to the
   * millisecond.</p>
   */
  inline const Aws::Utils::DateTime& GetStartAt() const { return m_startAt; }
  inline bool StartAtHasBeenSet() const { return m_startAtHasBeenSet; }
  template <typename StartAtT = Aws::Utils::DateTime>
  void SetStartAt(StartAtT&& value) {
    m_startAtHasBeenSet = true;
    m_startAt = std::forward<StartAtT>(value);
  }
  template <typename StartAtT = Aws::Utils::DateTime>
  CreateTimeOffRequest& WithStartAt(StartAtT&& value) {
    SetStartAt(std::forward<StartAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time off window, exclusive. It must be after
   * <code>StartAt</code> and no later than 24 months after the current date. Connect
   * Customer stores the value as sent, to the millisecond.</p>
   */
  inline const Aws::Utils::DateTime& GetEndAt() const { return m_endAt; }
  inline bool EndAtHasBeenSet() const { return m_endAtHasBeenSet; }
  template <typename EndAtT = Aws::Utils::DateTime>
  void SetEndAt(EndAtT&& value) {
    m_endAtHasBeenSet = true;
    m_endAt = std::forward<EndAtT>(value);
  }
  template <typename EndAtT = Aws::Utils::DateTime>
  CreateTimeOffRequest& WithEndAt(EndAtT&& value) {
    SetEndAt(std::forward<EndAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description recorded on the time off request. If you omit it, the request
   * has no description.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateTimeOffRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls who approves the request. <code>AWAIT_APPROVAL</code> waits for an
   * <code>ApproveTimeOff</code> or <code>RejectTimeOff</code> call.
   * <code>AUTOMATIC</code> has Connect Customer decide the request. For details, see
   * <code>CreateTimeOff</code>.</p>
   */
  inline ApprovalType GetApprovalType() const { return m_approvalType; }
  inline bool ApprovalTypeHasBeenSet() const { return m_approvalTypeHasBeenSet; }
  inline void SetApprovalType(ApprovalType value) {
    m_approvalTypeHasBeenSet = true;
    m_approvalType = value;
  }
  inline CreateTimeOffRequest& WithApprovalType(ApprovalType value) {
    SetApprovalType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls what happens when a configured rule fails. <code>REJECT</code>, the
   * default, records an <code>ERROR</code> and ends the request
   * <code>REJECTED</code>, unless the whole window is in the past.
   * <code>OVERRIDE</code> records a <code>WARNING</code> and ends the request
   * <code>APPROVED</code>, like the <i>Override time off rules</i> option in the
   * Connect Customer admin website. <code>OVERRIDE</code> requires
   * <code>AUTOMATIC</code>. With <code>AWAIT_APPROVAL</code>, <code>OVERRIDE</code>
   * fails with <code>ValidationException</code>. Set it on
   * <code>ApproveTimeOff</code> instead. <code>OVERRIDE</code> never waives
   * <code>CONFLICTING_TIME_OFF_REQUEST</code>.</p>
   */
  inline RuleFailureAction GetRuleFailureAction() const { return m_ruleFailureAction; }
  inline bool RuleFailureActionHasBeenSet() const { return m_ruleFailureActionHasBeenSet; }
  inline void SetRuleFailureAction(RuleFailureAction value) {
    m_ruleFailureActionHasBeenSet = true;
    m_ruleFailureAction = value;
  }
  inline CreateTimeOffRequest& WithRuleFailureAction(RuleFailureAction value) {
    SetRuleFailureAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If this token matches a previous
   * request, Connect Customer returns the result of that request and doesn't create
   * another time off request. If you don't provide a token, the AWS SDK populates
   * this field. If you reuse a client token with a different request body, the
   * request fails with <code>ValidationException</code>. For more information about
   * idempotency, see <a
   * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
   * retries safe with idempotent APIs</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateTimeOffRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceId;

  Aws::String m_userId;

  Aws::String m_shiftActivityId;

  Aws::Utils::DateTime m_startAt{};

  Aws::Utils::DateTime m_endAt{};

  Aws::String m_description;

  ApprovalType m_approvalType{ApprovalType::NOT_SET};

  RuleFailureAction m_ruleFailureAction{RuleFailureAction::NOT_SET};

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_instanceIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_shiftActivityIdHasBeenSet = false;
  bool m_startAtHasBeenSet = false;
  bool m_endAtHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_approvalTypeHasBeenSet = false;
  bool m_ruleFailureActionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
