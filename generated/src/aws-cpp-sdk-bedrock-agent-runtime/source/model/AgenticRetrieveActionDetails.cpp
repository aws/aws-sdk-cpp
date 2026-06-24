/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/AgenticRetrieveActionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

AgenticRetrieveActionDetails::AgenticRetrieveActionDetails(JsonView jsonValue) { *this = jsonValue; }

AgenticRetrieveActionDetails& AgenticRetrieveActionDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inputQuery")) {
    m_inputQuery = jsonValue.GetObject("inputQuery");
    m_inputQueryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceRetrievers")) {
    Aws::Utils::Array<JsonView> sourceRetrieversJsonList = jsonValue.GetArray("sourceRetrievers");
    for (unsigned sourceRetrieversIndex = 0; sourceRetrieversIndex < sourceRetrieversJsonList.GetLength(); ++sourceRetrieversIndex) {
      m_sourceRetrievers.push_back(sourceRetrieversJsonList[sourceRetrieversIndex].AsObject());
    }
    m_sourceRetrieversHasBeenSet = true;
  }
  return *this;
}

JsonValue AgenticRetrieveActionDetails::Jsonize() const {
  JsonValue payload;

  if (m_inputQueryHasBeenSet) {
    payload.WithObject("inputQuery", m_inputQuery.Jsonize());
  }

  if (m_sourceRetrieversHasBeenSet) {
    Aws::Utils::Array<JsonValue> sourceRetrieversJsonList(m_sourceRetrievers.size());
    for (unsigned sourceRetrieversIndex = 0; sourceRetrieversIndex < sourceRetrieversJsonList.GetLength(); ++sourceRetrieversIndex) {
      sourceRetrieversJsonList[sourceRetrieversIndex].AsObject(m_sourceRetrievers[sourceRetrieversIndex].Jsonize());
    }
    payload.WithArray("sourceRetrievers", std::move(sourceRetrieversJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
