/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/ApprovalAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

ApprovalAction::ApprovalAction(JsonView jsonValue) { *this = jsonValue; }

ApprovalAction& ApprovalAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("toolUseId")) {
    m_toolUseId = jsonValue.GetString("toolUseId");
    m_toolUseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("interruptId")) {
    m_interruptId = jsonValue.GetString("interruptId");
    m_interruptIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("approvalId")) {
    m_approvalId = jsonValue.GetString("approvalId");
    m_approvalIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("buttonText")) {
    m_buttonText = jsonValue.GetString("buttonText");
    m_buttonTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("action")) {
    m_action = ApprovalActionTypeMapper::GetApprovalActionTypeForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue ApprovalAction::Jsonize() const {
  JsonValue payload;

  if (m_toolUseIdHasBeenSet) {
    payload.WithString("toolUseId", m_toolUseId);
  }

  if (m_interruptIdHasBeenSet) {
    payload.WithString("interruptId", m_interruptId);
  }

  if (m_approvalIdHasBeenSet) {
    payload.WithString("approvalId", m_approvalId);
  }

  if (m_buttonTextHasBeenSet) {
    payload.WithString("buttonText", m_buttonText);
  }

  if (m_actionHasBeenSet) {
    payload.WithString("action", ApprovalActionTypeMapper::GetNameForApprovalActionType(m_action));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
