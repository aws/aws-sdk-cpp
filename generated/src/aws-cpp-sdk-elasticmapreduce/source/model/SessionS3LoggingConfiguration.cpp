/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elasticmapreduce/model/SessionS3LoggingConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EMR {
namespace Model {

SessionS3LoggingConfiguration::SessionS3LoggingConfiguration(JsonView jsonValue) { *this = jsonValue; }

SessionS3LoggingConfiguration& SessionS3LoggingConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Enabled")) {
    m_enabled = jsonValue.GetBool("Enabled");
    m_enabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogUri")) {
    m_logUri = jsonValue.GetString("LogUri");
    m_logUriHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EncryptionKeyArn")) {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogTypes")) {
    Aws::Map<Aws::String, JsonView> logTypesJsonMap = jsonValue.GetObject("LogTypes").GetAllObjects();
    for (auto& logTypesItem : logTypesJsonMap) {
      Aws::Utils::Array<JsonView> xmlStringList2JsonList = logTypesItem.second.AsArray();
      Aws::Vector<Aws::String> xmlStringList2List;
      xmlStringList2List.reserve((size_t)xmlStringList2JsonList.GetLength());
      for (unsigned xmlStringList2Index = 0; xmlStringList2Index < xmlStringList2JsonList.GetLength(); ++xmlStringList2Index) {
        xmlStringList2List.push_back(xmlStringList2JsonList[xmlStringList2Index].AsString());
      }
      m_logTypes[logTypesItem.first] = std::move(xmlStringList2List);
    }
    m_logTypesHasBeenSet = true;
  }
  return *this;
}

JsonValue SessionS3LoggingConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_enabledHasBeenSet) {
    payload.WithBool("Enabled", m_enabled);
  }

  if (m_logUriHasBeenSet) {
    payload.WithString("LogUri", m_logUri);
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
