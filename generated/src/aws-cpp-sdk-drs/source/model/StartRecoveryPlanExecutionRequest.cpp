/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/drs/model/StartRecoveryPlanExecutionRequest.h>

#include <utility>

using namespace Aws::drs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartRecoveryPlanExecutionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_recoveryPlanArnHasBeenSet) {
    payload.WithString("recoveryPlanArn", m_recoveryPlanArn);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", RecoveryPlanExecutionModeMapper::GetNameForRecoveryPlanExecutionMode(m_mode));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_sourceServersHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceServersJsonList(m_sourceServers.size());
    for (unsigned sourceServersIndex = 0; sourceServersIndex < sourceServersJsonList.GetLength(); ++sourceServersIndex) {
      sourceServersJsonList[sourceServersIndex].AsObject(m_sourceServers[sourceServersIndex].Jsonize());
    }
    payload.WithArray("sourceServers", std::move(sourceServersJsonList));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
