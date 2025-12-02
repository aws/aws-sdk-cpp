/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/S3TableIntegrationSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

S3TableIntegrationSource::S3TableIntegrationSource(JsonView jsonValue) { *this = jsonValue; }

S3TableIntegrationSource& S3TableIntegrationSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dataSource")) {
    m_dataSource = jsonValue.GetObject("dataSource");
    m_dataSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = S3TableIntegrationSourceStatusMapper::GetS3TableIntegrationSourceStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdTimeStamp")) {
    m_createdTimeStamp = jsonValue.GetInt64("createdTimeStamp");
    m_createdTimeStampHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TableIntegrationSource::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("identifier", m_identifier);
  }

  if (m_dataSourceHasBeenSet) {
    payload.WithObject("dataSource", m_dataSource.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", S3TableIntegrationSourceStatusMapper::GetNameForS3TableIntegrationSourceStatus(m_status));
  }

  if (m_statusReasonHasBeenSet) {
    payload.WithString("statusReason", m_statusReason);
  }

  if (m_createdTimeStampHasBeenSet) {
    payload.WithInt64("createdTimeStamp", m_createdTimeStamp);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
