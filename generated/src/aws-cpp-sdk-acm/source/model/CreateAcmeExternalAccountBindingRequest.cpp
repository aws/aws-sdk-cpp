/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CreateAcmeExternalAccountBindingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAcmeExternalAccountBindingRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idempotencyTokenHasBeenSet) {
    payload.WithString("IdempotencyToken", m_idempotencyToken);
  }

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("RoleArn", m_roleArn);
  }

  if (m_expirationHasBeenSet) {
    payload.WithObject("Expiration", m_expiration.Jsonize());
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

Aws::Http::HeaderValueCollection CreateAcmeExternalAccountBindingRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.CreateAcmeExternalAccountBinding"));
  return headers;
}

CreateAcmeExternalAccountBindingRequest::EndpointParameters CreateAcmeExternalAccountBindingRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
