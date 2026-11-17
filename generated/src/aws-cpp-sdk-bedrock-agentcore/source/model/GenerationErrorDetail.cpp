/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GenerationErrorDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

GenerationErrorDetail::GenerationErrorDetail(JsonView jsonValue) { *this = jsonValue; }

GenerationErrorDetail& GenerationErrorDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = jsonValue.GetString("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("count")) {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sessionIds")) {
    Aws::Utils::Array<JsonView> sessionIdsJsonList = jsonValue.GetArray("sessionIds");
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      m_sessionIds.push_back(sessionIdsJsonList[sessionIdsIndex].AsString());
    }
    m_sessionIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue GenerationErrorDetail::Jsonize() const {
  JsonValue payload;

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", m_errorCode);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  if (m_countHasBeenSet) {
    payload.WithInteger("count", m_count);
  }

  if (m_sessionIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> sessionIdsJsonList(m_sessionIds.size());
    for (unsigned sessionIdsIndex = 0; sessionIdsIndex < sessionIdsJsonList.GetLength(); ++sessionIdsIndex) {
      sessionIdsJsonList[sessionIdsIndex].AsString(m_sessionIds[sessionIdsIndex]);
    }
    payload.WithArray("sessionIds", std::move(sessionIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
