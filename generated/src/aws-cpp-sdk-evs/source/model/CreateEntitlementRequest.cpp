/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/CreateEntitlementRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEntitlementRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_connectorIdHasBeenSet) {
    payload.WithString("connectorId", m_connectorId);
  }

  if (m_entitlementTypeHasBeenSet) {
    payload.WithString("entitlementType", EntitlementTypeMapper::GetNameForEntitlementType(m_entitlementType));
  }

  if (m_vmIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> vmIdsJsonList(m_vmIds.size());
    for (unsigned vmIdsIndex = 0; vmIdsIndex < vmIdsJsonList.GetLength(); ++vmIdsIndex) {
      vmIdsJsonList[vmIdsIndex].AsString(m_vmIds[vmIdsIndex]);
    }
    payload.WithArray("vmIds", std::move(vmIdsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEntitlementRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.CreateEntitlement"));
  return headers;
}
