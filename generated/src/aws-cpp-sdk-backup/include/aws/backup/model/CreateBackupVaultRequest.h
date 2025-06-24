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
  class CreateBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateBackupVaultRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of letters,
     * numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const { return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    template<typename BackupVaultNameT = Aws::String>
    void SetBackupVaultName(BackupVaultNameT&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::forward<BackupVaultNameT>(value); }
    template<typename BackupVaultNameT = Aws::String>
    CreateBackupVaultRequest& WithBackupVaultName(BackupVaultNameT&& value) { SetBackupVaultName(std::forward<BackupVaultNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the backup vault.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const { return m_backupVaultTags; }
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }
    template<typename BackupVaultTagsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupVaultTags(BackupVaultTagsT&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::forward<BackupVaultTagsT>(value); }
    template<typename BackupVaultTagsT = Aws::Map<Aws::String, Aws::String>>
    CreateBackupVaultRequest& WithBackupVaultTags(BackupVaultTagsT&& value) { SetBackupVaultTags(std::forward<BackupVaultTagsT>(value)); return *this;}
    template<typename BackupVaultTagsKeyT = Aws::String, typename BackupVaultTagsValueT = Aws::String>
    CreateBackupVaultRequest& AddBackupVaultTags(BackupVaultTagsKeyT&& key, BackupVaultTagsValueT&& value) {
      m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::forward<BackupVaultTagsKeyT>(key), std::forward<BackupVaultTagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    template<typename EncryptionKeyArnT = Aws::String>
    void SetEncryptionKeyArn(EncryptionKeyArnT&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value); }
    template<typename EncryptionKeyArnT = Aws::String>
    CreateBackupVaultRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) { SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const { return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    template<typename CreatorRequestIdT = Aws::String>
    void SetCreatorRequestId(CreatorRequestIdT&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::forward<CreatorRequestIdT>(value); }
    template<typename CreatorRequestIdT = Aws::String>
    CreateBackupVaultRequest& WithCreatorRequestId(CreatorRequestIdT&& value) { SetCreatorRequestId(std::forward<CreatorRequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupVaultTags;
    bool m_backupVaultTagsHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_creatorRequestId{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_creatorRequestIdHasBeenSet = true;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
