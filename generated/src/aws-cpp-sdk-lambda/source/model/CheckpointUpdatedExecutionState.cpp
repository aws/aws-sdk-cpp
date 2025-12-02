/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CheckpointUpdatedExecutionState.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

CheckpointUpdatedExecutionState::CheckpointUpdatedExecutionState(JsonView jsonValue) { *this = jsonValue; }

CheckpointUpdatedExecutionState& CheckpointUpdatedExecutionState::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Operations")) {
    Aws::Utils::Array<JsonView> operationsJsonList = jsonValue.GetArray("Operations");
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      m_operations.push_back(operationsJsonList[operationsIndex].AsObject());
    }
    m_operationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NextMarker")) {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  return *this;
}

JsonValue CheckpointUpdatedExecutionState::Jsonize() const {
  JsonValue payload;

  if (m_operationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> operationsJsonList(m_operations.size());
    for (unsigned operationsIndex = 0; operationsIndex < operationsJsonList.GetLength(); ++operationsIndex) {
      operationsJsonList[operationsIndex].AsObject(m_operations[operationsIndex].Jsonize());
    }
    payload.WithArray("Operations", std::move(operationsJsonList));
  }

  if (m_nextMarkerHasBeenSet) {
    payload.WithString("NextMarker", m_nextMarker);
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
