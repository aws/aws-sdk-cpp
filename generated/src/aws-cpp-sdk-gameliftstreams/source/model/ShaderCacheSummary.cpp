/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/gameliftstreams/model/ShaderCacheSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GameLiftStreams {
namespace Model {

ShaderCacheSummary::ShaderCacheSummary(JsonView jsonValue) { *this = jsonValue; }

ShaderCacheSummary& ShaderCacheSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Identifier")) {
    m_identifier = jsonValue.GetString("Identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationArn")) {
    m_applicationArn = jsonValue.GetString("ApplicationArn");
    m_applicationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ShaderCacheStatusMapper::GetShaderCacheStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedAt")) {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StorageBytes")) {
    m_storageBytes = jsonValue.GetInt64("StorageBytes");
    m_storageBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AssociatedStreamGroups")) {
    Aws::Utils::Array<JsonView> associatedStreamGroupsJsonList = jsonValue.GetArray("AssociatedStreamGroups");
    for (unsigned associatedStreamGroupsIndex = 0; associatedStreamGroupsIndex < associatedStreamGroupsJsonList.GetLength();
         ++associatedStreamGroupsIndex) {
      m_associatedStreamGroups.push_back(associatedStreamGroupsJsonList[associatedStreamGroupsIndex].AsString());
    }
    m_associatedStreamGroupsHasBeenSet = true;
  }
  return *this;
}

JsonValue ShaderCacheSummary::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithString("Identifier", m_identifier);
  }

  if (m_applicationArnHasBeenSet) {
    payload.WithString("ApplicationArn", m_applicationArn);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ShaderCacheStatusMapper::GetNameForShaderCacheStatus(m_status));
  }

  if (m_lastUpdatedAtHasBeenSet) {
    payload.WithDouble("LastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if (m_storageBytesHasBeenSet) {
    payload.WithInt64("StorageBytes", m_storageBytes);
  }

  if (m_associatedStreamGroupsHasBeenSet) {
    Aws::Utils::Array<JsonValue> associatedStreamGroupsJsonList(m_associatedStreamGroups.size());
    for (unsigned associatedStreamGroupsIndex = 0; associatedStreamGroupsIndex < associatedStreamGroupsJsonList.GetLength();
         ++associatedStreamGroupsIndex) {
      associatedStreamGroupsJsonList[associatedStreamGroupsIndex].AsString(m_associatedStreamGroups[associatedStreamGroupsIndex]);
    }
    payload.WithArray("AssociatedStreamGroups", std::move(associatedStreamGroupsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
