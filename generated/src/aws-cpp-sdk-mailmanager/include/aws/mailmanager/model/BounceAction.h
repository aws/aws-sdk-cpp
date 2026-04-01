/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/ActionFailurePolicy.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MailManager {
namespace Model {

/**
 * <p>The action to send a bounce response for the email. When executed, this
 * action generates a non-delivery report (bounce) back to the
 * sender.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/BounceAction">AWS
 * API Reference</a></p>
 */
class BounceAction {
 public:
  AWS_MAILMANAGER_API BounceAction() = default;
  AWS_MAILMANAGER_API BounceAction(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API BounceAction& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A policy that states what to do in the case of failure. The action will fail
   * if there are configuration errors. For example, the caller does not have the
   * permissions to call the SendBounce API.</p>
   */
  inline ActionFailurePolicy GetActionFailurePolicy() const { return m_actionFailurePolicy; }
  inline bool ActionFailurePolicyHasBeenSet() const { return m_actionFailurePolicyHasBeenSet; }
  inline void SetActionFailurePolicy(ActionFailurePolicy value) {
    m_actionFailurePolicyHasBeenSet = true;
    m_actionFailurePolicy = value;
  }
  inline BounceAction& WithActionFailurePolicy(ActionFailurePolicy value) {
    SetActionFailurePolicy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role to use to send the bounce
   * message.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  BounceAction& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sender email address of the bounce message.</p>
   */
  inline const Aws::String& GetSender() const { return m_sender; }
  inline bool SenderHasBeenSet() const { return m_senderHasBeenSet; }
  template <typename SenderT = Aws::String>
  void SetSender(SenderT&& value) {
    m_senderHasBeenSet = true;
    m_sender = std::forward<SenderT>(value);
  }
  template <typename SenderT = Aws::String>
  BounceAction& WithSender(SenderT&& value) {
    SetSender(std::forward<SenderT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The enhanced status code for the bounce, in the format of x.y.z (e.g.
   * 5.1.1).</p>
   */
  inline const Aws::String& GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  template <typename StatusCodeT = Aws::String>
  void SetStatusCode(StatusCodeT&& value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = std::forward<StatusCodeT>(value);
  }
  template <typename StatusCodeT = Aws::String>
  BounceAction& WithStatusCode(StatusCodeT&& value) {
    SetStatusCode(std::forward<StatusCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SMTP reply code for the bounce, as defined by RFC 5321.</p>
   */
  inline const Aws::String& GetSmtpReplyCode() const { return m_smtpReplyCode; }
  inline bool SmtpReplyCodeHasBeenSet() const { return m_smtpReplyCodeHasBeenSet; }
  template <typename SmtpReplyCodeT = Aws::String>
  void SetSmtpReplyCode(SmtpReplyCodeT&& value) {
    m_smtpReplyCodeHasBeenSet = true;
    m_smtpReplyCode = std::forward<SmtpReplyCodeT>(value);
  }
  template <typename SmtpReplyCodeT = Aws::String>
  BounceAction& WithSmtpReplyCode(SmtpReplyCodeT&& value) {
    SetSmtpReplyCode(std::forward<SmtpReplyCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The diagnostic message included in the Diagnostic-Code header of the
   * bounce.</p>
   */
  inline const Aws::String& GetDiagnosticMessage() const { return m_diagnosticMessage; }
  inline bool DiagnosticMessageHasBeenSet() const { return m_diagnosticMessageHasBeenSet; }
  template <typename DiagnosticMessageT = Aws::String>
  void SetDiagnosticMessage(DiagnosticMessageT&& value) {
    m_diagnosticMessageHasBeenSet = true;
    m_diagnosticMessage = std::forward<DiagnosticMessageT>(value);
  }
  template <typename DiagnosticMessageT = Aws::String>
  BounceAction& WithDiagnosticMessage(DiagnosticMessageT&& value) {
    SetDiagnosticMessage(std::forward<DiagnosticMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The human-readable text to include in the bounce message.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  BounceAction& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}
 private:
  ActionFailurePolicy m_actionFailurePolicy{ActionFailurePolicy::NOT_SET};

  Aws::String m_roleArn;

  Aws::String m_sender;

  Aws::String m_statusCode;

  Aws::String m_smtpReplyCode;

  Aws::String m_diagnosticMessage;

  Aws::String m_message;
  bool m_actionFailurePolicyHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_senderHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_smtpReplyCodeHasBeenSet = false;
  bool m_diagnosticMessageHasBeenSet = false;
  bool m_messageHasBeenSet = false;
};

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
