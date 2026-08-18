/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/UpdateRecoveryPlanExecutionStepRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRecoveryPlanExecutionStepRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanExecutionStepArnHasBeenSet) {
    payload.WithString("recoveryPlanExecutionStepArn", m_recoveryPlanExecutionStepArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", RecoveryPlanExecutionStepStatusMapper::GetNameForRecoveryPlanExecutionStepStatus(m_status));
  }

  if (m_serversHasBeenSet) {
    Aws::Utils::Array<JsonValue> serversJsonList(m_servers.size());
    for (unsigned serversIndex = 0; serversIndex < serversJsonList.GetLength(); ++serversIndex) {
      serversJsonList[serversIndex].AsObject(m_servers[serversIndex].Jsonize());
    }
    payload.WithArray("servers", std::move(serversJsonList));
  }

  if (m_waitDurationMinutesHasBeenSet) {
    payload.WithInteger("waitDurationMinutes", m_waitDurationMinutes);
  }

  return payload.View().WriteReadable();
}
