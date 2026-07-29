/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/EnrichmentJobSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

EnrichmentJobSummary::EnrichmentJobSummary(JsonView jsonValue) { *this = jsonValue; }

EnrichmentJobSummary& EnrichmentJobSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EnrichmentJobStatusMapper::GetEnrichmentJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("workspaceName")) {
    m_workspaceName = jsonValue.GetString("workspaceName");
    m_workspaceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobType")) {
    m_jobType = JobTypeMapper::GetJobTypeForName(jsonValue.GetString("jobType"));
    m_jobTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("datasetId")) {
    m_datasetId = jsonValue.GetString("datasetId");
    m_datasetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("propertyAlias")) {
    m_propertyAlias = jsonValue.GetString("propertyAlias");
    m_propertyAliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timeSeriesId")) {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");
    m_timeSeriesIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue EnrichmentJobSummary::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EnrichmentJobStatusMapper::GetNameForEnrichmentJobStatus(m_status));
  }

  if (m_workspaceNameHasBeenSet) {
    payload.WithString("workspaceName", m_workspaceName);
  }

  if (m_jobTypeHasBeenSet) {
    payload.WithString("jobType", JobTypeMapper::GetNameForJobType(m_jobType));
  }

  if (m_datasetIdHasBeenSet) {
    payload.WithString("datasetId", m_datasetId);
  }

  if (m_propertyAliasHasBeenSet) {
    payload.WithString("propertyAlias", m_propertyAlias);
  }

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
