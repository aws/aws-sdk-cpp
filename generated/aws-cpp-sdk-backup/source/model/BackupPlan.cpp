﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupPlan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Backup
{
namespace Model
{

BackupPlan::BackupPlan() : 
    m_backupPlanNameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false)
{
}

BackupPlan::BackupPlan(JsonView jsonValue) : 
    m_backupPlanNameHasBeenSet(false),
    m_rulesHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupPlan& BackupPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanName"))
  {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");

    m_backupPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Rules"))
  {
    Array<JsonView> rulesJsonList = jsonValue.GetArray("Rules");
    for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
    {
      m_rules.push_back(rulesJsonList[rulesIndex].AsObject());
    }
    m_rulesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedBackupSettings"))
  {
    Array<JsonView> advancedBackupSettingsJsonList = jsonValue.GetArray("AdvancedBackupSettings");
    for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
    {
      m_advancedBackupSettings.push_back(advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject());
    }
    m_advancedBackupSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupPlan::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanNameHasBeenSet)
  {
   payload.WithString("BackupPlanName", m_backupPlanName);

  }

  if(m_rulesHasBeenSet)
  {
   Array<JsonValue> rulesJsonList(m_rules.size());
   for(unsigned rulesIndex = 0; rulesIndex < rulesJsonList.GetLength(); ++rulesIndex)
   {
     rulesJsonList[rulesIndex].AsObject(m_rules[rulesIndex].Jsonize());
   }
   payload.WithArray("Rules", std::move(rulesJsonList));

  }

  if(m_advancedBackupSettingsHasBeenSet)
  {
   Array<JsonValue> advancedBackupSettingsJsonList(m_advancedBackupSettings.size());
   for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
   {
     advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject(m_advancedBackupSettings[advancedBackupSettingsIndex].Jsonize());
   }
   payload.WithArray("AdvancedBackupSettings", std::move(advancedBackupSettingsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
