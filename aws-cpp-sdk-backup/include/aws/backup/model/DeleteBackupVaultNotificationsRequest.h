﻿/**
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
  class AWS_BACKUP_API DeleteBackupVaultNotificationsRequest : public BackupRequest
  {
  public:
    DeleteBackupVaultNotificationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBackupVaultNotifications"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DeleteBackupVaultNotificationsRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DeleteBackupVaultNotificationsRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DeleteBackupVaultNotificationsRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
