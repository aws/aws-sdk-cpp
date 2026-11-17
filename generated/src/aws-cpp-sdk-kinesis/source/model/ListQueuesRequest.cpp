/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/ListQueuesRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ListQueuesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maxResultsHasBeenSet) {
    payload.WithInteger("MaxResults", m_maxResults);
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("NextToken", m_nextToken);
  }

  if (m_streamFilterHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamFilterJsonList(m_streamFilter.size());
    for (unsigned streamFilterIndex = 0; streamFilterIndex < streamFilterJsonList.GetLength(); ++streamFilterIndex) {
      streamFilterJsonList[streamFilterIndex].AsObject(m_streamFilter[streamFilterIndex].Jsonize());
    }
    payload.WithArray("StreamFilter", std::move(streamFilterJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListQueuesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.ListQueues"));
  return headers;
}

ListQueuesRequest::EndpointParameters ListQueuesRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "control", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  parameters.emplace_back(Aws::String("ResourceType"), "queue", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
