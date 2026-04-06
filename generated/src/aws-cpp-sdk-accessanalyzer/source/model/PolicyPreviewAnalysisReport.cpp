/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewAnalysisReport.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

PolicyPreviewAnalysisReport::PolicyPreviewAnalysisReport(JsonView jsonValue) { *this = jsonValue; }

PolicyPreviewAnalysisReport& PolicyPreviewAnalysisReport::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobId")) {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ImpactAnalysisJobStatusMapper::GetImpactAnalysisJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("submittedAt")) {
    m_submittedAt = jsonValue.GetString("submittedAt");
    m_submittedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startedAt")) {
    m_startedAt = jsonValue.GetString("startedAt");
    m_startedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("completedAt")) {
    m_completedAt = jsonValue.GetString("completedAt");
    m_completedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputS3Uri")) {
    m_outputS3Uri = jsonValue.GetString("outputS3Uri");
    m_outputS3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyPreviewAnalysisReport::Jsonize() const {
  JsonValue payload;

  if (m_jobIdHasBeenSet) {
    payload.WithString("jobId", m_jobId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ImpactAnalysisJobStatusMapper::GetNameForImpactAnalysisJobStatus(m_status));
  }

  if (m_submittedAtHasBeenSet) {
    payload.WithString("submittedAt", m_submittedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_startedAtHasBeenSet) {
    payload.WithString("startedAt", m_startedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_completedAtHasBeenSet) {
    payload.WithString("completedAt", m_completedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_outputS3UriHasBeenSet) {
    payload.WithString("outputS3Uri", m_outputS3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
