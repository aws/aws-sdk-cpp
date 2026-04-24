/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/ListVmEntitlementsRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListVmEntitlementsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("maxResults", m_maxResults);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListVmEntitlementsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.ListVmEntitlements"));
  return headers;
}
