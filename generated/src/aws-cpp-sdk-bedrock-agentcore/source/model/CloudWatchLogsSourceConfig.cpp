/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchLogsSourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchLogsSourceConfig::CloudWatchLogsSourceConfig(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsSourceConfig& CloudWatchLogsSourceConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logGroupNames")) {
    Aws::Utils::Array<JsonView> logGroupNamesJsonList = jsonValue.GetArray("logGroupNames");
    for (unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex) {
      m_logGroupNames.push_back(logGroupNamesJsonList[logGroupNamesIndex].AsString());
    }
    m_logGroupNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logGroupNamePrefixes")) {
    Aws::Utils::Array<JsonView> logGroupNamePrefixesJsonList = jsonValue.GetArray("logGroupNamePrefixes");
    for (unsigned logGroupNamePrefixesIndex = 0; logGroupNamePrefixesIndex < logGroupNamePrefixesJsonList.GetLength();
         ++logGroupNamePrefixesIndex) {
      m_logGroupNamePrefixes.push_back(logGroupNamePrefixesJsonList[logGroupNamePrefixesIndex].AsString());
    }
    m_logGroupNamePrefixesHasBeenSet = true;
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
  return *this;
}

JsonValue CloudWatchLogsSourceConfig::Jsonize() const {
  JsonValue payload;

  if (m_logGroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupNamesJsonList(m_logGroupNames.size());
    for (unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex) {
      logGroupNamesJsonList[logGroupNamesIndex].AsString(m_logGroupNames[logGroupNamesIndex]);
    }
    payload.WithArray("logGroupNames", std::move(logGroupNamesJsonList));
  }

  if (m_logGroupNamePrefixesHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupNamePrefixesJsonList(m_logGroupNamePrefixes.size());
    for (unsigned logGroupNamePrefixesIndex = 0; logGroupNamePrefixesIndex < logGroupNamePrefixesJsonList.GetLength();
         ++logGroupNamePrefixesIndex) {
      logGroupNamePrefixesJsonList[logGroupNamePrefixesIndex].AsString(m_logGroupNamePrefixes[logGroupNamePrefixesIndex]);
    }
    payload.WithArray("logGroupNamePrefixes", std::move(logGroupNamePrefixesJsonList));
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

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
