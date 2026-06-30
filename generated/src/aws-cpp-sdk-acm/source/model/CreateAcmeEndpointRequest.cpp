/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CreateAcmeEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAcmeEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_idempotencyTokenHasBeenSet) {
    payload.WithString("IdempotencyToken", m_idempotencyToken);
  }

  if (m_authorizationBehaviorHasBeenSet) {
    payload.WithString("AuthorizationBehavior",
                       AcmeAuthorizationBehaviorMapper::GetNameForAcmeAuthorizationBehavior(m_authorizationBehavior));
  }

  if (m_contactHasBeenSet) {
    payload.WithString("Contact", AcmeContactMapper::GetNameForAcmeContact(m_contact));
  }

  if (m_certificateAuthorityHasBeenSet) {
    payload.WithObject("CertificateAuthority", m_certificateAuthority.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  if (m_certificateTagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> certificateTagsJsonList(m_certificateTags.size());
    for (unsigned certificateTagsIndex = 0; certificateTagsIndex < certificateTagsJsonList.GetLength(); ++certificateTagsIndex) {
      certificateTagsJsonList[certificateTagsIndex].AsObject(m_certificateTags[certificateTagsIndex].Jsonize());
    }
    payload.WithArray("CertificateTags", std::move(certificateTagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAcmeEndpointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.CreateAcmeEndpoint"));
  return headers;
}

CreateAcmeEndpointRequest::EndpointParameters CreateAcmeEndpointRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
