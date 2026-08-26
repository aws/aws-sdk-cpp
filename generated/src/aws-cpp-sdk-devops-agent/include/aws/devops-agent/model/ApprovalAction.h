/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/ApprovalActionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>An approval decision supplied when resuming a paused agent execution. When an
 * agent execution pauses to request approval for an elevated action, SendMessage
 * streams an approval request carrying interrupt identifiers. This structure
 * carries the decision back to the service — which paused tool invocation is being
 * resumed, the opaque interrupt identifier that resumes it, the identifier of the
 * approval request being resolved, optional display text of the control the user
 * chose, and the action taken (APPROVED or REJECTED) — so the service can resume
 * the paused execution. All members are optional on the wire; service-side
 * validation is applied against the populated subset.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ApprovalAction">AWS
 * API Reference</a></p>
 */
class ApprovalAction {
 public:
  AWS_DEVOPSAGENT_API ApprovalAction() = default;
  AWS_DEVOPSAGENT_API ApprovalAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API ApprovalAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of the specific paused tool invocation that requested approval.
   * Correlates the approval decision back to the paused invocation.</p>
   */
  inline const Aws::String& GetToolUseId() const { return m_toolUseId; }
  inline bool ToolUseIdHasBeenSet() const { return m_toolUseIdHasBeenSet; }
  template <typename ToolUseIdT = Aws::String>
  void SetToolUseId(ToolUseIdT&& value) {
    m_toolUseIdHasBeenSet = true;
    m_toolUseId = std::forward<ToolUseIdT>(value);
  }
  template <typename ToolUseIdT = Aws::String>
  ApprovalAction& WithToolUseId(ToolUseIdT&& value) {
    SetToolUseId(std::forward<ToolUseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An opaque resume identifier issued by the service when an agent execution
   * pauses for approval. Provide it when resuming so the service can resume the
   * correct paused execution.</p>
   */
  inline const Aws::String& GetInterruptId() const { return m_interruptId; }
  inline bool InterruptIdHasBeenSet() const { return m_interruptIdHasBeenSet; }
  template <typename InterruptIdT = Aws::String>
  void SetInterruptId(InterruptIdT&& value) {
    m_interruptIdHasBeenSet = true;
    m_interruptId = std::forward<InterruptIdT>(value);
  }
  template <typename InterruptIdT = Aws::String>
  ApprovalAction& WithInterruptId(InterruptIdT&& value) {
    SetInterruptId(std::forward<InterruptIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identifier of the approval request being resolved.</p>
   */
  inline const Aws::String& GetApprovalId() const { return m_approvalId; }
  inline bool ApprovalIdHasBeenSet() const { return m_approvalIdHasBeenSet; }
  template <typename ApprovalIdT = Aws::String>
  void SetApprovalId(ApprovalIdT&& value) {
    m_approvalIdHasBeenSet = true;
    m_approvalId = std::forward<ApprovalIdT>(value);
  }
  template <typename ApprovalIdT = Aws::String>
  ApprovalAction& WithApprovalId(ApprovalIdT&& value) {
    SetApprovalId(std::forward<ApprovalIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional display text of the UI control the user chose (for example, "Approve
   * Exact", "Approve Broader", or "Reject"), provided as auxiliary decision
   * context.</p>
   */
  inline const Aws::String& GetButtonText() const { return m_buttonText; }
  inline bool ButtonTextHasBeenSet() const { return m_buttonTextHasBeenSet; }
  template <typename ButtonTextT = Aws::String>
  void SetButtonText(ButtonTextT&& value) {
    m_buttonTextHasBeenSet = true;
    m_buttonText = std::forward<ButtonTextT>(value);
  }
  template <typename ButtonTextT = Aws::String>
  ApprovalAction& WithButtonText(ButtonTextT&& value) {
    SetButtonText(std::forward<ButtonTextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action taken on the approval request — APPROVED or REJECTED.</p>
   */
  inline ApprovalActionType GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(ApprovalActionType value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ApprovalAction& WithAction(ApprovalActionType value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_toolUseId;

  Aws::String m_interruptId;

  Aws::String m_approvalId;

  Aws::String m_buttonText;

  ApprovalActionType m_action{ApprovalActionType::NOT_SET};
  bool m_toolUseIdHasBeenSet = false;
  bool m_interruptIdHasBeenSet = false;
  bool m_approvalIdHasBeenSet = false;
  bool m_buttonTextHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
