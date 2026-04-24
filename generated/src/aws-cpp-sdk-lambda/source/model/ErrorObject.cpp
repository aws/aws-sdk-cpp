/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/ErrorObject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lambda {
namespace Model {

ErrorObject::ErrorObject(JsonView jsonValue) { *this = jsonValue; }

ErrorObject& ErrorObject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ErrorMessage")) {
    m_errorMessage = jsonValue.GetString("ErrorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorType")) {
    m_errorType = jsonValue.GetString("ErrorType");
    m_errorTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorData")) {
    m_errorData = jsonValue.GetString("ErrorData");
    m_errorDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StackTrace")) {
    Aws::Utils::Array<JsonView> stackTraceJsonList = jsonValue.GetArray("StackTrace");
    for (unsigned stackTraceIndex = 0; stackTraceIndex < stackTraceJsonList.GetLength(); ++stackTraceIndex) {
      m_stackTrace.push_back(stackTraceJsonList[stackTraceIndex].AsString());
    }
    m_stackTraceHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorObject::Jsonize() const {
  JsonValue payload;

  if (m_errorMessageHasBeenSet) {
    payload.WithString("ErrorMessage", m_errorMessage);
  }

  if (m_errorTypeHasBeenSet) {
    payload.WithString("ErrorType", m_errorType);
  }

  if (m_errorDataHasBeenSet) {
    payload.WithString("ErrorData", m_errorData);
  }

  if (m_stackTraceHasBeenSet) {
    Aws::Utils::Array<JsonValue> stackTraceJsonList(m_stackTrace.size());
    for (unsigned stackTraceIndex = 0; stackTraceIndex < stackTraceJsonList.GetLength(); ++stackTraceIndex) {
      stackTraceJsonList[stackTraceIndex].AsString(m_stackTrace[stackTraceIndex]);
    }
    payload.WithArray("StackTrace", std::move(stackTraceJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
