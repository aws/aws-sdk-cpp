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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Backup
{
namespace Model
{
  class DescribeBackupVaultResult
  {
  public:
    AWS_BACKUP_API DescribeBackupVaultResult();
    AWS_BACKUP_API DescribeBackupVaultResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUP_API DescribeBackupVaultResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Region where they are created. They consist of lowercase letters, numbers, and
     * hyphens.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


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
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline DescribeBackupVaultResult& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


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
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArn = value; }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArn.assign(value); }

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeBackupVaultResult& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeBackupVaultResult& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline DescribeBackupVaultResult& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDate = value; }

    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDate = std::move(value); }

    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeBackupVaultResult& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time that a backup vault is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationDate</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeBackupVaultResult& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline const Aws::String& GetCreatorRequestId() const{ return m_creatorRequestId; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const Aws::String& value) { m_creatorRequestId = value; }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(Aws::String&& value) { m_creatorRequestId = std::move(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline void SetCreatorRequestId(const char* value) { m_creatorRequestId.assign(value); }

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline DescribeBackupVaultResult& WithCreatorRequestId(const Aws::String& value) { SetCreatorRequestId(value); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline DescribeBackupVaultResult& WithCreatorRequestId(Aws::String&& value) { SetCreatorRequestId(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies the request and allows failed requests to be
     * retried without the risk of running the operation twice.</p>
     */
    inline DescribeBackupVaultResult& WithCreatorRequestId(const char* value) { SetCreatorRequestId(value); return *this;}


    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline long long GetNumberOfRecoveryPoints() const{ return m_numberOfRecoveryPoints; }

    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline void SetNumberOfRecoveryPoints(long long value) { m_numberOfRecoveryPoints = value; }

    /**
     * <p>The number of recovery points that are stored in a backup vault.</p>
     */
    inline DescribeBackupVaultResult& WithNumberOfRecoveryPoints(long long value) { SetNumberOfRecoveryPoints(value); return *this;}


    /**
     * <p>A Boolean that indicates whether Backup Vault Lock is currently protecting
     * the backup vault. <code>True</code> means that Vault Lock causes delete or
     * update operations on the recovery points stored in the vault to fail.</p>
     */
    inline bool GetLocked() const{ return m_locked; }

    /**
     * <p>A Boolean that indicates whether Backup Vault Lock is currently protecting
     * the backup vault. <code>True</code> means that Vault Lock causes delete or
     * update operations on the recovery points stored in the vault to fail.</p>
     */
    inline void SetLocked(bool value) { m_locked = value; }

    /**
     * <p>A Boolean that indicates whether Backup Vault Lock is currently protecting
     * the backup vault. <code>True</code> means that Vault Lock causes delete or
     * update operations on the recovery points stored in the vault to fail.</p>
     */
    inline DescribeBackupVaultResult& WithLocked(bool value) { SetLocked(value); return *this;}


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
    inline void SetMinRetentionDays(long long value) { m_minRetentionDays = value; }

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
    inline DescribeBackupVaultResult& WithMinRetentionDays(long long value) { SetMinRetentionDays(value); return *this;}


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
    inline void SetMaxRetentionDays(long long value) { m_maxRetentionDays = value; }

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
    inline DescribeBackupVaultResult& WithMaxRetentionDays(long long value) { SetMaxRetentionDays(value); return *this;}


    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLockDate() const{ return m_lockDate; }

    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLockDate(const Aws::Utils::DateTime& value) { m_lockDate = value; }

    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLockDate(Aws::Utils::DateTime&& value) { m_lockDate = std::move(value); }

    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeBackupVaultResult& WithLockDate(const Aws::Utils::DateTime& value) { SetLockDate(value); return *this;}

    /**
     * <p>The date and time when Backup Vault Lock configuration cannot be changed or
     * deleted.</p> <p>If you applied Vault Lock to your vault without specifying a
     * lock date, you can change any of your Vault Lock settings, or delete Vault Lock
     * from the vault entirely, at any time.</p> <p>This value is in Unix format,
     * Coordinated Universal Time (UTC), and accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline DescribeBackupVaultResult& WithLockDate(Aws::Utils::DateTime&& value) { SetLockDate(std::move(value)); return *this;}

  private:

    Aws::String m_backupVaultName;

    Aws::String m_backupVaultArn;

    Aws::String m_encryptionKeyArn;

    Aws::Utils::DateTime m_creationDate;

    Aws::String m_creatorRequestId;

    long long m_numberOfRecoveryPoints;

    bool m_locked;

    long long m_minRetentionDays;

    long long m_maxRetentionDays;

    Aws::Utils::DateTime m_lockDate;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
