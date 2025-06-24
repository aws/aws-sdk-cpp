/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class CreateRestoreAccessBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateRestoreAccessBackupVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRestoreAccessBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the source backup vault containing the recovery points to which
     * temporary access is requested.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const { return m_sourceBackupVaultArn; }
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }
    template<typename SourceBackupVaultArnT = Aws::String>
    void SetSourceBackupVaultArn(SourceBackupVaultArnT&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::forward<SourceBackupVaultArnT>(value); }
    template<typename SourceBackupVaultArnT = Aws::String>
    CreateRestoreAccessBackupVaultRequest& WithSourceBackupVaultArn(SourceBackupVaultArnT&& value) { SetSourceBackupVaultArn(std::forward<SourceBackupVaultArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the backup vault to associate with an MPA approval team.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    CreateRestoreAccessBackupVaultRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional tags to assign to the restore access backup vault.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const { return m_backupVaultTags; }
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }
    template<typename BackupVaultTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupVaultTags(BackupVaultTagsT&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::forward<BackupVaultTagsT>(value); }
    template<typename BackupVaultTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRestoreAccessBackupVaultRequest& WithBackupVaultTags(BackupVaultTagsT&& value) { SetBackupVaultTags(std::forward<BackupVaultTagsT>(value)); return *this;}
    template<typename BackupVaultTagsKeyT = Aws::String, typename BackupVaultTagsValueT = Aws::String>
    CreateRestoreAccessBackupVaultRequest& AddBackupVaultTags(BackupVaultTagsKeyT&& key, BackupVaultTagsValueT&& value) {
      m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::forward<BackupVaultTagsKeyT>(key), std::forward<BackupVaultTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateRestoreAccessBackupVaultRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment explaining the reason for requesting restore access to the backup
     * vault.</p>
     */
    inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
    inline bool RequesterCommentHasBeenSet() const { return m_requesterCommentHasBeenSet; }
    template<typename RequesterCommentT = Aws::String>
    void SetRequesterComment(RequesterCommentT&& value) { m_requesterCommentHasBeenSet = true; m_requesterComment = std::forward<RequesterCommentT>(value); }
    template<typename RequesterCommentT = Aws::String>
    CreateRestoreAccessBackupVaultRequest& WithRequesterComment(RequesterCommentT&& value) { SetRequesterComment(std::forward<RequesterCommentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupVaultTags;
    bool m_backupVaultTagsHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;

    Aws::String m_requesterComment;
    bool m_requesterCommentHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
