/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/DeleteEnvironmentConnectorRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteEnvironmentConnectorRequest::SerializePayload() const {
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteEnvironmentConnectorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.DeleteEnvironmentConnector"));
  return headers;
}
