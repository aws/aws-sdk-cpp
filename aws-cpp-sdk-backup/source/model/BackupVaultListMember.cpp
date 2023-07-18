/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/BackupVaultListMember.h>
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

BackupVaultListMember::BackupVaultListMember() : 
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_numberOfRecoveryPoints(0),
    m_numberOfRecoveryPointsHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_minRetentionDays(0),
    m_minRetentionDaysHasBeenSet(false),
    m_maxRetentionDays(0),
    m_maxRetentionDaysHasBeenSet(false),
    m_lockDateHasBeenSet(false)
{
}

BackupVaultListMember::BackupVaultListMember(JsonView jsonValue) : 
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultArnHasBeenSet(false),
    m_creationDateHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_numberOfRecoveryPoints(0),
    m_numberOfRecoveryPointsHasBeenSet(false),
    m_locked(false),
    m_lockedHasBeenSet(false),
    m_minRetentionDays(0),
    m_minRetentionDaysHasBeenSet(false),
    m_maxRetentionDays(0),
    m_maxRetentionDaysHasBeenSet(false),
    m_lockDateHasBeenSet(false)
{
  *this = jsonValue;
}

BackupVaultListMember& BackupVaultListMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupVaultName"))
  {
    m_backupVaultName = jsonValue.GetString("BackupVaultName");

    m_backupVaultNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupVaultArn"))
  {
    m_backupVaultArn = jsonValue.GetString("BackupVaultArn");

    m_backupVaultArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EncryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("EncryptionKeyArn");

    m_encryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatorRequestId"))
  {
    m_creatorRequestId = jsonValue.GetString("CreatorRequestId");

    m_creatorRequestIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfRecoveryPoints"))
  {
    m_numberOfRecoveryPoints = jsonValue.GetInt64("NumberOfRecoveryPoints");

    m_numberOfRecoveryPointsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Locked"))
  {
    m_locked = jsonValue.GetBool("Locked");

    m_lockedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinRetentionDays"))
  {
    m_minRetentionDays = jsonValue.GetInt64("MinRetentionDays");

    m_minRetentionDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxRetentionDays"))
  {
    m_maxRetentionDays = jsonValue.GetInt64("MaxRetentionDays");

    m_maxRetentionDaysHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LockDate"))
  {
    m_lockDate = jsonValue.GetDouble("LockDate");

    m_lockDateHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupVaultListMember::Jsonize() const
{
  JsonValue payload;

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

  if(m_backupVaultArnHasBeenSet)
  {
   payload.WithString("BackupVaultArn", m_backupVaultArn);

  }

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_numberOfRecoveryPointsHasBeenSet)
  {
   payload.WithInt64("NumberOfRecoveryPoints", m_numberOfRecoveryPoints);

  }

  if(m_lockedHasBeenSet)
  {
   payload.WithBool("Locked", m_locked);

  }

  if(m_minRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MinRetentionDays", m_minRetentionDays);

  }

  if(m_maxRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MaxRetentionDays", m_maxRetentionDays);

  }

  if(m_lockDateHasBeenSet)
  {
   payload.WithDouble("LockDate", m_lockDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Backup
} // namespace Aws
