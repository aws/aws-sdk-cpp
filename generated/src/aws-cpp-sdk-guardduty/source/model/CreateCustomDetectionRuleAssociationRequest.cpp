/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/CreateCustomDetectionRuleAssociationRequest.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCustomDetectionRuleAssociationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", AssociationModeMapper::GetNameForAssociationMode(m_mode));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
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
