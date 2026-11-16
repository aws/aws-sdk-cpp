/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectscheduling/model/CreateTimeOffRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectScheduling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTimeOffRequest::SerializePayload() const {
  JsonValue payload;

  if (m_shiftActivityIdHasBeenSet) {
    payload.WithString("ShiftActivityId", m_shiftActivityId);
  }

  if (m_startAtHasBeenSet) {
    payload.WithDouble("StartAt", m_startAt.SecondsWithMSPrecision());
  }

  if (m_endAtHasBeenSet) {
    payload.WithDouble("EndAt", m_endAt.SecondsWithMSPrecision());
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_approvalTypeHasBeenSet) {
    payload.WithString("ApprovalType", ApprovalTypeMapper::GetNameForApprovalType(m_approvalType));
  }

  if (m_ruleFailureActionHasBeenSet) {
    payload.WithString("RuleFailureAction", RuleFailureActionMapper::GetNameForRuleFailureAction(m_ruleFailureAction));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
