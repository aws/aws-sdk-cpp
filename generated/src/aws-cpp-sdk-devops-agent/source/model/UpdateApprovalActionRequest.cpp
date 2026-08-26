/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/UpdateApprovalActionRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateApprovalActionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_actionHasBeenSet) {
    payload.WithString("action", ApprovalActionTypeMapper::GetNameForApprovalActionType(m_action));
  }

  if (m_finalPatternHasBeenSet) {
    payload.WithObject("finalPattern", m_finalPattern.Jsonize());
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", m_reason);
  }

  if (m_ttlSecondsHasBeenSet) {
    payload.WithInteger("ttlSeconds", m_ttlSeconds);
  }

  if (m_singleUseHasBeenSet) {
    payload.WithBool("singleUse", m_singleUse);
  }

  return payload.View().WriteReadable();
}
