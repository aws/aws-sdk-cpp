/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FailureAnalysisResultContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

FailureAnalysisResultContent::FailureAnalysisResultContent(JsonView jsonValue) { *this = jsonValue; }

FailureAnalysisResultContent& FailureAnalysisResultContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("failures")) {
    Aws::Utils::Array<JsonView> failuresJsonList = jsonValue.GetArray("failures");
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      m_failures.push_back(failuresJsonList[failuresIndex].AsObject());
    }
    m_failuresHasBeenSet = true;
  }
  return *this;
}

JsonValue FailureAnalysisResultContent::Jsonize() const {
  JsonValue payload;

  if (m_failuresHasBeenSet) {
    Aws::Utils::Array<JsonValue> failuresJsonList(m_failures.size());
    for (unsigned failuresIndex = 0; failuresIndex < failuresJsonList.GetLength(); ++failuresIndex) {
      failuresJsonList[failuresIndex].AsObject(m_failures[failuresIndex].Jsonize());
    }
    payload.WithArray("failures", std::move(failuresJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
