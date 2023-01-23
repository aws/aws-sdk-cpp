/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains metadata about a backup vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/BackupVaultListMember">AWS
   * API Reference</a></p>
   */
  class BackupVaultListMember
  {
  public:
    AWS_BACKUP_API BackupVaultListMember();
    AWS_BACKUP_API BackupVaultListMember(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API BackupVaultListMember& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline BackupVaultListMember& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline BackupVaultListMember& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline BackupVaultListMember& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupVaultListMember& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupVaultListMember& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline BackupVaultListMember& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupVaultListMember& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a resource backup is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupVaultListMember& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline BackupVaultListMember& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline BackupVaultListMember& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>A server-side encryption key you can specify to encrypt your backups from
     * services that support full Backup management; for example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.
     * If you specify a key, you must specify its ARN, not its alias. If you do not
     * specify a key, Backup creates a KMS key for you by default.</p> <p>To learn
     * which Backup services support full Backup management and how Backup handles
     * encryption for backups from services that do not yet support full Backup, see <a
     * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/encryption.html">
     * Encryption for backups in Backup</a> </p>
     */
    inline BackupVaultListMember& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline bool CreatorRequestIdHasBeenSet() const { return m_creatorRequestIdHasBeenSet; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestIdHasBeenSet = true; m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline BackupVaultListMember& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline BackupVaultListMember& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice. This parameter is
     * optional.</p> <p>If used, this parameter must contain 1 to 50 alphanumeric or
     * '-_.' characters.</p>
     */
    inline BackupVaultListMember& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline long long GetNumberOfRecoveryPoints() const{ return m_numberOfRecoveryPoints; }

    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline bool NumberOfRecoveryPointsHasBeenSet() const { return m_numberOfRecoveryPointsHasBeenSet; }

    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline void SetNumberOfRecoveryPoints(long long value) { m_numberOfRecoveryPointsHasBeenSet = true; m_numberOfRecoveryPoints = value; }

    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline BackupVaultListMember& WithNumberOfRecoveryPoints(long long value) { SetNumberOfRecoveryPoints(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether Backup Vault Lock applies to the
     * selected backup vault. If <code>true</code>, Vault Lock prevents delete and
     * update operations on the recovery points in the selected vault.</p>
     */
    inline bool GetLocked() const{ return m_locked; }

    /**
     * <p>A Boolean value that indicates whether Backup Vault Lock applies to the
     * selected backup vault. If <code>true</code>, Vault Lock prevents delete and
     * update operations on the recovery points in the selected vault.</p>
     */
    inline bool LockedHasBeenSet() const { return m_lockedHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether Backup Vault Lock applies to the
     * selected backup vault. If <code>true</code>, Vault Lock prevents delete and
     * update operations on the recovery points in the selected vault.</p>
     */
    inline void SetLocked(bool value) { m_lockedHasBeenSet = true; m_locked = value; }

    /**
     * <p>A Boolean value that indicates whether Backup Vault Lock applies to the
     * selected backup vault. If <code>true</code>, Vault Lock prevents delete and
     * update operations on the recovery points in the selected vault.</p>
     */
    inline BackupVaultListMember& WithLocked(bool value) { SetLocked(value); return *this;}


    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline long long GetMinRetentionDays() const{ return m_minRetentionDays; }

    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline bool MinRetentionDaysHasBeenSet() const { return m_minRetentionDaysHasBeenSet; }

    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline void SetMinRetentionDays(long long value) { m_minRetentionDaysHasBeenSet = true; m_minRetentionDays = value; }

    /**
     * <p>The Backup Vault Lock setting that specifies the minimum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a minimum retention period.</p> <p>If specified, any
     * backup or copy job to the vault must have a lifecycle policy with a retention
     * period equal to or longer than the minimum retention period. If the job's
     * retention period is shorter than that minimum retention period, then the vault
     * fails the backup or copy job, and you should either modify your lifecycle
     * settings or use a different vault. Recovery points already stored in the vault
     * prior to Vault Lock are not affected.</p>
     */
    inline BackupVaultListMember& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}


    /**
     * <p>The Backup Vault Lock setting that specifies the maximum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a maximum retention period on the recovery points in
     * the vault (allowing indefinite storage).</p> <p>If specified, any backup or copy
     * job to the vault must have a lifecycle policy with a retention period equal to
     * or shorter than the maximum retention period. If the job's retention period is
     * longer than that maximum retention period, then the vault fails the backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. Recovery points already stored in the vault prior to Vault Lock
     * are not affected.</p>
     */
    inline long long GetMaxRetentionDays() const{ return m_maxRetentionDays; }

    /**
     * <p>The Backup Vault Lock setting that specifies the maximum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a maximum retention period on the recovery points in
     * the vault (allowing indefinite storage).</p> <p>If specified, any backup or copy
     * job to the vault must have a lifecycle policy with a retention period equal to
     * or shorter than the maximum retention period. If the job's retention period is
     * longer than that maximum retention period, then the vault fails the backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. Recovery points already stored in the vault prior to Vault Lock
     * are not affected.</p>
     */
    inline bool MaxRetentionDaysHasBeenSet() const { return m_maxRetentionDaysHasBeenSet; }

    /**
     * <p>The Backup Vault Lock setting that specifies the maximum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a maximum retention period on the recovery points in
     * the vault (allowing indefinite storage).</p> <p>If specified, any backup or copy
     * job to the vault must have a lifecycle policy with a retention period equal to
     * or shorter than the maximum retention period. If the job's retention period is
     * longer than that maximum retention period, then the vault fails the backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. Recovery points already stored in the vault prior to Vault Lock
     * are not affected.</p>
     */
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDaysHasBeenSet = true; m_maxRetentionDays = value; }

    /**
     * <p>The Backup Vault Lock setting that specifies the maximum retention period
     * that the vault retains its recovery points. If this parameter is not specified,
     * Vault Lock does not enforce a maximum retention period on the recovery points in
     * the vault (allowing indefinite storage).</p> <p>If specified, any backup or copy
     * job to the vault must have a lifecycle policy with a retention period equal to
     * or shorter than the maximum retention period. If the job's retention period is
     * longer than that maximum retention period, then the vault fails the backup or
     * copy job, and you should either modify your lifecycle settings or use a
     * different vault. Recovery points already stored in the vault prior to Vault Lock
     * are not affected.</p>
     */
    inline BackupVaultListMember& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}


    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLockDate() const{ return m_lockDate; }

    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool LockDateHasBeenSet() const { return m_lockDateHasBeenSet; }

    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLockDate(const Aws::Utils::DateTime& value) { m_lockDateHasBeenSet = true; m_lockDate = value; }

    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLockDate(Aws::Utils::DateTime&& value) { m_lockDateHasBeenSet = true; m_lockDate = std::move(value); }

    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupVaultListMember& WithLockDate(const Aws::Utils::DateTime& value) { SetLockDate(value); return *this;}

    /**
     * <p>The date and time when Backup Vault Lock configuration becomes immutable,
     * meaning it cannot be changed or deleted.</p> <p>If you applied Vault Lock to
     * your vault without specifying a lock date, you can change your Vault Lock
     * settings, or delete Vault Lock from the vault entirely, at any time.</p> <p>This
     * value is in Unix format, Coordinated Universal Time (UTC), and accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline BackupVaultListMember& WithLockDate(Aws::Utils::DateTime&& value) { SetLockDate(std::move(value)); return *this;}

  private:

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_creatorRequestId;
    bool m_creatorRequestIdHasBeenSet = false;

    long long m_numberOfRecoveryPoints;
    bool m_numberOfRecoveryPointsHasBeenSet = false;

    bool m_locked;
    bool m_lockedHasBeenSet = false;

    long long m_minRetentionDays;
    bool m_minRetentionDaysHasBeenSet = false;

    long long m_maxRetentionDays;
    bool m_maxRetentionDaysHasBeenSet = false;

    Aws::Utils::DateTime m_lockDate;
    bool m_lockDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
