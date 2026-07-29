/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/PipelineExecutionSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

PipelineExecutionSummary::PipelineExecutionSummary(JsonView jsonValue) { *this = jsonValue; }

PipelineExecutionSummary& PipelineExecutionSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("pipelineExecutionId")) {
    m_pipelineExecutionId = jsonValue.GetString("pipelineExecutionId");
    m_pipelineExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pipelineVersion")) {
    m_pipelineVersion = jsonValue.GetString("pipelineVersion");
    m_pipelineVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionPriority")) {
    m_executionPriority = jsonValue.GetInteger("executionPriority");
    m_executionPriorityHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue PipelineExecutionSummary::Jsonize() const {
  JsonValue payload;

  if (m_pipelineExecutionIdHasBeenSet) {
    payload.WithString("pipelineExecutionId", m_pipelineExecutionId);
  }

  if (m_pipelineVersionHasBeenSet) {
    payload.WithString("pipelineVersion", m_pipelineVersion);
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_executionPriorityHasBeenSet) {
    payload.WithInteger("executionPriority", m_executionPriority);
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
