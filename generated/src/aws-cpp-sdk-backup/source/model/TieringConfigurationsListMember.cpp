/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/TieringConfigurationsListMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

TieringConfigurationsListMember::TieringConfigurationsListMember(JsonView jsonValue) { *this = jsonValue; }

TieringConfigurationsListMember& TieringConfigurationsListMember::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TieringConfigurationArn")) {
    m_tieringConfigurationArn = jsonValue.GetString("TieringConfigurationArn");
    m_tieringConfigurationArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TieringConfigurationName")) {
    m_tieringConfigurationName = jsonValue.GetString("TieringConfigurationName");
    m_tieringConfigurationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupVaultName")) {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");
    m_backupVaultNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreationTime")) {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue TieringConfigurationsListMember::Jsonize() const {
  JsonValue payload;

  if (m_tieringConfigurationArnHasBeenSet) {
    payload.WithString("TieringConfigurationArn", m_tieringConfigurationArn);
  }

  if (m_tieringConfigurationNameHasBeenSet) {
    payload.WithString("TieringConfigurationName", m_tieringConfigurationName);
  }

  if (m_backupVaultNameHasBeenSet) {
    payload.WithString("BackupVaultName", m_backupVaultName);
  }

  if (m_creationTimeHasBeenSet) {
    payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
