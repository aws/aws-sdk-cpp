/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/RevokeAcmeAccountRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RevokeAcmeAccountRequest::SerializePayload() const {
  JsonValue payload;

  if (m_acmeEndpointArnHasBeenSet) {
    payload.WithString("AcmeEndpointArn", m_acmeEndpointArn);
  }

  if (m_accountUrlHasBeenSet) {
    payload.WithString("AccountUrl", m_accountUrl);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RevokeAcmeAccountRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.RevokeAcmeAccount"));
  return headers;
}

RevokeAcmeAccountRequest::EndpointParameters RevokeAcmeAccountRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
