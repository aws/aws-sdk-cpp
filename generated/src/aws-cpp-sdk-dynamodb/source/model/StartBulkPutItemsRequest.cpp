/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/StartBulkPutItemsRequest.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartBulkPutItemsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_inputS3ConfigurationHasBeenSet) {
    payload.WithObject("InputS3Configuration", m_inputS3Configuration.Jsonize());
  }

  if (m_outputS3ConfigurationHasBeenSet) {
    payload.WithObject("OutputS3Configuration", m_outputS3Configuration.Jsonize());
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_maxWriteRequestUnitsHasBeenSet) {
    payload.WithInt64("MaxWriteRequestUnits", m_maxWriteRequestUnits);
  }

  if (m_performanceTierHasBeenSet) {
    payload.WithString("PerformanceTier", BulkOperationPerformanceTierMapper::GetNameForBulkOperationPerformanceTier(m_performanceTier));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartBulkPutItemsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DynamoDB_20120810.StartBulkPutItems"));
  return headers;
}

StartBulkPutItemsRequest::EndpointParameters StartBulkPutItemsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (TableNameHasBeenSet()) {
    parameters.emplace_back(Aws::String("ResourceArn"), this->GetTableName(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
