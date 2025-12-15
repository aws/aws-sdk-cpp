/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/Import.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

Import::Import(JsonView jsonValue) { *this = jsonValue; }

Import& Import::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("importId")) {
    m_importId = jsonValue.GetString("importId");
    m_importIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importSourceArn")) {
    m_importSourceArn = jsonValue.GetString("importSourceArn");
    m_importSourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importStatus")) {
    m_importStatus = ImportStatusMapper::GetImportStatusForName(jsonValue.GetString("importStatus"));
    m_importStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importDestinationArn")) {
    m_importDestinationArn = jsonValue.GetString("importDestinationArn");
    m_importDestinationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importStatistics")) {
    m_importStatistics = jsonValue.GetObject("importStatistics");
    m_importStatisticsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("importFilter")) {
    m_importFilter = jsonValue.GetObject("importFilter");
    m_importFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetInt64("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue Import::Jsonize() const {
  JsonValue payload;

  if (m_importIdHasBeenSet) {
    payload.WithString("importId", m_importId);
  }

  if (m_importSourceArnHasBeenSet) {
    payload.WithString("importSourceArn", m_importSourceArn);
  }

  if (m_importStatusHasBeenSet) {
    payload.WithString("importStatus", ImportStatusMapper::GetNameForImportStatus(m_importStatus));
  }

  if (m_importDestinationArnHasBeenSet) {
    payload.WithString("importDestinationArn", m_importDestinationArn);
  }

  if (m_importStatisticsHasBeenSet) {
    payload.WithObject("importStatistics", m_importStatistics.Jsonize());
  }

  if (m_importFilterHasBeenSet) {
    payload.WithObject("importFilter", m_importFilter.Jsonize());
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithInt64("creationTime", m_creationTime);
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithInt64("lastUpdatedTime", m_lastUpdatedTime);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
