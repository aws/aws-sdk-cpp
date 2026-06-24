/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResultEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveResultEvent::AgenticRetrieveResultEvent(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveResultEvent& AgenticRetrieveResultEvent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("generatedResponse")) {
    m_generatedResponse = jsonValue.GetObject("generatedResponse");
    m_generatedResponseHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nextToken")) {
    m_nextToken = jsonValue.GetString("nextToken");
    m_nextTokenHasBeenSet = true;
  }
  if (jsonValue.ValueExists("results")) {
    Aws::Utils::Array<JsonView> resultsJsonList = jsonValue.GetArray("results");
    for (unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex) {
      m_results.push_back(resultsJsonList[resultsIndex].AsObject());
    }
    m_resultsHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveResultEvent::Jsonize() const {
  JsonValue payload;

  if (m_generatedResponseHasBeenSet) {
    payload.WithObject("generatedResponse", m_generatedResponse.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  if (m_resultsHasBeenSet) {
    Aws::Utils::Array<JsonValue> resultsJsonList(m_results.size());
    for (unsigned resultsIndex = 0; resultsIndex < resultsJsonList.GetLength(); ++resultsIndex) {
      resultsJsonList[resultsIndex].AsObject(m_results[resultsIndex].Jsonize());
    }
    payload.WithArray("results", std::move(resultsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
