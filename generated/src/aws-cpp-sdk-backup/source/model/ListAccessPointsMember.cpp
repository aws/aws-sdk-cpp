/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ListAccessPointsMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

ListAccessPointsMember::ListAccessPointsMember(JsonView jsonValue) { *this = jsonValue; }

ListAccessPointsMember& ListAccessPointsMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccessPointArn")) {
    m_accessPointArn = jsonValue.GetString("AccessPointArn");
    m_accessPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessPointMetadata")) {
    Aws::Map<Aws::String, JsonView> accessPointMetadataJsonMap = jsonValue.GetObject("AccessPointMetadata").GetAllObjects();
    for (auto& accessPointMetadataItem : accessPointMetadataJsonMap) {
      m_accessPointMetadata[accessPointMetadataItem.first] = accessPointMetadataItem.second.AsString();
    }
    m_accessPointMetadataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultArn")) {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RecoveryPointArn")) {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = AccessPointStatusMapper::GetAccessPointStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StatusMessage")) {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ListAccessPointsMember::Jsonize() const {
  JsonValue payload;

  if (m_accessPointArnHasBeenSet) {
    payload.WithString("AccessPointArn", m_accessPointArn);
  }

  if (m_accessPointMetadataHasBeenSet) {
    JsonValue accessPointMetadataJsonMap;
    for (auto& accessPointMetadataItem : m_accessPointMetadata) {
      accessPointMetadataJsonMap.WithString(accessPointMetadataItem.first, accessPointMetadataItem.second);
    }
    payload.WithObject("AccessPointMetadata", std::move(accessPointMetadataJsonMap));
  }

  if (m_backupVaultArnHasBeenSet) {
    payload.WithString("BackupVaultArn", m_backupVaultArn);
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_recoveryPointArnHasBeenSet) {
    payload.WithString("RecoveryPointArn", m_recoveryPointArn);
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", m_resourceType);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", AccessPointStatusMapper::GetNameForAccessPointStatus(m_status));
  }

  if (m_statusMessageHasBeenSet) {
    payload.WithString("StatusMessage", m_statusMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
