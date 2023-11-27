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


    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>This is the name of the vault that is being created.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupVaultTags() const{ return m_backupVaultTags; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline bool BackupVaultTagsHasBeenSet() const { return m_backupVaultTagsHasBeenSet; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline void SetBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = value; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline void SetBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags = std::move(value); }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultTags(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupVaultTags(value); return *this;}

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithBackupVaultTags(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupVaultTags(std::move(value)); return *this;}

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const Aws::String& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const Aws::String& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const char* key, Aws::String&& value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(Aws::String&& key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>These are the tags that will be included in the newly-created vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& AddBackupVaultTags(const char* key, const char* value) { m_backupVaultTagsHasBeenSet = true; m_backupVaultTags.emplace(key, value); return *this; }


    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>This is the ID of the creation request.</p> <p>This parameter is optional. If
     * used, this parameter must contain 1 to 50 alphanumeric or '-_.' characters.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>This setting specifies the minimum retention period that the vault retains
     * its recovery points. If this parameter is not specified, no minimum retention
     * period is enforced.</p> <p>If specified, any backup or copy job to the vault
     * must have a lifecycle policy with a retention period equal to or longer than the
     * minimum retention period. If a job retention period is shorter than that minimum
     * retention period, then the vault fails the backup or copy job, and you should
     * either modify your lifecycle settings or use a different vault.</p>
     */
    inline long long GetMinRetentionDays() const{ return m_minRetentionDays; }

    /**
     * <p>This setting specifies the minimum retention period that the vault retains
     * its recovery points. If this parameter is not specified, no minimum retention
     * period is enforced.</p> <p>If specified, any backup or copy job to the vault
     * must have a lifecycle policy with a retention period equal to or longer than the
     * minimum retention period. If a job retention period is shorter than that minimum
     * retention period, then the vault fails the backup or copy job, and you should
     * either modify your lifecycle settings or use a different vault.</p>
     */
    inline bool MinRetentionDaysHasBeenSet() const { return m_minRetentionDaysHasBeenSet; }

    /**
     * <p>This setting specifies the minimum retention period that the vault retains
     * its recovery points. If this parameter is not specified, no minimum retention
     * period is enforced.</p> <p>If specified, any backup or copy job to the vault
     * must have a lifecycle policy with a retention period equal to or longer than the
     * minimum retention period. If a job retention period is shorter than that minimum
     * retention period, then the vault fails the backup or copy job, and you should
     * either modify your lifecycle settings or use a different vault.</p>
     */
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }

    /**
     * <p>This setting specifies the minimum retention period that the vault retains
     * its recovery points. If this parameter is not specified, no minimum retention
     * period is enforced.</p> <p>If specified, any backup or copy job to the vault
     * must have a lifecycle policy with a retention period equal to or longer than the
     * minimum retention period. If a job retention period is shorter than that minimum
     * retention period, then the vault fails the backup or copy job, and you should
     * either modify your lifecycle settings or use a different vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}


    /**
     * <p>This is the setting that specifies the maximum retention period that the
     * vault retains its recovery points. If this parameter is not specified, Backup
     * does not enforce a maximum retention period on the recovery points in the vault
     * (allowing indefinite storage).</p> <p>If specified, any backup or copy job to
     * the vault must have a lifecycle policy with a retention period equal to or
     * shorter than the maximum retention period. If the job retention period is longer
     * than that maximum retention period, then the vault fails the backup or copy job,
     * and you should either modify your lifecycle settings or use a different
     * vault.</p>
     */
    inline long long GetMaxRetentionDays() const{ return m_maxRetentionDays; }

    /**
     * <p>This is the setting that specifies the maximum retention period that the
     * vault retains its recovery points. If this parameter is not specified, Backup
     * does not enforce a maximum retention period on the recovery points in the vault
     * (allowing indefinite storage).</p> <p>If specified, any backup or copy job to
     * the vault must have a lifecycle policy with a retention period equal to or
     * shorter than the maximum retention period. If the job retention period is longer
     * than that maximum retention period, then the vault fails the backup or copy job,
     * and you should either modify your lifecycle settings or use a different
     * vault.</p>
     */
    inline bool MaxRetentionDaysHasBeenSet() const { return m_maxRetentionDaysHasBeenSet; }

    /**
     * <p>This is the setting that specifies the maximum retention period that the
     * vault retains its recovery points. If this parameter is not specified, Backup
     * does not enforce a maximum retention period on the recovery points in the vault
     * (allowing indefinite storage).</p> <p>If specified, any backup or copy job to
     * the vault must have a lifecycle policy with a retention period equal to or
     * shorter than the maximum retention period. If the job retention period is longer
     * than that maximum retention period, then the vault fails the backup or copy job,
     * and you should either modify your lifecycle settings or use a different
     * vault.</p>
     */
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }

    /**
     * <p>This is the setting that specifies the maximum retention period that the
     * vault retains its recovery points. If this parameter is not specified, Backup
     * does not enforce a maximum retention period on the recovery points in the vault
     * (allowing indefinite storage).</p> <p>If specified, any backup or copy job to
     * the vault must have a lifecycle policy with a retention period equal to or
     * shorter than the maximum retention period. If the job retention period is longer
     * than that maximum retention period, then the vault fails the backup or copy job,
     * and you should either modify your lifecycle settings or use a different
     * vault.</p>
     */
    inline CreateLogicallyAirGappedBackupVaultRequest& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}

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
