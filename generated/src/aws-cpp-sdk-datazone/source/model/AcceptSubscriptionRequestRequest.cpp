/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AcceptSubscriptionRequestRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcceptSubscriptionRequestRequest::SerializePayload() const {
  JsonValue payload;

  if (m_decisionCommentHasBeenSet) {
    payload.WithString("decisionComment", m_decisionComment);
  }

  if (m_assetScopesHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetScopesJsonList(m_assetScopes.size());
    for (unsigned assetScopesIndex = 0; assetScopesIndex < assetScopesJsonList.GetLength(); ++assetScopesIndex) {
      assetScopesJsonList[assetScopesIndex].AsObject(m_assetScopes[assetScopesIndex].Jsonize());
    }
    payload.WithArray("assetScopes", std::move(assetScopesJsonList));
  }

  if (m_assetPermissionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> assetPermissionsJsonList(m_assetPermissions.size());
    for (unsigned assetPermissionsIndex = 0; assetPermissionsIndex < assetPermissionsJsonList.GetLength(); ++assetPermissionsIndex) {
      assetPermissionsJsonList[assetPermissionsIndex].AsObject(m_assetPermissions[assetPermissionsIndex].Jsonize());
    }
    payload.WithArray("assetPermissions", std::move(assetPermissionsJsonList));
  }

  return payload.View().WriteReadable();
}
