/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/DatastoreBackupStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

DatastoreBackupStatus::DatastoreBackupStatus(JsonView jsonValue) { *this = jsonValue; }

DatastoreBackupStatus& DatastoreBackupStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Configuration")) {
    m_configuration = jsonValue.GetObject("Configuration");
    m_configurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupEnabledAt")) {
    m_backupEnabledAt = jsonValue.GetDouble("BackupEnabledAt");
    m_backupEnabledAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EarliestRestorePoint")) {
    m_earliestRestorePoint = jsonValue.GetDouble("EarliestRestorePoint");
    m_earliestRestorePointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LatestRestorePoint")) {
    m_latestRestorePoint = jsonValue.GetDouble("LatestRestorePoint");
    m_latestRestorePointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ScheduledPermanentDeletionTime")) {
    m_scheduledPermanentDeletionTime = jsonValue.GetDouble("ScheduledPermanentDeletionTime");
    m_scheduledPermanentDeletionTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue DatastoreBackupStatus::Jsonize() const {
  JsonValue payload;

  if (m_configurationHasBeenSet) {
    payload.WithObject("Configuration", m_configuration.Jsonize());
  }

  if (m_backupEnabledAtHasBeenSet) {
    payload.WithDouble("BackupEnabledAt", m_backupEnabledAt.SecondsWithMSPrecision());
  }

  if (m_earliestRestorePointHasBeenSet) {
    payload.WithDouble("EarliestRestorePoint", m_earliestRestorePoint.SecondsWithMSPrecision());
  }

  if (m_latestRestorePointHasBeenSet) {
    payload.WithDouble("LatestRestorePoint", m_latestRestorePoint.SecondsWithMSPrecision());
  }

  if (m_scheduledPermanentDeletionTimeHasBeenSet) {
    payload.WithDouble("ScheduledPermanentDeletionTime", m_scheduledPermanentDeletionTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
