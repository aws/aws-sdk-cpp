/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/UpdateQuotaShareRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Batch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateQuotaShareRequest::SerializePayload() const {
  JsonValue payload;

  if (m_quotaShareArnHasBeenSet) {
    payload.WithString("quotaShareArn", m_quotaShareArn);
  }

  if (m_capacityLimitsHasBeenSet) {
    Aws::Utils::Array<JsonValue> capacityLimitsJsonList(m_capacityLimits.size());
    for (unsigned capacityLimitsIndex = 0; capacityLimitsIndex < capacityLimitsJsonList.GetLength(); ++capacityLimitsIndex) {
      capacityLimitsJsonList[capacityLimitsIndex].AsObject(m_capacityLimits[capacityLimitsIndex].Jsonize());
    }
    payload.WithArray("capacityLimits", std::move(capacityLimitsJsonList));
  }

  if (m_resourceSharingConfigurationHasBeenSet) {
    payload.WithObject("resourceSharingConfiguration", m_resourceSharingConfiguration.Jsonize());
  }

  if (m_preemptionConfigurationHasBeenSet) {
    payload.WithObject("preemptionConfiguration", m_preemptionConfiguration.Jsonize());
  }

  if (m_stateHasBeenSet) {
    payload.WithString("state", QuotaShareStateMapper::GetNameForQuotaShareState(m_state));
  }

  return payload.View().WriteReadable();
}
