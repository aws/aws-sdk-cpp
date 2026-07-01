/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/UpdateAcmeDomainValidationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAcmeDomainValidationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_acmeDomainValidationArnHasBeenSet) {
    payload.WithString("AcmeDomainValidationArn", m_acmeDomainValidationArn);
  }

  if (m_prevalidationOptionsHasBeenSet) {
    payload.WithObject("PrevalidationOptions", m_prevalidationOptions.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAcmeDomainValidationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.UpdateAcmeDomainValidation"));
  return headers;
}

UpdateAcmeDomainValidationRequest::EndpointParameters UpdateAcmeDomainValidationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM-ACME", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
