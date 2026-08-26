/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ApprovalActionType.h>
#include <aws/devops-agent/model/ApprovalPattern.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for UpdateApprovalAction. Submits the terminal decision
 * (APPROVED or REJECTED) against an approval request, optionally carrying the
 * finalized pattern and time-to-live when the action is APPROVED, or a free-text
 * rationale when the action is REJECTED. Cross-field invariants between `action`
 * and the approve-only / reject-only members are enforced by service-side
 * validation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UpdateApprovalActionRequest">AWS
 * API Reference</a></p>
 */
class UpdateApprovalActionRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API UpdateApprovalActionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalAction"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The agent space identifier — multi-tenant workspace scope. Bound from the
   * request URI.</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  UpdateApprovalActionRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the approval request being resolved. A UUID. Bound from the
   * request URI.</p>
   */
  inline const Aws::String& GetApprovalId() const { return m_approvalId; }
  inline bool ApprovalIdHasBeenSet() const { return m_approvalIdHasBeenSet; }
  template <typename ApprovalIdT = Aws::String>
  void SetApprovalId(ApprovalIdT&& value) {
    m_approvalIdHasBeenSet = true;
    m_approvalId = std::forward<ApprovalIdT>(value);
  }
  template <typename ApprovalIdT = Aws::String>
  UpdateApprovalActionRequest& WithApprovalId(ApprovalIdT&& value) {
    SetApprovalId(std::forward<ApprovalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take on the approval request — APPROVED or REJECTED.</p>
   */
  inline ApprovalActionType GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ApprovalActionType value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline UpdateApprovalActionRequest& WithAction(ApprovalActionType value) {
    SetAction(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The finalized pattern (tool + argumentPins) that scopes the approval.
   * Required when `action` is APPROVED; must be absent when `action` is REJECTED.
   * The pattern narrows, and must not widen, the invocation originally requested by
   * the agent. This cross-field invariant is enforced by service-side
   * validation.</p>
   */
  inline const ApprovalPattern& GetFinalPattern() const { return m_finalPattern; }
  inline bool FinalPatternHasBeenSet() const { return m_finalPatternHasBeenSet; }
  template <typename FinalPatternT = ApprovalPattern>
  void SetFinalPattern(FinalPatternT&& value) {
    m_finalPatternHasBeenSet = true;
    m_finalPattern = std::forward<FinalPatternT>(value);
  }
  template <typename FinalPatternT = ApprovalPattern>
  UpdateApprovalActionRequest& WithFinalPattern(FinalPatternT&& value) {
    SetFinalPattern(std::forward<FinalPatternT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional free-text rationale for the decision. Permitted when `action` is
   * REJECTED; ignored when `action` is APPROVED.</p>
   */
  inline const Aws::String& GetReason() const { return m_reason; }
  inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
  template <typename ReasonT = Aws::String>
  void SetReason(ReasonT&& value) {
    m_reasonHasBeenSet = true;
    m_reason = std::forward<ReasonT>(value);
  }
  template <typename ReasonT = Aws::String>
  UpdateApprovalActionRequest& WithReason(ReasonT&& value) {
    SetReason(std::forward<ReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Approval lifetime in seconds, starting from when the decision is submitted.
   * Required when `action` is APPROVED AND `singleUse` is false; must be absent when
   * `action` is REJECTED or when `singleUse` is true (a single-use approval backs
   * one executed action and the redemption window collapses). Cross-field invariants
   * are enforced by service-side validation; the @range bound here is the
   * operation-boundary check that always applies (a maximum of 4 hours).</p>
   */
  inline int GetTtlSeconds() const { return m_ttlSeconds; }
  inline bool TtlSecondsHasBeenSet() const { return m_ttlSecondsHasBeenSet; }
  inline void SetTtlSeconds(int value) {
    m_ttlSecondsHasBeenSet = true;
    m_ttlSeconds = value;
  }
  inline UpdateApprovalActionRequest& WithTtlSeconds(int value) {
    SetTtlSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the approved action backs a single executed tool call (true) or is
   * reusable within ttlSeconds (false). Required when `action` is APPROVED; must be
   * absent when `action` is REJECTED. When true, ttlSeconds must be absent (the
   * redemption window collapses to the single use). When false, ttlSeconds is
   * required and bounds the reuse window. Cross-field invariants are enforced by
   * service-side validation.</p>
   */
  inline bool GetSingleUse() const { return m_singleUse; }
  inline bool SingleUseHasBeenSet() const { return m_singleUseHasBeenSet; }
  inline void SetSingleUse(bool value) {
    m_singleUseHasBeenSet = true;
    m_singleUse = value;
  }
  inline UpdateApprovalActionRequest& WithSingleUse(bool value) {
    SetSingleUse(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_approvalId;

  ApprovalActionType m_action{ApprovalActionType::NOT_SET};

  ApprovalPattern m_finalPattern;

  Aws::String m_reason;

  int m_ttlSeconds{0};

  bool m_singleUse{false};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_approvalIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
  bool m_finalPatternHasBeenSet = false;
  bool m_reasonHasBeenSet = false;
  bool m_ttlSecondsHasBeenSet = false;
  bool m_singleUseHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
