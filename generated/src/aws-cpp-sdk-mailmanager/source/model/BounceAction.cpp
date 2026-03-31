/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mailmanager/model/BounceAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MailManager {
namespace Model {

BounceAction::BounceAction(JsonView jsonValue) { *this = jsonValue; }

BounceAction& BounceAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ActionFailurePolicy")) {
    m_actionFailurePolicy = ActionFailurePolicyMapper::GetActionFailurePolicyForName(jsonValue.GetString("ActionFailurePolicy"));
    m_actionFailurePolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RoleArn")) {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Sender")) {
    m_sender = jsonValue.GetString("Sender");
    m_senderHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusCode")) {
    m_statusCode = jsonValue.GetString("StatusCode");
    m_statusCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SmtpReplyCode")) {
    m_smtpReplyCode = jsonValue.GetString("SmtpReplyCode");
    m_smtpReplyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DiagnosticMessage")) {
    m_diagnosticMessage = jsonValue.GetString("DiagnosticMessage");
    m_diagnosticMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue BounceAction::Jsonize() const {
  JsonValue payload;

  if (m_actionFailurePolicyHasBeenSet) {
    payload.WithString("ActionFailurePolicy", ActionFailurePolicyMapper::GetNameForActionFailurePolicy(m_actionFailurePolicy));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_senderHasBeenSet) {
    payload.WithString("Sender", m_sender);
  }

  if (m_statusCodeHasBeenSet) {
    payload.WithString("StatusCode", m_statusCode);
  }

  if (m_smtpReplyCodeHasBeenSet) {
    payload.WithString("SmtpReplyCode", m_smtpReplyCode);
  }

  if (m_diagnosticMessageHasBeenSet) {
    payload.WithString("DiagnosticMessage", m_diagnosticMessage);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace MailManager
}  // namespace Aws
