/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupPlansListMember.h>
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

BackupPlansListMember::BackupPlansListMember() : 
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false)
{
}

BackupPlansListMember::BackupPlansListMember(JsonView jsonValue) : 
    m_backupPlanArnHasBeenSet(false),
    m_backupPlanIdHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_deletionDateHasBeenSet(false),
    m_versionIdHasBeenSet(false),
    m_backupPlanNameHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_lastExecutionDateHasBeenSet(false),
    m_advancedBackupSettingsHasBeenSet(false)
{
  *this = jsonValue;
}

BackupPlansListMember& BackupPlansListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupPlanArn"))
  {
    m_backupPlanArn = jsonValue.GetString("BackupPlanArn");

    m_backupPlanArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanId"))
  {
    m_backupPlanId = jsonValue.GetString("BackupPlanId");

    m_backupPlanIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeletionDate"))
  {
    m_deletionDate = jsonValue.GetDouble("DeletionDate");

    m_deletionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupPlanName"))
  {
    m_backupPlanName = jsonValue.GetString("BackupPlanName");

    m_backupPlanNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastExecutionDate"))
  {
    m_lastExecutionDate = jsonValue.GetDouble("LastExecutionDate");

    m_lastExecutionDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdvancedBackupSettings"))
  {
    Aws::Utils::Array<JsonView> advancedBackupSettingsJsonList = jsonValue.GetArray("AdvancedBackupSettings");
    for(unsigned advancedBackupSettingsIndex = 0; advancedBackupSettingsIndex < advancedBackupSettingsJsonList.GetLength(); ++advancedBackupSettingsIndex)
    {
      m_advancedBackupSettings.push_back(advancedBackupSettingsJsonList[advancedBackupSettingsIndex].AsObject());
    }
    m_advancedBackupSettingsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupPlansListMember::Jsonize() const
{
  JsonValue payload;

  if(m_backupPlanArnHasBeenSet)
  {
   payload.WithString("BackupPlanArn", m_backupPlanArn);

  }

  if(m_backupPlanIdHasBeenSet)
  {
   payload.WithString("BackupPlanId", m_backupPlanId);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_deletionDateHasBeenSet)
  {
   payload.WithDouble("DeletionDate", m_deletionDate.SecondsWithMSPrecision());
  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  if(m_backupPlanNameHasBeenSet)
  {
   payload.WithString("BackupPlanName", m_backupPlanName);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_lastExecutionDateHasBeenSet)
  {
   payload.WithDouble("LastExecutionDate", m_lastExecutionDate.SecondsWithMSPrecision());
  }

  if(m_advancedBackupSettingsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> advancedBackupSettingsJsonList(m_advancedBackupSettings.size());
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
