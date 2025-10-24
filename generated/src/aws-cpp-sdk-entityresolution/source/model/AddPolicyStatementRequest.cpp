﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/AddPolicyStatementRequest.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddPolicyStatementRequest::SerializePayload() const {
  JsonValue payload;

  if (m_effectHasBeenSet) {
    payload.WithString("effect", StatementEffectMapper::GetNameForStatementEffect(m_effect));
  }

  if (m_actionHasBeenSet) {
    Aws::Utils::Array<JsonValue> actionJsonList(m_action.size());
    for (unsigned actionIndex = 0; actionIndex < actionJsonList.GetLength(); ++actionIndex) {
      actionJsonList[actionIndex].AsString(m_action[actionIndex]);
    }
    payload.WithArray("action", std::move(actionJsonList));
  }

  if (m_principalHasBeenSet) {
    Aws::Utils::Array<JsonValue> principalJsonList(m_principal.size());
    for (unsigned principalIndex = 0; principalIndex < principalJsonList.GetLength(); ++principalIndex) {
      principalJsonList[principalIndex].AsString(m_principal[principalIndex]);
    }
    payload.WithArray("principal", std::move(principalJsonList));
  }

  if (m_conditionHasBeenSet) {
    payload.WithString("condition", m_condition);
  }

  return payload.View().WriteReadable();
}
