/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/model/CreateEnvironmentConnectorRequest.h>

#include <utility>

using namespace Aws::EVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateEnvironmentConnectorRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_environmentIdHasBeenSet) {
    payload.WithString("environmentId", m_environmentId);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", ConnectorTypeMapper::GetNameForConnectorType(m_type));
  }

  if (m_applianceFqdnHasBeenSet) {
    payload.WithString("applianceFqdn", m_applianceFqdn);
  }

  if (m_secretIdentifierHasBeenSet) {
    payload.WithString("secretIdentifier", m_secretIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateEnvironmentConnectorRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonElasticVMwareService.CreateEnvironmentConnector"));
  return headers;
}
