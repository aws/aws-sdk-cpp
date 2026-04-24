/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/UpdateAttachedFilesConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateAttachedFilesConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_maximumSizeLimitInBytesHasBeenSet) {
    payload.WithInt64("MaximumSizeLimitInBytes", m_maximumSizeLimitInBytes);
  }

  if (m_extensionConfigurationHasBeenSet) {
    payload.WithObject("ExtensionConfiguration", m_extensionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
