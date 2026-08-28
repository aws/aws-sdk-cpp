/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/RestoreFHIRDatastoreRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RestoreFHIRDatastoreRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceDatastoreIdHasBeenSet) {
    payload.WithString("SourceDatastoreId", m_sourceDatastoreId);
  }

  if (m_restoreConfigurationHasBeenSet) {
    payload.WithObject("RestoreConfiguration", m_restoreConfiguration.Jsonize());
  }

  if (m_datastoreNameHasBeenSet) {
    payload.WithString("DatastoreName", m_datastoreName);
  }

  if (m_sseConfigurationHasBeenSet) {
    payload.WithObject("SseConfiguration", m_sseConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_identityProviderConfigurationHasBeenSet) {
    payload.WithObject("IdentityProviderConfiguration", m_identityProviderConfiguration.Jsonize());
  }

  if (m_analyticsConfigurationHasBeenSet) {
    payload.WithObject("AnalyticsConfiguration", m_analyticsConfiguration.Jsonize());
  }

  if (m_nlpConfigurationHasBeenSet) {
    payload.WithObject("NlpConfiguration", m_nlpConfiguration.Jsonize());
  }

  if (m_profileConfigurationHasBeenSet) {
    payload.WithObject("ProfileConfiguration", m_profileConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RestoreFHIRDatastoreRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.RestoreFHIRDatastore"));
  return headers;
}
