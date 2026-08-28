/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/BackupConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

BackupConfiguration::BackupConfiguration(JsonView jsonValue) { *this = jsonValue; }

BackupConfiguration& BackupConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = BackupStatusMapper::GetBackupStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupType")) {
    m_backupType = BackupTypeMapper::GetBackupTypeForName(jsonValue.GetString("BackupType"));
    m_backupTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RetentionPeriodInDays")) {
    m_retentionPeriodInDays = jsonValue.GetInteger("RetentionPeriodInDays");
    m_retentionPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupTagsEnabled")) {
    m_backupTagsEnabled = jsonValue.GetBool("BackupTagsEnabled");
    m_backupTagsEnabledHasBeenSet = true;
  }
  return *this;
}

JsonValue BackupConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", BackupStatusMapper::GetNameForBackupStatus(m_status));
  }

  if (m_backupTypeHasBeenSet) {
    payload.WithString("BackupType", BackupTypeMapper::GetNameForBackupType(m_backupType));
  }

  if (m_retentionPeriodInDaysHasBeenSet) {
    payload.WithInteger("RetentionPeriodInDays", m_retentionPeriodInDays);
  }

  if (m_backupTagsEnabledHasBeenSet) {
    payload.WithBool("BackupTagsEnabled", m_backupTagsEnabled);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
