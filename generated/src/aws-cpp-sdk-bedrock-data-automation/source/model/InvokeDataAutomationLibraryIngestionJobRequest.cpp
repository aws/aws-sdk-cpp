/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/InvokeDataAutomationLibraryIngestionJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockDataAutomation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeDataAutomationLibraryIngestionJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_inputConfigurationHasBeenSet) {
    payload.WithObject("inputConfiguration", m_inputConfiguration.Jsonize());
  }

  if (m_entityTypeHasBeenSet) {
    payload.WithString("entityType", EntityTypeMapper::GetNameForEntityType(m_entityType));
  }

  if (m_operationTypeHasBeenSet) {
    payload.WithString("operationType",
                       LibraryIngestionJobOperationTypeMapper::GetNameForLibraryIngestionJobOperationType(m_operationType));
  }

  if (m_outputConfigurationHasBeenSet) {
    payload.WithObject("outputConfiguration", m_outputConfiguration.Jsonize());
  }

  if (m_notificationConfigurationHasBeenSet) {
    payload.WithObject("notificationConfiguration", m_notificationConfiguration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}
