/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisvideo/model/UpdateMediaStorageConfigurationRequest.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateMediaStorageConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelARNHasBeenSet) {
    payload.WithString("ChannelARN", m_channelARN);
  }

  if (m_mediaStorageConfigurationHasBeenSet) {
    payload.WithObject("MediaStorageConfiguration", m_mediaStorageConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
