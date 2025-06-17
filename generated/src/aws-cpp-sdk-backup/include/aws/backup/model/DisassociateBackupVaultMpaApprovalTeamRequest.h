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
  class DisassociateBackupVaultMpaApprovalTeamRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API DisassociateBackupVaultMpaApprovalTeamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateBackupVaultMpaApprovalTeam"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the backup vault from which to disassociate the MPA approval
     * team.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    DisassociateBackupVaultMpaApprovalTeamRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional comment explaining the reason for disassociating the MPA approval
     * team from the backup vault.</p>
     */
    inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
    inline bool RequesterCommentHasBeenSet() const { return m_requesterCommentHasBeenSet; }
    template<typename RequesterCommentT = Aws::String>
    void SetRequesterComment(RequesterCommentT&& value) { m_requesterCommentHasBeenSet = true; m_requesterComment = std::forward<RequesterCommentT>(value); }
    template<typename RequesterCommentT = Aws::String>
    DisassociateBackupVaultMpaApprovalTeamRequest& WithRequesterComment(RequesterCommentT&& value) { SetRequesterComment(std::forward<RequesterCommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_requesterComment;
    bool m_requesterCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
