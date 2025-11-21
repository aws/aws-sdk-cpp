/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/CloudWatchLogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

CloudWatchLogConfiguration::CloudWatchLogConfiguration(JsonView jsonValue) { *this = jsonValue; }

CloudWatchLogConfiguration& CloudWatchLogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogGroupName")) {
    m_logGroupName = jsonValue.GetString("LogGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogStreamNamePrefix")) {
    m_logStreamNamePrefix = jsonValue.GetString("LogStreamNamePrefix");
    m_logStreamNamePrefixHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogTypes")) {
    Aws::Map<Aws::String, JsonView> logTypesJsonMap = jsonValue.GetObject("LogTypes").GetAllObjects();
    for (auto& logTypesItem : logTypesJsonMap) {
      Aws::Utils::Array<JsonView> xmlStringListJsonList = logTypesItem.second.AsArray();
      Aws::Vector<Aws::String> xmlStringListList;
      xmlStringListList.reserve((size_t)xmlStringListJsonList.GetLength());
      for (unsigned xmlStringListIndex = 0; xmlStringListIndex < xmlStringListJsonList.GetLength(); ++xmlStringListIndex) {
        xmlStringListList.push_back(xmlStringListJsonList[xmlStringListIndex].AsString());
      }
      m_logTypes[logTypesItem.first] = std::move(xmlStringListList);
    }
    m_logTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue CloudWatchLogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_logGroupNameHasBeenSet) {
    payload.WithString("LogGroupName", m_logGroupName);
  }

  if (m_logStreamNamePrefixHasBeenSet) {
    payload.WithString("LogStreamNamePrefix", m_logStreamNamePrefix);
  }

  if (m_encryptionKeyArnHasBeenSet) {
    payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);
  }

  if (m_logTypesHasBeenSet) {
    JsonValue logTypesJsonMap;
    for (auto& logTypesItem : m_logTypes) {
      Aws::Utils::Array<JsonValue> xmlStringListJsonList(logTypesItem.second.size());
      for (unsigned xmlStringListIndex = 0; xmlStringListIndex < xmlStringListJsonList.GetLength(); ++xmlStringListIndex) {
        xmlStringListJsonList[xmlStringListIndex].AsString(logTypesItem.second[xmlStringListIndex]);
      }
      logTypesJsonMap.WithArray(logTypesItem.first, std::move(xmlStringListJsonList));
    }
    payload.WithObject("LogTypes", std::move(logTypesJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
