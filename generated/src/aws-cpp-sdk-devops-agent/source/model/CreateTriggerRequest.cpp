/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/CreateTriggerRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateTriggerRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", m_type);
  }

  if (m_conditionHasBeenSet) {
    payload.WithObject("condition", m_condition.Jsonize());
  }

  if (m_actionHasBeenSet) {
    if (!m_action.View().IsNull()) {
      payload.WithObject("action", JsonValue(m_action.View()));
    }
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", m_status);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
