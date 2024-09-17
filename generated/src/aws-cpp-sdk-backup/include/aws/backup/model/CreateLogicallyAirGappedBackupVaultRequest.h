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
  class CreateLogicallyAirGappedBackupVaultRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API CreateLogicallyAirGappedBackupVaultRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLogicallyAirGappedBackupVault"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of a logical container where backups are stored. Logically
     * air-gapped backup vaults are identified by names that are unique to the account
     * used to create them and the Region where they are created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the vault.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const{ return m_backupVaultTags; }
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }
    inline void SetBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = value; }
    inline void SetBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::move(value); }
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupVaultTags(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupVaultTags(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const char* key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const char* key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the creation request.</p> <p>This parameter is optional. If used,
     * this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This setting specifies the minimum retention period that the vault retains
     * its recovery points.</p> <p>The minimum value accepted is 7 days.</p>
     */
    inline long long GetMinRetentionDays() const{ return m_minRetentionDays; }
    inline bool MinRetentionDaysHasBeenSet() const { return m_minRetentionDaysHasBeenSet; }
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }
    inline CreateLogicallyAirGappedBackupVaultRequest& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum retention period that the vault retains its recovery points.</p>
     */
    inline long long GetMaxRetentionDays() const{ return m_maxRetentionDays; }
    inline bool MaxRetentionDaysHasBeenSet() const { return m_maxRetentionDaysHasBeenSet; }
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }
    inline CreateLogicallyAirGappedBackupVaultRequest& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}
    ///@}
  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupVaultTags;
    bool m_backupVaultTagsHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    long long m_minRetentionDays;
    bool m_minRetentionDaysHasBeenSet = false;

    long long m_maxRetentionDays;
    bool m_maxRetentionDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
