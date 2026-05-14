/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/UpdateNotebookRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateNotebookRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", NotebookStatusMapper::GetNameForNotebookStatus(m_status));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_cellOrderHasBeenSet) {
    Aws::Utils::Array<JsonValue> cellOrderJsonList(m_cellOrder.size());
    for (unsigned cellOrderIndex = 0; cellOrderIndex < cellOrderJsonList.GetLength(); ++cellOrderIndex) {
      cellOrderJsonList[cellOrderIndex].AsObject(m_cellOrder[cellOrderIndex].Jsonize());
    }
    payload.WithArray("cellOrder", std::move(cellOrderJsonList));
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_parametersHasBeenSet) {
    JsonValue parametersJsonMap;
    for (auto& parametersItem : m_parameters) {
      parametersJsonMap.WithString(parametersItem.first, parametersItem.second);
    }
    payload.WithObject("parameters", std::move(parametersJsonMap));
  }

  if (m_environmentConfigurationHasBeenSet) {
    payload.WithObject("environmentConfiguration", m_environmentConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
