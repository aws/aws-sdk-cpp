/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutAccountDataRetentionStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAccountDataRetentionStorageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_storageDestinationHasBeenSet) {
    payload.WithString("storageDestination",
                       DataRetentionStorageDestinationMapper::GetNameForDataRetentionStorageDestination(m_storageDestination));
  }

  if (m_storageConfigurationHasBeenSet) {
    payload.WithObject("storageConfiguration", m_storageConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
