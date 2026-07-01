/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/ListTagsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListTagsForResourceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListTagsForResourceRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CertificateManager.ListTagsForResource"));
  return headers;
}

ListTagsForResourceRequest::EndpointParameters ListTagsForResourceRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("ServiceType"), "ACM", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
