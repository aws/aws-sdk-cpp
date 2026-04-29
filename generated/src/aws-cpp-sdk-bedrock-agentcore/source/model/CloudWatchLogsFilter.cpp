/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchLogsFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchLogsFilter::CloudWatchLogsFilter(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsFilter& CloudWatchLogsFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("key")) {
    m_key = jsonValue.GetString("key");
    m_keyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("operator")) {
    m_operator = CloudWatchLogsFilterOperatorMapper::GetCloudWatchLogsFilterOperatorForName(jsonValue.GetString("operator"));
    m_operatorHasBeenSet = true;
  }
  if (jsonValue.ValueExists("value")) {
    m_value = jsonValue.GetObject("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsFilter::Jsonize() const {
  JsonValue payload;

  if (m_keyHasBeenSet) {
    payload.WithString("key", m_key);
  }

  if (m_operatorHasBeenSet) {
    payload.WithString("operator", CloudWatchLogsFilterOperatorMapper::GetNameForCloudWatchLogsFilterOperator(m_operator));
  }

  if (m_valueHasBeenSet) {
    payload.WithObject("value", m_value.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
