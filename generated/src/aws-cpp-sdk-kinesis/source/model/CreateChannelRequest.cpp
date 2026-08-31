/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/CreateChannelRequest.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("ChannelName", m_channelName);
  }

  if (m_serviceExecutionRoleARNHasBeenSet) {
    payload.WithString("ServiceExecutionRoleARN", m_serviceExecutionRoleARN);
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

  if (m_s3DestinationConfigurationHasBeenSet) {
    payload.WithObject("S3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());
  }

  if (m_s3TablesDestinationConfigurationHasBeenSet) {
    payload.WithObject("S3TablesDestinationConfiguration", m_s3TablesDestinationConfiguration.Jsonize());
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("EncryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_loggingConfigurationHasBeenSet) {
    payload.WithObject("LoggingConfiguration", m_loggingConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateChannelRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Kinesis_20131202.CreateChannel"));
  return headers;
}

CreateChannelRequest::EndpointParameters CreateChannelRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Static context parameters
  parameters.emplace_back(Aws::String("OperationType"), "control", Aws::Endpoint::EndpointParameter::ParameterOrigin::STATIC_CONTEXT);
  return parameters;
}
