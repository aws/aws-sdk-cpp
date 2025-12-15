/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ImportBatch.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ImportBatch::ImportBatch(JsonView jsonValue) { *this = jsonValue; }

ImportBatch& ImportBatch::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("batchId")) {
    m_batchId = jsonValue.GetString("batchId");
    m_batchIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ImportBatch::Jsonize() const {
  JsonValue payload;

  if (m_batchIdHasBeenSet) {
    payload.WithString("batchId", m_batchId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ImportStatusMapper::GetNameForImportStatus(m_status));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
