/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devicefarm/model/TestReportMetrics.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DeviceFarm {
namespace Model {

TestReportMetrics::TestReportMetrics(JsonView jsonValue) { *this = jsonValue; }

TestReportMetrics& TestReportMetrics::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("testsTotal")) {
    m_testsTotal = jsonValue.GetInteger("testsTotal");
    m_testsTotalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsPassed")) {
    m_testsPassed = jsonValue.GetInteger("testsPassed");
    m_testsPassedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsFailed")) {
    m_testsFailed = jsonValue.GetInteger("testsFailed");
    m_testsFailedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsSkipped")) {
    m_testsSkipped = jsonValue.GetInteger("testsSkipped");
    m_testsSkippedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsErrored")) {
    m_testsErrored = jsonValue.GetInteger("testsErrored");
    m_testsErroredHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsOther")) {
    m_testsOther = jsonValue.GetInteger("testsOther");
    m_testsOtherHasBeenSet = true;
  }
  if (jsonValue.ValueExists("testsPassedPercentage")) {
    m_testsPassedPercentage = jsonValue.GetDouble("testsPassedPercentage");
    m_testsPassedPercentageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalTestExecutionDurationSeconds")) {
    m_totalTestExecutionDurationSeconds = jsonValue.GetDouble("totalTestExecutionDurationSeconds");
    m_totalTestExecutionDurationSecondsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("medianTestExecutionDurationSeconds")) {
    m_medianTestExecutionDurationSeconds = jsonValue.GetDouble("medianTestExecutionDurationSeconds");
    m_medianTestExecutionDurationSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue TestReportMetrics::Jsonize() const {
  JsonValue payload;

  if (m_testsTotalHasBeenSet) {
    payload.WithInteger("testsTotal", m_testsTotal);
  }

  if (m_testsPassedHasBeenSet) {
    payload.WithInteger("testsPassed", m_testsPassed);
  }

  if (m_testsFailedHasBeenSet) {
    payload.WithInteger("testsFailed", m_testsFailed);
  }

  if (m_testsSkippedHasBeenSet) {
    payload.WithInteger("testsSkipped", m_testsSkipped);
  }

  if (m_testsErroredHasBeenSet) {
    payload.WithInteger("testsErrored", m_testsErrored);
  }

  if (m_testsOtherHasBeenSet) {
    payload.WithInteger("testsOther", m_testsOther);
  }

  if (m_testsPassedPercentageHasBeenSet) {
    payload.WithDouble("testsPassedPercentage", m_testsPassedPercentage);
  }

  if (m_totalTestExecutionDurationSecondsHasBeenSet) {
    payload.WithDouble("totalTestExecutionDurationSeconds", m_totalTestExecutionDurationSeconds);
  }

  if (m_medianTestExecutionDurationSecondsHasBeenSet) {
    payload.WithDouble("medianTestExecutionDurationSeconds", m_medianTestExecutionDurationSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace DeviceFarm
}  // namespace Aws
