/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchLogsTraceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchLogsTraceConfig::CloudWatchLogsTraceConfig(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsTraceConfig& CloudWatchLogsTraceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupArns")) {
    Aws::Utils::Array<JsonView> logGroupArnsJsonList = jsonValue.GetArray("logGroupArns");
    for (unsigned logGroupArnsIndex = 0; logGroupArnsIndex < logGroupArnsJsonList.GetLength(); ++logGroupArnsIndex) {
      m_logGroupArns.push_back(logGroupArnsJsonList[logGroupArnsIndex].AsString());
    }
    m_logGroupArnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("serviceNames")) {
    Aws::Utils::Array<JsonView> serviceNamesJsonList = jsonValue.GetArray("serviceNames");
    for (unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex) {
      m_serviceNames.push_back(serviceNamesJsonList[serviceNamesIndex].AsString());
    }
    m_serviceNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTime")) {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTime")) {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("rule")) {
    m_rule = jsonValue.GetObject("rule");
    m_ruleHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsTraceConfig::Jsonize() const {
  JsonValue payload;

  if (m_logGroupArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupArnsJsonList(m_logGroupArns.size());
    for (unsigned logGroupArnsIndex = 0; logGroupArnsIndex < logGroupArnsJsonList.GetLength(); ++logGroupArnsIndex) {
      logGroupArnsJsonList[logGroupArnsIndex].AsString(m_logGroupArns[logGroupArnsIndex]);
    }
    payload.WithArray("logGroupArns", std::move(logGroupArnsJsonList));
  }

  if (m_serviceNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> serviceNamesJsonList(m_serviceNames.size());
    for (unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex) {
      serviceNamesJsonList[serviceNamesIndex].AsString(m_serviceNames[serviceNamesIndex]);
    }
    payload.WithArray("serviceNames", std::move(serviceNamesJsonList));
  }

  if (m_startTimeHasBeenSet) {
    payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_endTimeHasBeenSet) {
    payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_ruleHasBeenSet) {
    payload.WithObject("rule", m_rule.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
