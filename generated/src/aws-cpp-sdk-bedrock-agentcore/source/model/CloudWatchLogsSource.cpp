/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CloudWatchLogsSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

CloudWatchLogsSource::CloudWatchLogsSource(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogsSource& CloudWatchLogsSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("serviceNames")) {
    Aws::Utils::Array<JsonView> serviceNamesJsonList = jsonValue.GetArray("serviceNames");
    for (unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex) {
      m_serviceNames.push_back(serviceNamesJsonList[serviceNamesIndex].AsString());
    }
    m_serviceNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logGroupNames")) {
    Aws::Utils::Array<JsonView> logGroupNamesJsonList = jsonValue.GetArray("logGroupNames");
    for (unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex) {
      m_logGroupNames.push_back(logGroupNamesJsonList[logGroupNamesIndex].AsString());
    }
    m_logGroupNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filterConfig")) {
    m_filterConfig = jsonValue.GetObject("filterConfig");
    m_filterConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogsSource::Jsonize() const {
  JsonValue payload;

  if (m_serviceNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> serviceNamesJsonList(m_serviceNames.size());
    for (unsigned serviceNamesIndex = 0; serviceNamesIndex < serviceNamesJsonList.GetLength(); ++serviceNamesIndex) {
      serviceNamesJsonList[serviceNamesIndex].AsString(m_serviceNames[serviceNamesIndex]);
    }
    payload.WithArray("serviceNames", std::move(serviceNamesJsonList));
  }

  if (m_logGroupNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> logGroupNamesJsonList(m_logGroupNames.size());
    for (unsigned logGroupNamesIndex = 0; logGroupNamesIndex < logGroupNamesJsonList.GetLength(); ++logGroupNamesIndex) {
      logGroupNamesJsonList[logGroupNamesIndex].AsString(m_logGroupNames[logGroupNamesIndex]);
    }
    payload.WithArray("logGroupNames", std::move(logGroupNamesJsonList));
  }

  if (m_filterConfigHasBeenSet) {
    payload.WithObject("filterConfig", m_filterConfig.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
