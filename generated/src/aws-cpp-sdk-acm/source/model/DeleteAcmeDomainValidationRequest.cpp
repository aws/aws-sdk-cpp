/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/DeleteAcmeDomainValidationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteAcmeDomainValidationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_acmeDomainValidationArnHasBeenSet) {
    payload.WithString("AcmeDomainValidationArn", m_acmeDomainValidationArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteAcmeDomainValidationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.DeleteAcmeDomainValidation"));
  return headers;
}

DeleteAcmeDomainValidationRequest::EndpointParameters DeleteAcmeDomainValidationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
