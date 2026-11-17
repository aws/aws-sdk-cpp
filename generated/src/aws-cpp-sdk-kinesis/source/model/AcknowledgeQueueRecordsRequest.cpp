/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/AcknowledgeQueueRecordsRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AcknowledgeQueueRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_queueARNHasBeenSet) {
    payload.WithString("QueueARN", m_queueARN);
  }

  if (m_entriesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entriesJsonList(m_entries.size());
    for (unsigned entriesIndex = 0; entriesIndex < entriesJsonList.GetLength(); ++entriesIndex) {
      entriesJsonList[entriesIndex].AsObject(m_entries[entriesIndex].Jsonize());
    }
    payload.WithArray("Entries", std::move(entriesJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AcknowledgeQueueRecordsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.AcknowledgeQueueRecords"));
  return headers;
}

AcknowledgeQueueRecordsRequest::EndpointParameters AcknowledgeQueueRecordsRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "data", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  parameters.emplace_back(Aws::String("ResourceType"), "queue", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  // Operation context parameters
  if (QueueARNHasBeenSet()) {
    parameters.emplace_back(Aws::String("QueueARN"), this->GetQueueARN(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
