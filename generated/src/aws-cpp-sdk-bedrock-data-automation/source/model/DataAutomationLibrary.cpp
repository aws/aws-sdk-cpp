/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-data-automation/model/DataAutomationLibrary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

DataAutomationLibrary::DataAutomationLibrary(JsonView jsonValue) { *this = jsonValue; }

DataAutomationLibrary& DataAutomationLibrary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("libraryArn")) {
    m_libraryArn = jsonValue.GetString("libraryArn");
    m_libraryArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("creationTime")) {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("libraryName")) {
    m_libraryName = jsonValue.GetString("libraryName");
    m_libraryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("libraryDescription")) {
    m_libraryDescription = jsonValue.GetString("libraryDescription");
    m_libraryDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = DataAutomationLibraryStatusMapper::GetDataAutomationLibraryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("entityTypes")) {
    Aws::Utils::Array<JsonView> entityTypesJsonList = jsonValue.GetArray("entityTypes");
    for (unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex) {
      m_entityTypes.push_back(entityTypesJsonList[entityTypesIndex].AsObject());
    }
    m_entityTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsEncryptionContext")) {
    Aws::Map<Aws::String, JsonView> kmsEncryptionContextJsonMap = jsonValue.GetObject("kmsEncryptionContext").GetAllObjects();
    for (auto& kmsEncryptionContextItem : kmsEncryptionContextJsonMap) {
      m_kmsEncryptionContext[kmsEncryptionContextItem.first] = kmsEncryptionContextItem.second.AsString();
    }
    m_kmsEncryptionContextHasBeenSet = true;
  }
  return *this;
}

JsonValue DataAutomationLibrary::Jsonize() const {
  JsonValue payload;

  if (m_libraryArnHasBeenSet) {
    payload.WithString("libraryArn", m_libraryArn);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_libraryNameHasBeenSet) {
    payload.WithString("libraryName", m_libraryName);
  }

  if (m_libraryDescriptionHasBeenSet) {
    payload.WithString("libraryDescription", m_libraryDescription);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", DataAutomationLibraryStatusMapper::GetNameForDataAutomationLibraryStatus(m_status));
  }

  if (m_entityTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> entityTypesJsonList(m_entityTypes.size());
    for (unsigned entityTypesIndex = 0; entityTypesIndex < entityTypesJsonList.GetLength(); ++entityTypesIndex) {
      entityTypesJsonList[entityTypesIndex].AsObject(m_entityTypes[entityTypesIndex].Jsonize());
    }
    payload.WithArray("entityTypes", std::move(entityTypesJsonList));
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  if (m_kmsEncryptionContextHasBeenSet) {
    JsonValue kmsEncryptionContextJsonMap;
    for (auto& kmsEncryptionContextItem : m_kmsEncryptionContext) {
      kmsEncryptionContextJsonMap.WithString(kmsEncryptionContextItem.first, kmsEncryptionContextItem.second);
    }
    payload.WithObject("kmsEncryptionContext", std::move(kmsEncryptionContextJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
