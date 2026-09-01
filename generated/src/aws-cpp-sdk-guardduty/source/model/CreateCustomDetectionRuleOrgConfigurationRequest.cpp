/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/CreateCustomDetectionRuleOrgConfigurationRequest.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCustomDetectionRuleOrgConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_ruleIdHasBeenSet) {
    payload.WithString("ruleId", m_ruleId);
  }

  if (m_modeHasBeenSet) {
    payload.WithString("mode", AssociationModeMapper::GetNameForAssociationMode(m_mode));
  }

  if (m_includeAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includeAccountIdsJsonList(m_includeAccountIds.size());
    for (unsigned includeAccountIdsIndex = 0; includeAccountIdsIndex < includeAccountIdsJsonList.GetLength(); ++includeAccountIdsIndex) {
      includeAccountIdsJsonList[includeAccountIdsIndex].AsString(m_includeAccountIds[includeAccountIdsIndex]);
    }
    payload.WithArray("includeAccountIds", std::move(includeAccountIdsJsonList));
  }

  if (m_excludeAccountIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludeAccountIdsJsonList(m_excludeAccountIds.size());
    for (unsigned excludeAccountIdsIndex = 0; excludeAccountIdsIndex < excludeAccountIdsJsonList.GetLength(); ++excludeAccountIdsIndex) {
      excludeAccountIdsJsonList[excludeAccountIdsIndex].AsString(m_excludeAccountIds[excludeAccountIdsIndex]);
    }
    payload.WithArray("excludeAccountIds", std::move(excludeAccountIdsJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
