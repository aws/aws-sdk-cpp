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
    AWS_BACKUP_API CreateBackupVaultRequest();

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
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline CreateBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline CreateBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline CreateBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the backup vault.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const{ return m_backupVaultTags; }
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }
    inline void SetBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = value; }
    inline void SetBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::move(value); }
    inline CreateBackupVaultRequest& WithBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupVaultTags(value); return *this;}
    inline CreateBackupVaultRequest& WithBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupVaultTags(std::move(value)); return *this;}
    inline CreateBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(const char* key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }
    inline CreateBackupVaultRequest& AddBackupVaultTags(const char* key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateBackupVaultRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateBackupVaultRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateBackupVaultRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupVaultTags;
    bool m_backupVaultTagsHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
