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
  class AssociateBackupVaultMpaApprovalTeamRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API AssociateBackupVaultMpaApprovalTeamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateBackupVaultMpaApprovalTeam"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the backup vault to associate with the MPA approval team.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    AssociateBackupVaultMpaApprovalTeamRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MPA approval team to associate with the
     * backup vault.</p>
     */
    inline const Aws::String& GetMpaApprovalTeamArn() const { return m_mpaApprovalTeamArn; }
    inline bool MpaApprovalTeamArnHasBeenSet() const { return m_mpaApprovalTeamArnHasBeenSet; }
    template<typename MpaApprovalTeamArnT = Aws::String>
    void SetMpaApprovalTeamArn(MpaApprovalTeamArnT&& value) { m_mpaApprovalTeamArnHasBeenSet = true; m_mpaApprovalTeamArn = std::forward<MpaApprovalTeamArnT>(value); }
    template<typename MpaApprovalTeamArnT = Aws::String>
    AssociateBackupVaultMpaApprovalTeamRequest& WithMpaApprovalTeamArn(MpaApprovalTeamArnT&& value) { SetMpaApprovalTeamArn(std::forward<MpaApprovalTeamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment provided by the requester explaining the association request.</p>
     */
    inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
    inline bool RequesterCommentHasBeenSet() const { return m_requesterCommentHasBeenSet; }
    template<typename RequesterCommentT = Aws::String>
    void SetRequesterComment(RequesterCommentT&& value) { m_requesterCommentHasBeenSet = true; m_requesterComment = std::forward<RequesterCommentT>(value); }
    template<typename RequesterCommentT = Aws::String>
    AssociateBackupVaultMpaApprovalTeamRequest& WithRequesterComment(RequesterCommentT&& value) { SetRequesterComment(std::forward<RequesterCommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_mpaApprovalTeamArn;
    bool m_mpaApprovalTeamArnHasBeenSet = false;

    Aws::String m_requesterComment;
    bool m_requesterCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
