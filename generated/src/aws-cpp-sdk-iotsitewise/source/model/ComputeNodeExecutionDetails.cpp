/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ComputeNodeExecutionDetails::ComputeNodeExecutionDetails(JsonView jsonValue) { *this = jsonValue; }

ComputeNodeExecutionDetails& ComputeNodeExecutionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("computeNodeName")) {
    m_computeNodeName = jsonValue.GetString("computeNodeName");
    m_computeNodeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskName")) {
    m_taskName = jsonValue.GetString("taskName");
    m_taskNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskArn")) {
    m_taskArn = jsonValue.GetString("taskArn");
    m_taskArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("taskVersion")) {
    m_taskVersion = jsonValue.GetString("taskVersion");
    m_taskVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("dependsOn")) {
    Aws::Utils::Array<JsonView> dependsOnJsonList = jsonValue.GetArray("dependsOn");
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      m_dependsOn.push_back(dependsOnJsonList[dependsOnIndex].AsString());
    }
    m_dependsOnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = jsonValue.GetObject("status");
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetDouble("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("executionEnvironmentVariables")) {
    Aws::Map<Aws::String, JsonView> executionEnvironmentVariablesJsonMap =
        jsonValue.GetObject("executionEnvironmentVariables").GetAllObjects();
    for (auto& executionEnvironmentVariablesItem : executionEnvironmentVariablesJsonMap) {
      m_executionEnvironmentVariables[executionEnvironmentVariablesItem.first] = executionEnvironmentVariablesItem.second.AsString();
    }
    m_executionEnvironmentVariablesHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeExecutionDetails::Jsonize() const {
  JsonValue payload;

  if (m_computeNodeNameHasBeenSet) {
    payload.WithString("computeNodeName", m_computeNodeName);
  }

  if (m_taskNameHasBeenSet) {
    payload.WithString("taskName", m_taskName);
  }

  if (m_taskArnHasBeenSet) {
    payload.WithString("taskArn", m_taskArn);
  }

  if (m_taskVersionHasBeenSet) {
    payload.WithString("taskVersion", m_taskVersion);
  }

  if (m_dependsOnHasBeenSet) {
    Aws::Utils::Array<JsonValue> dependsOnJsonList(m_dependsOn.size());
    for (unsigned dependsOnIndex = 0; dependsOnIndex < dependsOnJsonList.GetLength(); ++dependsOnIndex) {
      dependsOnJsonList[dependsOnIndex].AsString(m_dependsOn[dependsOnIndex]);
    }
    payload.WithArray("dependsOn", std::move(dependsOnJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("status", m_status.Jsonize());
  }

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_executionEnvironmentVariablesHasBeenSet) {
    JsonValue executionEnvironmentVariablesJsonMap;
    for (auto& executionEnvironmentVariablesItem : m_executionEnvironmentVariables) {
      executionEnvironmentVariablesJsonMap.WithString(executionEnvironmentVariablesItem.first, executionEnvironmentVariablesItem.second);
    }
    payload.WithObject("executionEnvironmentVariables", std::move(executionEnvironmentVariablesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
