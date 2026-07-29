/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/UpdateDatasetRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDatasetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_datasetNameHasBeenSet) {
    payload.WithString("datasetName", m_datasetName);
  }

  if (m_datasetDescriptionHasBeenSet) {
    payload.WithString("datasetDescription", m_datasetDescription);
  }

  if (m_datasetConfigHasBeenSet) {
    payload.WithObject("datasetConfig", m_datasetConfig.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_datasetSourceHasBeenSet) {
    payload.WithObject("datasetSource", m_datasetSource.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
