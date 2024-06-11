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
namespace Http
{
    class URI;
} //namespace Http
namespace Backup
{
namespace Model
{

  /**
   */
  class DescribeBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DescribeBackupVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline DescribeBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline DescribeBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline DescribeBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the account ID of the specified backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultAccountId() const{ return m_backupVaultAccountId; }
    inline bool BackupVaultAccountIdHasBeenSet() const { return m_backupVaultAccountIdHasBeenSet; }
    inline void SetBackupVaultAccountId(const Aws::String& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = value; }
    inline void SetBackupVaultAccountId(Aws::String&& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = std::move(value); }
    inline void SetBackupVaultAccountId(const char* value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId.assign(value); }
    inline DescribeBackupVaultRequest& WithBackupVaultAccountId(const Aws::String& value) { SetBackupVaultAccountId(value); return *this;}
    inline DescribeBackupVaultRequest& WithBackupVaultAccountId(Aws::String&& value) { SetBackupVaultAccountId(std::move(value)); return *this;}
    inline DescribeBackupVaultRequest& WithBackupVaultAccountId(const char* value) { SetBackupVaultAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultAccountId;
    bool m_backupVaultAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
