/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-discovery/model/PublicRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentDiscovery {
namespace Model {

PublicRecord::PublicRecord(JsonView jsonValue) { *this = jsonValue; }

PublicRecord& PublicRecord::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("identifier")) {
    m_identifier = jsonValue.GetObject("identifier");
    m_identifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("displayName")) {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordType")) {
    m_recordType = RecordTypeMapper::GetRecordTypeForName(jsonValue.GetString("recordType"));
    m_recordTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("domain")) {
    m_domain = jsonValue.GetString("domain");
    m_domainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("descriptors")) {
    Aws::Map<Aws::String, JsonView> descriptorsJsonMap = jsonValue.GetObject("descriptors").GetAllObjects();
    for (auto& descriptorsItem : descriptorsJsonMap) {
      m_descriptors[descriptorsItem.first] = descriptorsItem.second.AsObject();
    }
    m_descriptorsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("trustManifests")) {
    Aws::Utils::Array<JsonView> trustManifestsJsonList = jsonValue.GetArray("trustManifests");
    for (unsigned trustManifestsIndex = 0; trustManifestsIndex < trustManifestsJsonList.GetLength(); ++trustManifestsIndex) {
      m_trustManifests.push_back(trustManifestsJsonList[trustManifestsIndex].AsObject());
    }
    m_trustManifestsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordVersion")) {
    m_recordVersion = jsonValue.GetString("recordVersion");
    m_recordVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue PublicRecord::Jsonize() const {
  JsonValue payload;

  if (m_identifierHasBeenSet) {
    payload.WithObject("identifier", m_identifier.Jsonize());
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_recordTypeHasBeenSet) {
    payload.WithString("recordType", RecordTypeMapper::GetNameForRecordType(m_recordType));
  }

  if (m_domainHasBeenSet) {
    payload.WithString("domain", m_domain);
  }

  if (m_descriptorsHasBeenSet) {
    JsonValue descriptorsJsonMap;
    for (auto& descriptorsItem : m_descriptors) {
      descriptorsJsonMap.WithObject(descriptorsItem.first, descriptorsItem.second.Jsonize());
    }
    payload.WithObject("descriptors", std::move(descriptorsJsonMap));
  }

  if (m_trustManifestsHasBeenSet) {
    Aws::Utils::Array<JsonValue> trustManifestsJsonList(m_trustManifests.size());
    for (unsigned trustManifestsIndex = 0; trustManifestsIndex < trustManifestsJsonList.GetLength(); ++trustManifestsIndex) {
      trustManifestsJsonList[trustManifestsIndex].AsObject(m_trustManifests[trustManifestsIndex].Jsonize());
    }
    payload.WithArray("trustManifests", std::move(trustManifestsJsonList));
  }

  if (m_recordVersionHasBeenSet) {
    payload.WithString("recordVersion", m_recordVersion);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentDiscovery
}  // namespace Aws
