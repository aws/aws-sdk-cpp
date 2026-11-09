/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/DescribeBulkOperationRequest.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DescribeBulkOperationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_bulkOperationArnHasBeenSet) {
    payload.WithString("BulkOperationArn", m_bulkOperationArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeBulkOperationRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.DescribeBulkOperation"));
  return headers;
}

DescribeBulkOperationRequest::EndpointParameters DescribeBulkOperationRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (BulkOperationArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetBulkOperationArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
