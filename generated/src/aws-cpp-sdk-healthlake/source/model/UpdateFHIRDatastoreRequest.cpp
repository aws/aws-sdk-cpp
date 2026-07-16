/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/UpdateFHIRDatastoreRequest.h>

#include <utility>

using namespace Aws::HealthLake::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateFHIRDatastoreRequest::SerializePayload() const {
  JsonValue payload;

  if (m_datastoreIdHasBeenSet) {
    payload.WithString("DatastoreId", m_datastoreId);
  }

  if (m_datastoreNameHasBeenSet) {
    payload.WithString("DatastoreName", m_datastoreName);
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

  if (m_identityProviderConfigurationHasBeenSet) {
    payload.WithObject("IdentityProviderConfiguration", m_identityProviderConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateFHIRDatastoreRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "HealthLake.UpdateFHIRDatastore"));
  return headers;
}
