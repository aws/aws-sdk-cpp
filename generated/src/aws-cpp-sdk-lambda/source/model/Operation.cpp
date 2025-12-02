/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/Operation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

Operation::Operation(JsonView jsonValue) { *this = jsonValue; }

Operation& Operation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ParentId")) {
    m_parentId = jsonValue.GetString("ParentId");
    m_parentIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = OperationTypeMapper::GetOperationTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubType")) {
    m_subType = jsonValue.GetString("SubType");
    m_subTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StartTimestamp")) {
    m_startTimestamp = jsonValue.GetDouble("StartTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndTimestamp")) {
    m_endTimestamp = jsonValue.GetDouble("EndTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = OperationStatusMapper::GetOperationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExecutionDetails")) {
    m_executionDetails = jsonValue.GetObject("ExecutionDetails");
    m_executionDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextDetails")) {
    m_contextDetails = jsonValue.GetObject("ContextDetails");
    m_contextDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepDetails")) {
    m_stepDetails = jsonValue.GetObject("StepDetails");
    m_stepDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WaitDetails")) {
    m_waitDetails = jsonValue.GetObject("WaitDetails");
    m_waitDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackDetails")) {
    m_callbackDetails = jsonValue.GetObject("CallbackDetails");
    m_callbackDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeDetails")) {
    m_chainedInvokeDetails = jsonValue.GetObject("ChainedInvokeDetails");
    m_chainedInvokeDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue Operation::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_parentIdHasBeenSet) {
    payload.WithString("ParentId", m_parentId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", OperationTypeMapper::GetNameForOperationType(m_type));
  }

  if (m_subTypeHasBeenSet) {
    payload.WithString("SubType", m_subType);
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithDouble("EndTimestamp", m_endTimestamp.SecondsWithMSPrecision());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", OperationStatusMapper::GetNameForOperationStatus(m_status));
  }

  if (m_executionDetailsHasBeenSet) {
    payload.WithObject("ExecutionDetails", m_executionDetails.Jsonize());
  }

  if (m_contextDetailsHasBeenSet) {
    payload.WithObject("ContextDetails", m_contextDetails.Jsonize());
  }

  if (m_stepDetailsHasBeenSet) {
    payload.WithObject("StepDetails", m_stepDetails.Jsonize());
  }

  if (m_waitDetailsHasBeenSet) {
    payload.WithObject("WaitDetails", m_waitDetails.Jsonize());
  }

  if (m_callbackDetailsHasBeenSet) {
    payload.WithObject("CallbackDetails", m_callbackDetails.Jsonize());
  }

  if (m_chainedInvokeDetailsHasBeenSet) {
    payload.WithObject("ChainedInvokeDetails", m_chainedInvokeDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
