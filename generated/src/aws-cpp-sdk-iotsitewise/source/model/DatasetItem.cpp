/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/DatasetItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

DatasetItem::DatasetItem(JsonView jsonValue) { *this = jsonValue; }

DatasetItem& DatasetItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trimSettings")) {
    m_trimSettings = jsonValue.GetObject("trimSettings");
    m_trimSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exportDataTypes")) {
    Aws::Utils::Array<JsonView> exportDataTypesJsonList = jsonValue.GetArray("exportDataTypes");
    for (unsigned exportDataTypesIndex = 0; exportDataTypesIndex < exportDataTypesJsonList.GetLength(); ++exportDataTypesIndex) {
      m_exportDataTypes.push_back(ExportDataTypeMapper::GetExportDataTypeForName(exportDataTypesJsonList[exportDataTypesIndex].AsString()));
    }
    m_exportDataTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue DatasetItem::Jsonize() const {
  JsonValue payload;

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_trimSettingsHasBeenSet) {
    payload.WithObject("trimSettings", m_trimSettings.Jsonize());
  }

  if (m_exportDataTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> exportDataTypesJsonList(m_exportDataTypes.size());
    for (unsigned exportDataTypesIndex = 0; exportDataTypesIndex < exportDataTypesJsonList.GetLength(); ++exportDataTypesIndex) {
      exportDataTypesJsonList[exportDataTypesIndex].AsString(
          ExportDataTypeMapper::GetNameForExportDataType(m_exportDataTypes[exportDataTypesIndex]));
    }
    payload.WithArray("exportDataTypes", std::move(exportDataTypesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
