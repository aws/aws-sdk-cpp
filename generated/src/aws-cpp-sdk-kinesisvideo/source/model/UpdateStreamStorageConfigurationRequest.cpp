/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisvideo/model/UpdateStreamStorageConfigurationRequest.h>

#include <utility>

using namespace Aws::KinesisVideo::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStreamStorageConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_streamNameHasBeenSet) {
    payload.WithString("StreamName", m_streamName);
  }

  if (m_streamARNHasBeenSet) {
    payload.WithString("StreamARN", m_streamARN);
  }

  if (m_currentVersionHasBeenSet) {
    payload.WithString("CurrentVersion", m_currentVersion);
  }

  if (m_streamStorageConfigurationHasBeenSet) {
    payload.WithObject("StreamStorageConfiguration", m_streamStorageConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
