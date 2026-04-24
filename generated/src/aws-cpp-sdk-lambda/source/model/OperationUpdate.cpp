/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/OperationUpdate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

OperationUpdate::OperationUpdate(JsonView jsonValue) { *this = jsonValue; }

OperationUpdate& OperationUpdate::operator=(JsonView jsonValue) {
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
  if (jsonValue.ValueExists("Action")) {
    m_action = OperationActionMapper::GetOperationActionForName(jsonValue.GetString("Action"));
    m_actionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Payload")) {
    m_payload = jsonValue.GetString("Payload");
    m_payloadHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Error")) {
    m_error = jsonValue.GetObject("Error");
    m_errorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContextOptions")) {
    m_contextOptions = jsonValue.GetObject("ContextOptions");
    m_contextOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StepOptions")) {
    m_stepOptions = jsonValue.GetObject("StepOptions");
    m_stepOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WaitOptions")) {
    m_waitOptions = jsonValue.GetObject("WaitOptions");
    m_waitOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CallbackOptions")) {
    m_callbackOptions = jsonValue.GetObject("CallbackOptions");
    m_callbackOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ChainedInvokeOptions")) {
    m_chainedInvokeOptions = jsonValue.GetObject("ChainedInvokeOptions");
    m_chainedInvokeOptionsHasBeenSet = true;
  }
  return *this;
}

JsonValue OperationUpdate::Jsonize() const {
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

  if (m_actionHasBeenSet) {
    payload.WithString("Action", OperationActionMapper::GetNameForOperationAction(m_action));
  }

  if (m_payloadHasBeenSet) {
    payload.WithString("Payload", m_payload);
  }

  if (m_errorHasBeenSet) {
    payload.WithObject("Error", m_error.Jsonize());
  }

  if (m_contextOptionsHasBeenSet) {
    payload.WithObject("ContextOptions", m_contextOptions.Jsonize());
  }

  if (m_stepOptionsHasBeenSet) {
    payload.WithObject("StepOptions", m_stepOptions.Jsonize());
  }

  if (m_waitOptionsHasBeenSet) {
    payload.WithObject("WaitOptions", m_waitOptions.Jsonize());
  }

  if (m_callbackOptionsHasBeenSet) {
    payload.WithObject("CallbackOptions", m_callbackOptions.Jsonize());
  }

  if (m_chainedInvokeOptionsHasBeenSet) {
    payload.WithObject("ChainedInvokeOptions", m_chainedInvokeOptions.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
