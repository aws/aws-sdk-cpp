/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ReceiveDeadLetterQueueRecordsRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ReceiveDeadLetterQueueRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_queueARNHasBeenSet) {
    payload.WithString("QueueARN", m_queueARN);
  }

  if (m_limitHasBeenSet) {
    payload.WithInteger("Limit", m_limit);
  }

  if (m_waitTimeSecondsHasBeenSet) {
    payload.WithInteger("WaitTimeSeconds", m_waitTimeSeconds);
  }

  if (m_visibilityTimeoutSecondsHasBeenSet) {
    payload.WithInteger("VisibilityTimeoutSeconds", m_visibilityTimeoutSeconds);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ReceiveDeadLetterQueueRecordsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.ReceiveDeadLetterQueueRecords"));
  return headers;
}

ReceiveDeadLetterQueueRecordsRequest::EndpointParameters ReceiveDeadLetterQueueRecordsRequest::GetEndpointContextParams() const {
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
