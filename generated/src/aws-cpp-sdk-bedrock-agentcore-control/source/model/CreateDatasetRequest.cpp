/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateDatasetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateDatasetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_datasetNameHasBeenSet) {
    payload.WithString("datasetName", m_datasetName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_schemaTypeHasBeenSet) {
    payload.WithString("schemaType", DatasetSchemaTypeMapper::GetNameForDatasetSchemaType(m_schemaType));
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
