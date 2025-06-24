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
  class RevokeRestoreAccessBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API RevokeRestoreAccessBackupVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RevokeRestoreAccessBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;

    AWS_BACKUP_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the source backup vault associated with the restore access backup
     * vault to be revoked.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    RevokeRestoreAccessBackupVaultRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the restore access backup vault to revoke.</p>
     */
    inline const Aws::String& GetRestoreAccessBackupVaultArn() const { return m_restoreAccessBackupVaultArn; }
    inline bool RestoreAccessBackupVaultArnHasBeenSet() const { return m_restoreAccessBackupVaultArnHasBeenSet; }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    void SetRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { m_restoreAccessBackupVaultArnHasBeenSet = true; m_restoreAccessBackupVaultArn = std::forward<RestoreAccessBackupVaultArnT>(value); }
    template<typename RestoreAccessBackupVaultArnT = Aws::String>
    RevokeRestoreAccessBackupVaultRequest& WithRestoreAccessBackupVaultArn(RestoreAccessBackupVaultArnT&& value) { SetRestoreAccessBackupVaultArn(std::forward<RestoreAccessBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment explaining the reason for revoking access to the restore access
     * backup vault.</p>
     */
    inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
    inline bool RequesterCommentHasBeenSet() const { return m_requesterCommentHasBeenSet; }
    template<typename RequesterCommentT = Aws::String>
    void SetRequesterComment(RequesterCommentT&& value) { m_requesterCommentHasBeenSet = true; m_requesterComment = std::forward<RequesterCommentT>(value); }
    template<typename RequesterCommentT = Aws::String>
    RevokeRestoreAccessBackupVaultRequest& WithRequesterComment(RequesterCommentT&& value) { SetRequesterComment(std::forward<RequesterCommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_restoreAccessBackupVaultArn;
    bool m_restoreAccessBackupVaultArnHasBeenSet = false;

    Aws::String m_requesterComment;
    bool m_requesterCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
