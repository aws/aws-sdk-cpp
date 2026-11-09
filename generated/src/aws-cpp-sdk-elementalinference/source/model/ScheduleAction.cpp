/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/ScheduleAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

ScheduleAction::ScheduleAction(JsonView jsonValue) { *this = jsonValue; }

ScheduleAction& ScheduleAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("actionName")) {
    m_actionName = jsonValue.GetString("actionName");
    m_actionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startConfiguration")) {
    m_startConfiguration = jsonValue.GetObject("startConfiguration");
    m_startConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operations")) {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("operations");
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
    m_operationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ScheduleActionStatusMapper::GetScheduleActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("error")) {
    m_error = jsonValue.GetObject("error");
    m_errorHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduleAction::Jsonize() const {
  JsonValue payload;

  if (m_actionNameHasBeenSet) {
    payload.WithString("actionName", m_actionName);
  }

  if (m_startConfigurationHasBeenSet) {
    payload.WithObject("startConfiguration", m_startConfiguration.Jsonize());
  }

  if (m_operationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      operationsJsonList[operationsIndex].AsObject(m_operations[operationsIndex].Jsonize());
    }
    payload.WithArray("operations", std::move(operationsJsonList));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ScheduleActionStatusMapper::GetNameForScheduleActionStatus(m_status));
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("error", m_error.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
