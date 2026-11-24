/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/S3TablesExportState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

S3TablesExportState::S3TablesExportState(JsonView jsonValue) { *this = jsonValue; }

S3TablesExportState& S3TablesExportState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesExportState::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ExportStatusMapper::GetNameForExportStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
