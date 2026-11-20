/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/AssetsExport.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

AssetsExport::AssetsExport(JsonView jsonValue) { *this = jsonValue; }

AssetsExport& AssetsExport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("S3TablesExport")) {
    m_s3TablesExport = ExportSettingMapper::GetExportSettingForName(jsonValue.GetString("S3TablesExport"));
    m_s3TablesExportHasBeenSet = true;
  }
  return *this;
}

JsonValue AssetsExport::Jsonize() const {
  JsonValue payload;

  if (m_s3TablesExportHasBeenSet) {
    payload.WithString("S3TablesExport", ExportSettingMapper::GetNameForExportSetting(m_s3TablesExport));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
