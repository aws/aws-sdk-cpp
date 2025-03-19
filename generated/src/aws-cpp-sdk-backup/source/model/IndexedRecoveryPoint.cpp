/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/IndexedRecoveryPoint.h>
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

IndexedRecoveryPoint::IndexedRecoveryPoint(JsonView jsonValue)
{
  *this = jsonValue;
}

IndexedRecoveryPoint& IndexedRecoveryPoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecoveryPointArn"))
  {
    m_recoveryPointArn = jsonValue.GetString("RecoveryPointArn");
    m_recoveryPointArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceResourceArn"))
  {
    m_sourceResourceArn = jsonValue.GetString("SourceResourceArn");
    m_sourceResourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IamRoleArn"))
  {
    m_iamRoleArn = jsonValue.GetString("IamRoleArn");
    m_iamRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupCreationDate"))
  {
    m_backupCreationDate = jsonValue.GetDouble("BackupCreationDate");
    m_backupCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexCreationDate"))
  {
    m_indexCreationDate = jsonValue.GetDouble("IndexCreationDate");
    m_indexCreationDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatus"))
  {
    m_indexStatus = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("IndexStatus"));
    m_indexStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("IndexStatusMessage"))
  {
    m_indexStatusMessage = jsonValue.GetString("IndexStatusMessage");
    m_indexStatusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");
    m_backupVaultArnHasBeenSet = true;
  }
  return *this;
}

JsonValue IndexedRecoveryPoint::Jsonize() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_sourceResourceArnHasBeenSet)
  {
   payload.WithString("SourceResourceArn", m_sourceResourceArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_backupCreationDateHasBeenSet)
  {
   payload.WithDouble("BackupCreationDate", m_backupCreationDate.SecondsWithMSPrecision());
  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", m_resourceType);

  }

  if(m_indexCreationDateHasBeenSet)
  {
   payload.WithDouble("IndexCreationDate", m_indexCreationDate.SecondsWithMSPrecision());
  }

  if(m_indexStatusHasBeenSet)
  {
   payload.WithString("IndexStatus", IndexStatusMapper::GetNameForIndexStatus(m_indexStatus));
  }

  if(m_indexStatusMessageHasBeenSet)
  {
   payload.WithString("IndexStatusMessage", m_indexStatusMessage);

  }

  if(m_backupVaultArnHasBeenSet)
  {
   payload.WithString("BackupVaultArn", m_backupVaultArn);

  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
