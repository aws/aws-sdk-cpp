/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/UpdateAcmeEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAcmeEndpointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAcmeEndpointRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.UpdateAcmeEndpoint"));
  return headers;
}

UpdateAcmeEndpointRequest::EndpointParameters UpdateAcmeEndpointRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
