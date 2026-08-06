/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/JobReportMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

JobReportMetrics::JobReportMetrics(JsonView jsonValue) { *this = jsonValue; }

JobReportMetrics& JobReportMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("jobsTotal")) {
    m_jobsTotal = jsonValue.GetInteger("jobsTotal");
    m_jobsTotalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsPassed")) {
    m_jobsPassed = jsonValue.GetInteger("jobsPassed");
    m_jobsPassedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsFailed")) {
    m_jobsFailed = jsonValue.GetInteger("jobsFailed");
    m_jobsFailedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsSkipped")) {
    m_jobsSkipped = jsonValue.GetInteger("jobsSkipped");
    m_jobsSkippedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsErrored")) {
    m_jobsErrored = jsonValue.GetInteger("jobsErrored");
    m_jobsErroredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsStopped")) {
    m_jobsStopped = jsonValue.GetInteger("jobsStopped");
    m_jobsStoppedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jobsPassedPercentage")) {
    m_jobsPassedPercentage = jsonValue.GetDouble("jobsPassedPercentage");
    m_jobsPassedPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalJobExecutionDurationSeconds")) {
    m_totalJobExecutionDurationSeconds = jsonValue.GetDouble("totalJobExecutionDurationSeconds");
    m_totalJobExecutionDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("averageJobExecutionDurationSeconds")) {
    m_averageJobExecutionDurationSeconds = jsonValue.GetDouble("averageJobExecutionDurationSeconds");
    m_averageJobExecutionDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medianJobExecutionDurationSeconds")) {
    m_medianJobExecutionDurationSeconds = jsonValue.GetDouble("medianJobExecutionDurationSeconds");
    m_medianJobExecutionDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue JobReportMetrics::Jsonize() const {
  JsonValue payload;

  if (m_jobsTotalHasBeenSet) {
    payload.WithInteger("jobsTotal", m_jobsTotal);
  }

  if (m_jobsPassedHasBeenSet) {
    payload.WithInteger("jobsPassed", m_jobsPassed);
  }

  if (m_jobsFailedHasBeenSet) {
    payload.WithInteger("jobsFailed", m_jobsFailed);
  }

  if (m_jobsSkippedHasBeenSet) {
    payload.WithInteger("jobsSkipped", m_jobsSkipped);
  }

  if (m_jobsErroredHasBeenSet) {
    payload.WithInteger("jobsErrored", m_jobsErrored);
  }

  if (m_jobsStoppedHasBeenSet) {
    payload.WithInteger("jobsStopped", m_jobsStopped);
  }

  if (m_jobsPassedPercentageHasBeenSet) {
    payload.WithDouble("jobsPassedPercentage", m_jobsPassedPercentage);
  }

  if (m_totalJobExecutionDurationSecondsHasBeenSet) {
    payload.WithDouble("totalJobExecutionDurationSeconds", m_totalJobExecutionDurationSeconds);
  }

  if (m_averageJobExecutionDurationSecondsHasBeenSet) {
    payload.WithDouble("averageJobExecutionDurationSeconds", m_averageJobExecutionDurationSeconds);
  }

  if (m_medianJobExecutionDurationSecondsHasBeenSet) {
    payload.WithDouble("medianJobExecutionDurationSeconds", m_medianJobExecutionDurationSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
