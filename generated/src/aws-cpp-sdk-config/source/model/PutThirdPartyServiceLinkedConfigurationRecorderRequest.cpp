/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/PutThirdPartyServiceLinkedConfigurationRecorderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutThirdPartyServiceLinkedConfigurationRecorderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_servicePrincipalHasBeenSet) {
    payload.WithString("ServicePrincipal", m_servicePrincipal);
  }

  if (m_connectorArnHasBeenSet) {
    payload.WithString("ConnectorArn", m_connectorArn);
  }

  if (m_scopeConfigurationHasBeenSet) {
    payload.WithObject("ScopeConfiguration", m_scopeConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutThirdPartyServiceLinkedConfigurationRecorderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "StarlingDoveService.PutThirdPartyServiceLinkedConfigurationRecorder"));
  return headers;
}
