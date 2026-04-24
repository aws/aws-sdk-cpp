/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/HarnessTruncationStrategyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

HarnessTruncationStrategyConfiguration::HarnessTruncationStrategyConfiguration(JsonView jsonValue) { *this = jsonValue; }

HarnessTruncationStrategyConfiguration& HarnessTruncationStrategyConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("slidingWindow")) {
    m_slidingWindow = jsonValue.GetObject("slidingWindow");
    m_slidingWindowHasBeenSet = true;
  }
  if (jsonValue.ValueExists("summarization")) {
    m_summarization = jsonValue.GetObject("summarization");
    m_summarizationHasBeenSet = true;
  }
  return *this;
}

JsonValue HarnessTruncationStrategyConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_slidingWindowHasBeenSet) {
    payload.WithObject("slidingWindow", m_slidingWindow.Jsonize());
  }

  if (m_summarizationHasBeenSet) {
    payload.WithObject("summarization", m_summarization.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
