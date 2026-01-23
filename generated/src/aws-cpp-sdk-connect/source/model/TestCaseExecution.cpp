/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/TestCaseExecution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

TestCaseExecution::TestCaseExecution(JsonView jsonValue) { *this = jsonValue; }

TestCaseExecution& TestCaseExecution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StartTime")) {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTime")) {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestCaseExecutionId")) {
    m_testCaseExecutionId = jsonValue.GetString("TestCaseExecutionId");
    m_testCaseExecutionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestCaseId")) {
    m_testCaseId = jsonValue.GetString("TestCaseId");
    m_testCaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TestCaseExecutionStatus")) {
    m_testCaseExecutionStatus =
        TestCaseExecutionStatusMapper::GetTestCaseExecutionStatusForName(jsonValue.GetString("TestCaseExecutionStatus"));
    m_testCaseExecutionStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue TestCaseExecution::Jsonize() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithDouble("StartTime", m_startTime.SecondsWithMSPrecision());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if (m_testCaseExecutionIdHasBeenSet) {
    payload.WithString("TestCaseExecutionId", m_testCaseExecutionId);
  }

  if (m_testCaseIdHasBeenSet) {
    payload.WithString("TestCaseId", m_testCaseId);
  }

  if (m_testCaseExecutionStatusHasBeenSet) {
    payload.WithString("TestCaseExecutionStatus",
                       TestCaseExecutionStatusMapper::GetNameForTestCaseExecutionStatus(m_testCaseExecutionStatus));
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
