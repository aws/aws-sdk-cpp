/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/FallbackTriggers.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

FallbackTriggers::FallbackTriggers(JsonView jsonValue) { *this = jsonValue; }

FallbackTriggers& FallbackTriggers::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("statusCodes")) {
    Aws::Utils::Array<JsonView> statusCodesJsonList = jsonValue.GetArray("statusCodes");
    for (unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex) {
      m_statusCodes.push_back(statusCodesJsonList[statusCodesIndex].AsString());
    }
    m_statusCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(FallbackErrorMapper::GetFallbackErrorForName(errorsJsonList[errorsIndex].AsString()));
    }
    m_errorsHasBeenSet = true;
  }
  return *this;
}

JsonValue FallbackTriggers::Jsonize() const {
  JsonValue payload;

  if (m_statusCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> statusCodesJsonList(m_statusCodes.size());
    for (unsigned statusCodesIndex = 0; statusCodesIndex < statusCodesJsonList.GetLength(); ++statusCodesIndex) {
      statusCodesJsonList[statusCodesIndex].AsString(m_statusCodes[statusCodesIndex]);
    }
    payload.WithArray("statusCodes", std::move(statusCodesJsonList));
  }

  if (m_errorsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      errorsJsonList[errorsIndex].AsString(FallbackErrorMapper::GetNameForFallbackError(m_errors[errorsIndex]));
    }
    payload.WithArray("errors", std::move(errorsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
