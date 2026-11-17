/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/CreateQueueRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateQueueRequest::SerializePayload() const {
  JsonValue payload;

  if (m_queueNameHasBeenSet) {
    payload.WithString("QueueName", m_queueName);
  }

  if (m_streamConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> streamConfigurationListJsonList(m_streamConfigurationList.size());
    for (unsigned streamConfigurationListIndex = 0; streamConfigurationListIndex < streamConfigurationListJsonList.GetLength();
         ++streamConfigurationListIndex) {
      streamConfigurationListJsonList[streamConfigurationListIndex].AsObject(
          m_streamConfigurationList[streamConfigurationListIndex].Jsonize());
    }
    payload.WithArray("StreamConfigurationList", std::move(streamConfigurationListJsonList));
  }

  if (m_queueAttributesHasBeenSet) {
    payload.WithObject("QueueAttributes", m_queueAttributes.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateQueueRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.CreateQueue"));
  return headers;
}

CreateQueueRequest::EndpointParameters CreateQueueRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "control", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  parameters.emplace_back(Aws::String("ResourceType"), "queue", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
