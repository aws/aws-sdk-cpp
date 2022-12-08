/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/backup/BackupRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/Lifecycle.h>
#include <utility>

namespace Aws
{
namespace Backup
{
namespace Model
{

  /**
   */
  class StartCopyJobRequest : public BackupRequest
  {
  public:
    AWS_BACKUP_API StartCopyJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCopyJob"; }

    AWS_BACKUP_API Aws::String SerializePayload() const override;


    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline StartCopyJobRequest& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline StartCopyJobRequest& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point to use for the copy job; for
     * example,
     * arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45.
     * </p>
     */
    inline StartCopyJobRequest& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline const Aws::String& GetSourceBackupVaultName() const{ return m_sourceBackupVaultName; }

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline bool SourceBackupVaultNameHasBeenSet() const { return m_sourceBackupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetSourceBackupVaultName(const Aws::String& value) { m_sourceBackupVaultNameHasBeenSet = true; m_sourceBackupVaultName = value; }

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetSourceBackupVaultName(Aws::String&& value) { m_sourceBackupVaultNameHasBeenSet = true; m_sourceBackupVaultName = std::move(value); }

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline void SetSourceBackupVaultName(const char* value) { m_sourceBackupVaultNameHasBeenSet = true; m_sourceBackupVaultName.assign(value); }

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline StartCopyJobRequest& WithSourceBackupVaultName(const Aws::String& value) { SetSourceBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline StartCopyJobRequest& WithSourceBackupVaultName(Aws::String&& value) { SetSourceBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical source container where backups are stored. Backup
     * vaults are identified by names that are unique to the account used to create
     * them and the Amazon Web Services Region where they are created. They consist of
     * lowercase letters, numbers, and hyphens.</p>
     */
    inline StartCopyJobRequest& WithSourceBackupVaultName(const char* value) { SetSourceBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetDestinationBackupVaultArn() const{ return m_destinationBackupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline bool DestinationBackupVaultArnHasBeenSet() const { return m_destinationBackupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(const Aws::String& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(Aws::String&& value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetDestinationBackupVaultArn(const char* value) { m_destinationBackupVaultArnHasBeenSet = true; m_destinationBackupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline StartCopyJobRequest& WithDestinationBackupVaultArn(const Aws::String& value) { SetDestinationBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline StartCopyJobRequest& WithDestinationBackupVaultArn(Aws::String&& value) { SetDestinationBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a destination backup
     * vault to copy to; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline StartCopyJobRequest& WithDestinationBackupVaultArn(const char* value) { SetDestinationBackupVaultArn(value); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartCopyJobRequest& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartCopyJobRequest& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to copy the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline StartCopyJobRequest& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline const Aws::String& GetIdempotencyToken() const{ return m_idempotencyToken; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline bool IdempotencyTokenHasBeenSet() const { return m_idempotencyTokenHasBeenSet; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const Aws::String& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = value; }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(Aws::String&& value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken = std::move(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline void SetIdempotencyToken(const char* value) { m_idempotencyTokenHasBeenSet = true; m_idempotencyToken.assign(value); }

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartCopyJobRequest& WithIdempotencyToken(const Aws::String& value) { SetIdempotencyToken(value); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartCopyJobRequest& WithIdempotencyToken(Aws::String&& value) { SetIdempotencyToken(std::move(value)); return *this;}

    /**
     * <p>A customer-chosen string that you can use to distinguish between otherwise
     * identical calls to <code>StartCopyJob</code>. Retrying a successful request with
     * the same idempotency token results in a success message with no action
     * taken.</p>
     */
    inline StartCopyJobRequest& WithIdempotencyToken(const char* value) { SetIdempotencyToken(value); return *this;}


    
    inline const Lifecycle& GetLifecycle() const{ return m_lifecycle; }

    
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    
    inline void SetLifecycle(const Lifecycle& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    
    inline void SetLifecycle(Lifecycle&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    
    inline StartCopyJobRequest& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    
    inline StartCopyJobRequest& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_sourceBackupVaultName;
    bool m_sourceBackupVaultNameHasBeenSet = false;

    Aws::String m_destinationBackupVaultArn;
    bool m_destinationBackupVaultArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    Aws::String m_idempotencyToken;
    bool m_idempotencyTokenHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
