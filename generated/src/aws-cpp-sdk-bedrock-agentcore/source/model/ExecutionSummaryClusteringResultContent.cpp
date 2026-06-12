/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ExecutionSummaryClusteringResultContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

ExecutionSummaryClusteringResultContent::ExecutionSummaryClusteringResultContent(JsonView jsonValue) { *this = jsonValue; }

ExecutionSummaryClusteringResultContent& ExecutionSummaryClusteringResultContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("executionSummaries")) {
    Aws::Utils::Array<JsonView> executionSummariesJsonList = jsonValue.GetArray("executionSummaries");
    for (unsigned executionSummariesIndex = 0; executionSummariesIndex < executionSummariesJsonList.GetLength();
         ++executionSummariesIndex) {
      m_executionSummaries.push_back(executionSummariesJsonList[executionSummariesIndex].AsObject());
    }
    m_executionSummariesHasBeenSet = true;
  }
  return *this;
}

JsonValue ExecutionSummaryClusteringResultContent::Jsonize() const {
  JsonValue payload;

  if (m_executionSummariesHasBeenSet) {
    Aws::Utils::Array<JsonValue> executionSummariesJsonList(m_executionSummaries.size());
    for (unsigned executionSummariesIndex = 0; executionSummariesIndex < executionSummariesJsonList.GetLength();
         ++executionSummariesIndex) {
      executionSummariesJsonList[executionSummariesIndex].AsObject(m_executionSummaries[executionSummariesIndex].Jsonize());
    }
    payload.WithArray("executionSummaries", std::move(executionSummariesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
