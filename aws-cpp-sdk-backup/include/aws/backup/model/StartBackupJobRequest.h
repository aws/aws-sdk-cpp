/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
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
  class StartBackupJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartBackupJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartBackupJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline StartBackupJobRequest& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline StartBackupJobRequest& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline StartBackupJobRequest& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline StartBackupJobRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline StartBackupJobRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline StartBackupJobRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartBackupJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartBackupJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartBackupJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartBackupJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartBackupJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartBackupJob</code>. Retrying a successful request
     * with the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartBackupJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional, and the default is 8
     * hours. If this value is included, it must be at least 60 minutes to avoid
     * errors.</p>
     */
    inline long long GetStartWindowMinutes() const{ return m_startWindowMinutes; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional, and the default is 8
     * hours. If this value is included, it must be at least 60 minutes to avoid
     * errors.</p>
     */
    inline bool StartWindowMinutesHasBeenSet() const { return m_startWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional, and the default is 8
     * hours. If this value is included, it must be at least 60 minutes to avoid
     * errors.</p>
     */
    inline void SetStartWindowMinutes(long long value) { m_startWindowMinutesHasBeenSet = true; m_startWindowMinutes = value; }

    /**
     * <p>A value in minutes after a backup is scheduled before a job will be canceled
     * if it doesn't start successfully. This value is optional, and the default is 8
     * hours. If this value is included, it must be at least 60 minutes to avoid
     * errors.</p>
     */
    inline StartBackupJobRequest& WithStartWindowMinutes(long long value) { SetStartWindowMinutes(value); return *this;}


    /**
     * <p>A value in minutes during which a successfully started backup must complete,
     * or else Backup will cancel the job. This value is optional. This value begins
     * counting down from when the backup was scheduled. It does not add additional
     * time for <code>StartWindowMinutes</code>, or if the backup started later than
     * scheduled.</p>
     */
    inline long long GetCompleteWindowMinutes() const{ return m_completeWindowMinutes; }

    /**
     * <p>A value in minutes during which a successfully started backup must complete,
     * or else Backup will cancel the job. This value is optional. This value begins
     * counting down from when the backup was scheduled. It does not add additional
     * time for <code>StartWindowMinutes</code>, or if the backup started later than
     * scheduled.</p>
     */
    inline bool CompleteWindowMinutesHasBeenSet() const { return m_completeWindowMinutesHasBeenSet; }

    /**
     * <p>A value in minutes during which a successfully started backup must complete,
     * or else Backup will cancel the job. This value is optional. This value begins
     * counting down from when the backup was scheduled. It does not add additional
     * time for <code>StartWindowMinutes</code>, or if the backup started later than
     * scheduled.</p>
     */
    inline void SetCompleteWindowMinutes(long long value) { m_completeWindowMinutesHasBeenSet = true; m_completeWindowMinutes = value; }

    /**
     * <p>A value in minutes during which a successfully started backup must complete,
     * or else Backup will cancel the job. This value is optional. This value begins
     * counting down from when the backup was scheduled. It does not add additional
     * time for <code>StartWindowMinutes</code>, or if the backup started later than
     * scheduled.</p>
     */
    inline StartBackupJobRequest& WithCompleteWindowMinutes(long long value) { SetCompleteWindowMinutes(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline StartBackupJobRequest& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup will transition and expire backups
     * automatically according to the lifecycle that you define. </p> <p>Backups
     * transitioned to cold storage must be stored in cold storage for a minimum of 90
     * days. Therefore, the “retention” setting must be 90 days greater than the
     * “transition to cold after days” setting. The “transition to cold after days”
     * setting cannot be changed after a backup has been transitioned to cold. </p>
     * <p>Resource types that are able to be transitioned to cold storage are listed in
     * the "Lifecycle to cold storage" section of the <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html#features-by-resource">
     * Feature availability by resource</a> table. Backup ignores this expression for
     * other resource types.</p>
     */
    inline StartBackupJobRequest& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRecoveryPointTags() const{ return m_recoveryPointTags; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline bool RecoveryPointTagsHasBeenSet() const { return m_recoveryPointTagsHasBeenSet; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline void SetRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = value; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline void SetRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags = std::move(value); }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& WithRecoveryPointTags(const Aws::Map<Aws::String, Aws::String>& value) { SetRecoveryPointTags(value); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& WithRecoveryPointTags(Aws::Map<Aws::String, Aws::String>&& value) { SetRecoveryPointTags(std::move(value)); return *this;}

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(const Aws::String& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(Aws::String&& key, const Aws::String& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(const Aws::String& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(Aws::String&& key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(const char* key, Aws::String&& value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(Aws::String&& key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(std::move(key), value); return *this; }

    /**
     * <p>To help organize your resources, you can assign your own metadata to the
     * resources that you create. Each tag is a key-value pair.</p>
     */
    inline StartBackupJobRequest& AddRecoveryPointTags(const char* key, const char* value) { m_recoveryPointTagsHasBeenSet = true; m_recoveryPointTags.emplace(key, value); return *this; }


    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const{ return m_backupOptions; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline void SetBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = value; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline void SetBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::move(value); }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& WithBackupOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetBackupOptions(value); return *this;}

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& WithBackupOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetBackupOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(const Aws::String& key, const Aws::String& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(Aws::String&& key, const Aws::String& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(const Aws::String& key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(Aws::String&& key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(const char* key, Aws::String&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(Aws::String&& key, const char* value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs.</p> <p>Valid
     * values: Set to <code>"WindowsVSS":"enabled"</code> to enable the
     * <code>WindowsVSS</code> backup option and create a Windows VSS backup. Set to
     * <code>"WindowsVSS""disabled"</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p>
     */
    inline StartBackupJobRequest& AddBackupOptions(const char* key, const char* value) { m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(key, value); return *this; }

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    long long m_startWindowMinutes;
    bool m_startWindowMinutesHasBeenSet = false;

    long long m_completeWindowMinutes;
    bool m_completeWindowMinutesHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_recoveryPointTags;
    bool m_recoveryPointTagsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
