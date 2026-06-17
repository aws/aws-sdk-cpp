/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveGeneratedResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveGeneratedResponse::AgenticRetrieveGeneratedResponse(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveGeneratedResponse& AgenticRetrieveGeneratedResponse::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("answer")) {
    m_answer = jsonValue.GetString("answer");
    m_answerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("citations")) {
    Aws::Utils::Array<JsonView> citationsJsonList = jsonValue.GetArray("citations");
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      m_citations.push_back(citationsJsonList[citationsIndex].AsObject());
    }
    m_citationsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveGeneratedResponse::Jsonize() const {
  JsonValue payload;

  if (m_answerHasBeenSet) {
    payload.WithString("answer", m_answer);
  }

  if (m_citationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> citationsJsonList(m_citations.size());
    for (unsigned citationsIndex = 0; citationsIndex < citationsJsonList.GetLength(); ++citationsIndex) {
      citationsJsonList[citationsIndex].AsObject(m_citations[citationsIndex].Jsonize());
    }
    payload.WithArray("citations", std::move(citationsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
