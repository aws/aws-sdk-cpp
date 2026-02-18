/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/grafana/model/ValidationException.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ManagedGrafana {
namespace Model {

ValidationException::ValidationException(JsonView jsonValue) { *this = jsonValue; }

ValidationException& ValidationException::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("reason")) {
    m_reason = ValidationExceptionReasonMapper::GetValidationExceptionReasonForName(jsonValue.GetString("reason"));
    m_reasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fieldList")) {
    Aws::Utils::Array<JsonView> fieldListJsonList = jsonValue.GetArray("fieldList");
    for (unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex) {
      m_fieldList.push_back(fieldListJsonList[fieldListIndex].AsObject());
    }
    m_fieldListHasBeenSet = true;
  }
  return *this;
}

JsonValue ValidationException::Jsonize() const {
  JsonValue payload;

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_reasonHasBeenSet) {
    payload.WithString("reason", ValidationExceptionReasonMapper::GetNameForValidationExceptionReason(m_reason));
  }

  if (m_fieldListHasBeenSet) {
    Aws::Utils::Array<JsonValue> fieldListJsonList(m_fieldList.size());
    for (unsigned fieldListIndex = 0; fieldListIndex < fieldListJsonList.GetLength(); ++fieldListIndex) {
      fieldListJsonList[fieldListIndex].AsObject(m_fieldList[fieldListIndex].Jsonize());
    }
    payload.WithArray("fieldList", std::move(fieldListJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
