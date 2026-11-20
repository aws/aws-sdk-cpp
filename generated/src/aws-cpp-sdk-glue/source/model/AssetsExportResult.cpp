/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssetsExportResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AssetsExportResult::AssetsExportResult(JsonView jsonValue) { *this = jsonValue; }

AssetsExportResult& AssetsExportResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3TablesExport")) {
    m_s3TablesExport = ExportSettingMapper::GetExportSettingForName(jsonValue.GetString("S3TablesExport"));
    m_s3TablesExportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3TablesExportState")) {
    m_s3TablesExportState = jsonValue.GetObject("S3TablesExportState");
    m_s3TablesExportStateHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetsExportResult::Jsonize() const {
  JsonValue payload;

  if (m_s3TablesExportHasBeenSet) {
    payload.WithString("S3TablesExport", ExportSettingMapper::GetNameForExportSetting(m_s3TablesExport));
  }

  if (m_s3TablesExportStateHasBeenSet) {
    payload.WithObject("S3TablesExportState", m_s3TablesExportState.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
