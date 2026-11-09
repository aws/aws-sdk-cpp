/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/CreateScheduleActionRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateScheduleActionRequest::SerializePayload() const {
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

  return payload.View().WriteReadable();
}
