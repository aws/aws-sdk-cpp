/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class DeleteBackupVaultLockConfigurationRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DeleteBackupVaultLockConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBackupVaultLockConfiguration"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline DeleteBackupVaultLockConfigurationRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline DeleteBackupVaultLockConfigurationRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of the backup vault from which to delete Backup Vault Lock.</p>
     */
    inline DeleteBackupVaultLockConfigurationRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
