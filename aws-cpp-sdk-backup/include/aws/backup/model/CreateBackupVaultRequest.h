/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_BACKUP_API CreateBackupVaultRequest : public BackupRequest
  {
  public:
    CreateBackupVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackupVault"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline CreateBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline CreateBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * AWS Region where they are created. They consist of lowercase letters, numbers,
     * and hyphens.</p>
     */
    inline CreateBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const{ return m_backupVaultTags; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline void SetBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = value; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline void SetBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::move(value); }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& WithBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupVaultTags(value); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& WithBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupVaultTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(const char* key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can assign to help organize the resources that you create.
     * Each tag is a key-value pair.</p>
     */
    inline CreateBackupVaultRequest& AddBackupVaultTags(const char* key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }


    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline CreateBackupVaultRequest& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline CreateBackupVaultRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline CreateBackupVaultRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of executing the operation twice.</p>
     */
    inline CreateBackupVaultRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_backupVaultTags;
    bool m_backupVaultTagsHasBeenSet;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
