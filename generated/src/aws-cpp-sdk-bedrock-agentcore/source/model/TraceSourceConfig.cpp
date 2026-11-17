/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/TraceSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

TraceSourceConfig::TraceSourceConfig(JsonView jsonValue) { *this = jsonValue; }

TraceSourceConfig& TraceSourceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("cloudWatchLogs")) {
    m_cloudWatchLogs = jsonValue.GetObject("cloudWatchLogs");
    m_cloudWatchLogsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onlineEvaluation")) {
    m_onlineEvaluation = jsonValue.GetObject("onlineEvaluation");
    m_onlineEvaluationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("batchEvaluation")) {
    m_batchEvaluation = jsonValue.GetObject("batchEvaluation");
    m_batchEvaluationHasBeenSet = true;
  }
  return *this;
}

JsonValue TraceSourceConfig::Jsonize() const {
  JsonValue payload;

  if (m_cloudWatchLogsHasBeenSet) {
    payload.WithObject("cloudWatchLogs", m_cloudWatchLogs.Jsonize());
  }

  if (m_onlineEvaluationHasBeenSet) {
    payload.WithObject("onlineEvaluation", m_onlineEvaluation.Jsonize());
  }

  if (m_batchEvaluationHasBeenSet) {
    payload.WithObject("batchEvaluation", m_batchEvaluation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
