/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/CreateChannelRequest.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateChannelRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelNameHasBeenSet) {
    payload.WithString("channelName", m_channelName);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());
  }

  if (m_icebergDestinationConfigurationHasBeenSet) {
    payload.WithObject("icebergDestinationConfiguration", m_icebergDestinationConfiguration.Jsonize());
  }

  if (m_s3DestinationConfigurationHasBeenSet) {
    payload.WithObject("s3DestinationConfiguration", m_s3DestinationConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_topicConfigurationListHasBeenSet) {
    Aws::Utils::Array<JsonValue> topicConfigurationListJsonList(m_topicConfigurationList.size());
    for (unsigned topicConfigurationListIndex = 0; topicConfigurationListIndex < topicConfigurationListJsonList.GetLength();
         ++topicConfigurationListIndex) {
      topicConfigurationListJsonList[topicConfigurationListIndex].AsObject(m_topicConfigurationList[topicConfigurationListIndex].Jsonize());
    }
    payload.WithArray("topicConfigurationList", std::move(topicConfigurationListJsonList));
  }

  if (m_loggingInfoHasBeenSet) {
    payload.WithObject("loggingInfo", m_loggingInfo.Jsonize());
  }

  return payload.View().WriteReadable();
}
