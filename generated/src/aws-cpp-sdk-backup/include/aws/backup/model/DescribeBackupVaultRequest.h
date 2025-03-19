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
    AWS_BACKUP_API DescribeBackupVaultRequest() = default;

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
     * Amazon Web Services Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    DescribeBackupVaultRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The account ID of the specified backup vault.</p>
     */
    inline const Aws::String& GetBackupVaultAccountId() const { return m_backupVaultAccountId; }
    inline bool BackupVaultAccountIdHasBeenSet() const { return m_backupVaultAccountIdHasBeenSet; }
    template<typename BackupVaultAccountIdT = Aws::String>
    void SetBackupVaultAccountId(BackupVaultAccountIdT&& value) { m_backupVaultAccountIdHasBeenSet = true; m_backupVaultAccountId = std::forward<BackupVaultAccountIdT>(value); }
    template<typename BackupVaultAccountIdT = Aws::String>
    DescribeBackupVaultRequest& WithBackupVaultAccountId(BackupVaultAccountIdT&& value) { SetBackupVaultAccountId(std::forward<BackupVaultAccountIdT>(value)); return *this;}
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
