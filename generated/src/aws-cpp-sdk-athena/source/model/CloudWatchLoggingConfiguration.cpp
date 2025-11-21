/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/CloudWatchLoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Athena {
namespace Model {

CloudWatchLoggingConfiguration::CloudWatchLoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLoggingConfiguration& CloudWatchLoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogGroup")) {
    m_logGroup = jsonValue.GetString("LogGroup");
    m_logGroupHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogStreamNamePrefix")) {
    m_logStreamNamePrefix = jsonValue.GetString("LogStreamNamePrefix");
    m_logStreamNamePrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogTypes")) {
    Aws::Map<Aws::String, JsonView> logTypesJsonMap = jsonValue.GetObject("LogTypes").GetAllObjects();
    for (auto& logTypesItem : logTypesJsonMap) {
      Aws::Utils::Array<JsonView> logTypeValuesListJsonList = logTypesItem.second.AsArray();
      Aws::Vector<Aws::String> logTypeValuesListList;
      logTypeValuesListList.reserve((size_t)logTypeValuesListJsonList.GetLength());
      for (unsigned logTypeValuesListIndex = 0; logTypeValuesListIndex < logTypeValuesListJsonList.GetLength(); ++logTypeValuesListIndex) {
        logTypeValuesListList.push_back(logTypeValuesListJsonList[logTypeValuesListIndex].AsString());
      }
      m_logTypes[logTypesItem.first] = std::move(logTypeValuesListList);
    }
    m_logTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_logGroupHasBeenSet) {
    payload.WithString("LogGroup", m_logGroup);
  }

  if (m_logStreamNamePrefixHasBeenSet) {
    payload.WithString("LogStreamNamePrefix", m_logStreamNamePrefix);
  }

  if (m_logTypesHasBeenSet) {
    JsonValue logTypesJsonMap;
    for (auto& logTypesItem : m_logTypes) {
      Aws::Utils::Array<JsonValue> logTypeValuesListJsonList(logTypesItem.second.size());
      for (unsigned logTypeValuesListIndex = 0; logTypeValuesListIndex < logTypeValuesListJsonList.GetLength(); ++logTypeValuesListIndex) {
        logTypeValuesListJsonList[logTypeValuesListIndex].AsString(logTypesItem.second[logTypeValuesListIndex]);
      }
      logTypesJsonMap.WithArray(logTypesItem.first, std::move(logTypeValuesListJsonList));
    }
    payload.WithObject("LogTypes", std::move(logTypesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
