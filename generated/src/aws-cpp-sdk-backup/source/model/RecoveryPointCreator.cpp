/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Backup {
namespace Model {

RecoveryPointCreator::RecoveryPointCreator(JsonView jsonValue) { *this = jsonValue; }

RecoveryPointCreator& RecoveryPointCreator::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BackupPlanId")) {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");
    m_backupPlanIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupPlanArn")) {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");
    m_backupPlanArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupPlanName")) {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");
    m_backupPlanNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupPlanVersion")) {
    m_backupPlanVersion = jsonValue.GetString("BackupPlanVersion");
    m_backupPlanVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupRuleId")) {
    m_backupRuleId = jsonValue.GetString("BackupRuleId");
    m_backupRuleIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupRuleName")) {
    m_backupRuleName = jsonValue.GetString("BackupRuleName");
    m_backupRuleNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupRuleCron")) {
    m_backupRuleCron = jsonValue.GetString("BackupRuleCron");
    m_backupRuleCronHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BackupRuleTimezone")) {
    m_backupRuleTimezone = jsonValue.GetString("BackupRuleTimezone");
    m_backupRuleTimezoneHasBeenSet = true;
  }
  return *this;
}

JsonValue RecoveryPointCreator::Jsonize() const {
  JsonValue payload;

  if (m_backupPlanIdHasBeenSet) {
    payload.WithString("BackupPlanId", m_backupPlanId);
  }

  if (m_backupPlanArnHasBeenSet) {
    payload.WithString("BackupPlanArn", m_backupPlanArn);
  }

  if (m_backupPlanNameHasBeenSet) {
    payload.WithString("BackupPlanName", m_backupPlanName);
  }

  if (m_backupPlanVersionHasBeenSet) {
    payload.WithString("BackupPlanVersion", m_backupPlanVersion);
  }

  if (m_backupRuleIdHasBeenSet) {
    payload.WithString("BackupRuleId", m_backupRuleId);
  }

  if (m_backupRuleNameHasBeenSet) {
    payload.WithString("BackupRuleName", m_backupRuleName);
  }

  if (m_backupRuleCronHasBeenSet) {
    payload.WithString("BackupRuleCron", m_backupRuleCron);
  }

  if (m_backupRuleTimezoneHasBeenSet) {
    payload.WithString("BackupRuleTimezone", m_backupRuleTimezone);
  }

  return payload;
}

}  // namespace Model
}  // namespace Backup
}  // namespace Aws
