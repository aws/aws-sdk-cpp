/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointCalculatedLifecycleDetails.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointCreatedByDetails.h>
#include <aws/securityhub/model/AwsBackupRecoveryPointLifecycleDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Contains detailed information about the recovery points stored in an Backup
   * backup vault. A backup, or recovery point, represents the content of a resource
   * at a specified time. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupRecoveryPointDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupRecoveryPointDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails();
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupRecoveryPointDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size, in bytes, of a backup. </p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of a backup. </p>
     */
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of a backup. </p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of a backup. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a backup vault. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline const Aws::String& GetBackupVaultName() const{ return m_backupVaultName; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline bool BackupVaultNameHasBeenSet() const { return m_backupVaultNameHasBeenSet; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(const Aws::String& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = value; }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(Aws::String&& value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName = std::move(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline void SetBackupVaultName(const char* value) { m_backupVaultNameHasBeenSet = true; m_backupVaultName.assign(value); }

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the Amazon Web Services account used to
     * create them and the Amazon Web Services Region where they are created. They
     * consist of lowercase letters, numbers, and hyphens. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline const AwsBackupRecoveryPointCalculatedLifecycleDetails& GetCalculatedLifecycle() const{ return m_calculatedLifecycle; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline bool CalculatedLifecycleHasBeenSet() const { return m_calculatedLifecycleHasBeenSet; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline void SetCalculatedLifecycle(const AwsBackupRecoveryPointCalculatedLifecycleDetails& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = value; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline void SetCalculatedLifecycle(AwsBackupRecoveryPointCalculatedLifecycleDetails&& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = std::move(value); }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCalculatedLifecycle(const AwsBackupRecoveryPointCalculatedLifecycleDetails& value) { SetCalculatedLifecycle(value); return *this;}

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCalculatedLifecycle(AwsBackupRecoveryPointCalculatedLifecycleDetails&& value) { SetCalculatedLifecycle(std::move(value)); return *this;}


    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCompletionDate(const Aws::String& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCompletionDate(Aws::String&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCompletionDate(const char* value) { m_completionDateHasBeenSet = true; m_completionDate.assign(value); }

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCompletionDate(const Aws::String& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCompletionDate(Aws::String&& value) { SetCompletionDate(std::move(value)); return *this;}

    /**
     * <p>The date and time that a job to create a recovery point is completed, in Unix
     * format and UTC. The value of <code>CompletionDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCompletionDate(const char* value) { SetCompletionDate(value); return *this;}


    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline const AwsBackupRecoveryPointCreatedByDetails& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline void SetCreatedBy(const AwsBackupRecoveryPointCreatedByDetails& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline void SetCreatedBy(AwsBackupRecoveryPointCreatedByDetails&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCreatedBy(const AwsBackupRecoveryPointCreatedByDetails& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCreatedBy(AwsBackupRecoveryPointCreatedByDetails&& value) { SetCreatedBy(std::move(value)); return *this;}


    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}

    /**
     * <p>The date and time a recovery point is created, in Unix format and UTC. The
     * value of <code>CreationDate</code> is accurate to milliseconds. For example, the
     * value 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}


    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline const Aws::String& GetEncryptionKeyArn() const{ return m_encryptionKeyArn; }

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline void SetEncryptionKeyArn(const Aws::String& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = value; }

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline void SetEncryptionKeyArn(Aws::String&& value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn = std::move(value); }

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline void SetEncryptionKeyArn(const char* value) { m_encryptionKeyArnHasBeenSet = true; m_encryptionKeyArn.assign(value); }

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the server-side encryption key that is used to protect your
     * backups. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline const Aws::String& GetIamRoleArn() const{ return m_iamRoleArn; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline bool IamRoleArnHasBeenSet() const { return m_iamRoleArnHasBeenSet; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline void SetIamRoleArn(const Aws::String& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = value; }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline void SetIamRoleArn(Aws::String&& value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn = std::move(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline void SetIamRoleArn(const char* value) { m_iamRoleArnHasBeenSet = true; m_iamRoleArn.assign(value); }

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline AwsBackupRecoveryPointDetails& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline AwsBackupRecoveryPointDetails& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point </p>
     */
    inline AwsBackupRecoveryPointDetails& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted. </p>
     */
    inline bool GetIsEncrypted() const{ return m_isEncrypted; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted. </p>
     */
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted. </p>
     */
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}


    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline const Aws::String& GetLastRestoreTime() const{ return m_lastRestoreTime; }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline bool LastRestoreTimeHasBeenSet() const { return m_lastRestoreTimeHasBeenSet; }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline void SetLastRestoreTime(const Aws::String& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = value; }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline void SetLastRestoreTime(Aws::String&& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = std::move(value); }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline void SetLastRestoreTime(const char* value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime.assign(value); }

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithLastRestoreTime(const Aws::String& value) { SetLastRestoreTime(value); return *this;}

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithLastRestoreTime(Aws::String&& value) { SetLastRestoreTime(std::move(value)); return *this;}

    /**
     * <p>The date and time that a recovery point was last restored, in Unix format and
     * UTC. The value of <code>LastRestoreTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithLastRestoreTime(const char* value) { SetLastRestoreTime(value); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline const AwsBackupRecoveryPointLifecycleDetails& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline void SetLifecycle(const AwsBackupRecoveryPointLifecycleDetails& value) { m_lifecycleHasBeenSet = true; m_lifecycle = value; }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline void SetLifecycle(AwsBackupRecoveryPointLifecycleDetails&& value) { m_lifecycleHasBeenSet = true; m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline AwsBackupRecoveryPointDetails& WithLifecycle(const AwsBackupRecoveryPointLifecycleDetails& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
     * automatically according to the lifecycle that you define </p>
     */
    inline AwsBackupRecoveryPointDetails& WithLifecycle(AwsBackupRecoveryPointLifecycleDetails&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a recovery point. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point, such as
     * an Amazon EBS volume or an Amazon RDS database. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const{ return m_sourceBackupVaultArn; }

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline void SetSourceBackupVaultArn(const Aws::String& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = value; }

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline void SetSourceBackupVaultArn(Aws::String&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::move(value); }

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline void SetSourceBackupVaultArn(const char* value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn.assign(value); }

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithSourceBackupVaultArn(const Aws::String& value) { SetSourceBackupVaultArn(value); return *this;}

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithSourceBackupVaultArn(Aws::String&& value) { SetSourceBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the backup vault where the recovery point was originally copied
     * from. If the recovery point is restored to the same account, this value will be
     * null. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithSourceBackupVaultArn(const char* value) { SetSourceBackupVaultArn(value); return *this;}


    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A status code specifying the state of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COMPLETED</code> </p> </li> <li> <p>
     * <code>DELETING</code> </p> </li> <li> <p> <code>EXPIRED</code> </p> </li> <li>
     * <p> <code>PARTIAL</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message explaining the reason of the recovery point deletion failure. </p>
     */
    inline AwsBackupRecoveryPointDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline void SetStorageClass(const Aws::String& value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline void SetStorageClass(Aws::String&& value) { m_storageClassHasBeenSet = true; m_storageClass = std::move(value); }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline void SetStorageClass(const char* value) { m_storageClassHasBeenSet = true; m_storageClass.assign(value); }

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStorageClass(const Aws::String& value) { SetStorageClass(value); return *this;}

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStorageClass(Aws::String&& value) { SetStorageClass(std::move(value)); return *this;}

    /**
     * <p>Specifies the storage class of the recovery point. Valid values are as
     * follows:</p> <ul> <li> <p> <code>COLD</code> </p> </li> <li> <p>
     * <code>DELETED</code> </p> </li> <li> <p> <code>WARM</code> </p> </li> </ul>
     */
    inline AwsBackupRecoveryPointDetails& WithStorageClass(const char* value) { SetStorageClass(value); return *this;}

  private:

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    AwsBackupRecoveryPointCalculatedLifecycleDetails m_calculatedLifecycle;
    bool m_calculatedLifecycleHasBeenSet = false;

    Aws::String m_completionDate;
    bool m_completionDateHasBeenSet = false;

    AwsBackupRecoveryPointCreatedByDetails m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    bool m_isEncrypted;
    bool m_isEncryptedHasBeenSet = false;

    Aws::String m_lastRestoreTime;
    bool m_lastRestoreTimeHasBeenSet = false;

    AwsBackupRecoveryPointLifecycleDetails m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_storageClass;
    bool m_storageClassHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
