/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry/model/RegistryRecordsEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistry {
namespace Model {

RegistryRecordsEntry::RegistryRecordsEntry(JsonView jsonValue) { *this = jsonValue; }

RegistryRecordsEntry& RegistryRecordsEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("registryId")) {
    m_registryId = jsonValue.GetString("registryId");
    m_registryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordIds")) {
    Aws::Utils::Array<JsonView> recordIdsJsonList = jsonValue.GetArray("recordIds");
    for (unsigned recordIdsIndex = 0; recordIdsIndex < recordIdsJsonList.GetLength(); ++recordIdsIndex) {
      m_recordIds.push_back(recordIdsJsonList[recordIdsIndex].AsString());
    }
    m_recordIdsHasBeenSet = true;
  }
  return *this;
}

JsonValue RegistryRecordsEntry::Jsonize() const {
  JsonValue payload;

  if (m_registryIdHasBeenSet) {
    payload.WithString("registryId", m_registryId);
  }

  if (m_recordIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> recordIdsJsonList(m_recordIds.size());
    for (unsigned recordIdsIndex = 0; recordIdsIndex < recordIdsJsonList.GetLength(); ++recordIdsIndex) {
      recordIdsJsonList[recordIdsIndex].AsString(m_recordIds[recordIdsIndex]);
    }
    payload.WithArray("recordIds", std::move(recordIdsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistry
}  // namespace Aws
