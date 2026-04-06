/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/accessanalyzer/model/PolicyPreviewJobDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

PolicyPreviewJobDetails::PolicyPreviewJobDetails(JsonView jsonValue) { *this = jsonValue; }

PolicyPreviewJobDetails& PolicyPreviewJobDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobStatus")) {
    m_jobStatus = ImpactAnalysisJobStatusMapper::GetImpactAnalysisJobStatusForName(jsonValue.GetString("jobStatus"));
    m_jobStatusHasBeenSet = true;
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
  if (jsonValue.ValueExists("jobError")) {
    m_jobError = jsonValue.GetObject("jobError");
    m_jobErrorHasBeenSet = true;
  }
  return *this;
}

JsonValue PolicyPreviewJobDetails::Jsonize() const {
  JsonValue payload;

  if (m_jobStatusHasBeenSet) {
    payload.WithString("jobStatus", ImpactAnalysisJobStatusMapper::GetNameForImpactAnalysisJobStatus(m_jobStatus));
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

  if (m_jobErrorHasBeenSet) {
    payload.WithObject("jobError", m_jobError.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
