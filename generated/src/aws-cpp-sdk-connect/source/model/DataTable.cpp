/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTable::DataTable(JsonView jsonValue) { *this = jsonValue; }

DataTable& DataTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TimeZone")) {
    m_timeZone = jsonValue.GetString("TimeZone");
    m_timeZoneHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValueLockLevel")) {
    m_valueLockLevel = DataTableLockLevelMapper::GetDataTableLockLevelForName(jsonValue.GetString("ValueLockLevel"));
    m_valueLockLevelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LockVersion")) {
    m_lockVersion = jsonValue.GetObject("LockVersion");
    m_lockVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VersionDescription")) {
    m_versionDescription = jsonValue.GetString("VersionDescription");
    m_versionDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = DataTableStatusMapper::GetDataTableStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedTime")) {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Tags")) {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for (auto& tagsItem : tagsJsonMap) {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTable::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_timeZoneHasBeenSet) {
    payload.WithString("TimeZone", m_timeZone);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_valueLockLevelHasBeenSet) {
    payload.WithString("ValueLockLevel", DataTableLockLevelMapper::GetNameForDataTableLockLevel(m_valueLockLevel));
  }

  if (m_lockVersionHasBeenSet) {
    payload.WithObject("LockVersion", m_lockVersion.Jsonize());
  }

  if (m_versionHasBeenSet) {
    payload.WithString("Version", m_version);
  }

  if (m_versionDescriptionHasBeenSet) {
    payload.WithString("VersionDescription", m_versionDescription);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", DataTableStatusMapper::GetNameForDataTableStatus(m_status));
  }

  if (m_createdTimeHasBeenSet) {
    payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
