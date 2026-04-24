/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/RegisterConnectionTypeRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterConnectionTypeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_connectionTypeHasBeenSet) {
    payload.WithString("ConnectionType", m_connectionType);
  }

  if (m_integrationTypeHasBeenSet) {
    payload.WithString("IntegrationType", IntegrationTypeMapper::GetNameForIntegrationType(m_integrationType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_connectionPropertiesHasBeenSet) {
    payload.WithObject("ConnectionProperties", m_connectionProperties.Jsonize());
  }

  if (m_connectorAuthenticationConfigurationHasBeenSet) {
    payload.WithObject("ConnectorAuthenticationConfiguration", m_connectorAuthenticationConfiguration.Jsonize());
  }

  if (m_restConfigurationHasBeenSet) {
    payload.WithObject("RestConfiguration", m_restConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterConnectionTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.RegisterConnectionType"));
  return headers;
}
