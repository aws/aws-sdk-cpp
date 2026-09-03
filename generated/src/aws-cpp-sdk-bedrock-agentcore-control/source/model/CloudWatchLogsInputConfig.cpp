/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CloudWatchLogsInputConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

CloudWatchLogsInputConfig::CloudWatchLogsInputConfig(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsInputConfig& CloudWatchLogsInputConfig::operator=(JsonView jsonValue) {
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
  return *this;
}

JsonValue CloudWatchLogsInputConfig::Jsonize() const {
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

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
