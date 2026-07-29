/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ExportJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ExportJobSummary::ExportJobSummary(JsonView jsonValue) { *this = jsonValue; }

ExportJobSummary& ExportJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DatasetExportJobStatusMapper::GetDatasetExportJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetDouble("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetDouble("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationS3Uri")) {
    m_destinationS3Uri = jsonValue.GetString("destinationS3Uri");
    m_destinationS3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DatasetExportJobStatusMapper::GetNameForDatasetExportJobStatus(m_status));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithDouble("startedAt", m_startedAt.SecondsWithMSPrecision());
  }

  if (m_completedAtHasBeenSet) {
    payload.WithDouble("completedAt", m_completedAt.SecondsWithMSPrecision());
  }

  if (m_destinationS3UriHasBeenSet) {
    payload.WithString("destinationS3Uri", m_destinationS3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
