/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchOutputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchOutputConfig::CloudWatchOutputConfig(JsonView jsonValue) { *this = jsonValue; }

CloudWatchOutputConfig& CloudWatchOutputConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupName")) {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logStreamName")) {
    m_logStreamName = jsonValue.GetString("logStreamName");
    m_logStreamNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metricsNamespace")) {
    m_metricsNamespace = jsonValue.GetString("metricsNamespace");
    m_metricsNamespaceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resultDestination")) {
    m_resultDestination = ResultDestinationMapper::GetResultDestinationForName(jsonValue.GetString("resultDestination"));
    m_resultDestinationHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchOutputConfig::Jsonize() const {
  JsonValue payload;

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("logGroupName", m_logGroupName);
  }

  if (m_logStreamNameHasBeenSet) {
    payload.WithString("logStreamName", m_logStreamName);
  }

  if (m_metricsNamespaceHasBeenSet) {
    payload.WithString("metricsNamespace", m_metricsNamespace);
  }

  if (m_resultDestinationHasBeenSet) {
    payload.WithString("resultDestination", ResultDestinationMapper::GetNameForResultDestination(m_resultDestination));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
