/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListCertificateDomainValidationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListCertificateDomainValidationsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_certificateArnHasBeenSet) {
    payload.WithString("CertificateArn", m_certificateArn);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_maxItemsHasBeenSet) {
    payload.WithInteger("MaxItems", m_maxItems);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListCertificateDomainValidationsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ListCertificateDomainValidations"));
  return headers;
}

ListCertificateDomainValidationsRequest::EndpointParameters ListCertificateDomainValidationsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
