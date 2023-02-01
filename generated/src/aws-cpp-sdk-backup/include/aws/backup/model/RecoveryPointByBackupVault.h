/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/RecoveryPointCreator.h>
#include <aws/backup/model/RecoveryPointStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/CalculatedLifecycle.h>
#include <aws/backup/model/Lifecycle.h>
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
   * <p>Contains detailed information about the recovery points stored in a backup
   * vault.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/RecoveryPointByBackupVault">AWS
   * API Reference</a></p>
   */
  class RecoveryPointByBackupVault
  {
  public:
    AWS_BACKUP_API RecoveryPointByBackupVault();
    AWS_BACKUP_API RecoveryPointByBackupVault(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API RecoveryPointByBackupVault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline const Aws::String& GetRecoveryPointArn() const{ return m_recoveryPointArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline bool RecoveryPointArnHasBeenSet() const { return m_recoveryPointArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const Aws::String& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(Aws::String&& value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline void SetRecoveryPointArn(const char* value) { m_recoveryPointArnHasBeenSet = true; m_recoveryPointArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithRecoveryPointArn(const Aws::String& value) { SetRecoveryPointArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithRecoveryPointArn(Aws::String&& value) { SetRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a recovery point; for
     * example,
     * <code>arn:aws:backup:us-east-1:123456789012:recovery-point:1EB3B5E7-9EB0-435A-A80B-108B488B0D45</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithRecoveryPointArn(const char* value) { SetRecoveryPointArn(value); return *this;}


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
    inline RecoveryPointByBackupVault& WithBackupVaultName(const Aws::String& value) { SetBackupVaultName(value); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupVaultName(Aws::String&& value) { SetBackupVaultName(std::move(value)); return *this;}

    /**
     * <p>The name of a logical container where backups are stored. Backup vaults are
     * identified by names that are unique to the account used to create them and the
     * Amazon Web Services Region where they are created. They consist of lowercase
     * letters, numbers, and hyphens.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupVaultName(const char* value) { SetBackupVaultName(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline const Aws::String& GetBackupVaultArn() const{ return m_backupVaultArn; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline bool BackupVaultArnHasBeenSet() const { return m_backupVaultArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const Aws::String& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = value; }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(Aws::String&& value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline void SetBackupVaultArn(const char* value) { m_backupVaultArnHasBeenSet = true; m_backupVaultArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupVaultArn(const Aws::String& value) { SetBackupVaultArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupVaultArn(Aws::String&& value) { SetBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a backup vault; for example,
     * <code>arn:aws:backup:us-east-1:123456789012:vault:aBackupVault</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupVaultArn(const char* value) { SetBackupVaultArn(value); return *this;}


    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetSourceBackupVaultArn() const{ return m_sourceBackupVaultArn; }

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline bool SourceBackupVaultArnHasBeenSet() const { return m_sourceBackupVaultArnHasBeenSet; }

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline void SetSourceBackupVaultArn(const Aws::String& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = value; }

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline void SetSourceBackupVaultArn(Aws::String&& value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn = std::move(value); }

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline void SetSourceBackupVaultArn(const char* value) { m_sourceBackupVaultArnHasBeenSet = true; m_sourceBackupVaultArn.assign(value); }

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithSourceBackupVaultArn(const Aws::String& value) { SetSourceBackupVaultArn(value); return *this;}

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithSourceBackupVaultArn(Aws::String&& value) { SetSourceBackupVaultArn(std::move(value)); return *this;}

    /**
     * <p>The backup vault where the recovery point was originally copied from. If the
     * recovery point is restored to the same account this value will be
     * <code>null</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithSourceBackupVaultArn(const char* value) { SetSourceBackupVaultArn(value); return *this;}


    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>An ARN that uniquely identifies a resource. The format of the ARN depends on
     * the resource type.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The type of Amazon Web Services resource saved as a recovery point; for
     * example, an Amazon Elastic Block Store (Amazon EBS) volume or an Amazon
     * Relational Database Service (Amazon RDS) database. For Windows Volume Shadow
     * Copy Service (VSS) backups, the only supported resource type is Amazon EC2.</p>
     */
    inline RecoveryPointByBackupVault& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline const RecoveryPointCreator& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline void SetCreatedBy(const RecoveryPointCreator& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline void SetCreatedBy(RecoveryPointCreator&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline RecoveryPointByBackupVault& WithCreatedBy(const RecoveryPointCreator& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>Contains identifying information about the creation of a recovery point,
     * including the <code>BackupPlanArn</code>, <code>BackupPlanId</code>,
     * <code>BackupPlanVersion</code>, and <code>BackupRuleId</code> of the backup plan
     * that is used to create it.</p>
     */
    inline RecoveryPointByBackupVault& WithCreatedBy(RecoveryPointCreator&& value) { SetCreatedBy(std::move(value)); return *this;}


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
    inline RecoveryPointByBackupVault& WithIamRoleArn(const Aws::String& value) { SetIamRoleArn(value); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithIamRoleArn(Aws::String&& value) { SetIamRoleArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role ARN used to create the target recovery point; for
     * example, <code>arn:aws:iam::123456789012:role/S3Access</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithIamRoleArn(const char* value) { SetIamRoleArn(value); return *this;}


    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline const RecoveryPointStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline void SetStatus(const RecoveryPointStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline void SetStatus(RecoveryPointStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline RecoveryPointByBackupVault& WithStatus(const RecoveryPointStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A status code specifying the state of the recovery point.</p>
     */
    inline RecoveryPointByBackupVault& WithStatus(RecoveryPointStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline RecoveryPointByBackupVault& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline RecoveryPointByBackupVault& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message explaining the reason of the recovery point deletion failure.</p>
     */
    inline RecoveryPointByBackupVault& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time a recovery point is created, in Unix format and Coordinated
     * Universal Time (UTC). The value of <code>CreationDate</code> is accurate to
     * milliseconds. For example, the value 1516925490.087 represents Friday, January
     * 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionDate() const{ return m_completionDate; }

    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CompletionDateHasBeenSet() const { return m_completionDateHasBeenSet; }

    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(const Aws::Utils::DateTime& value) { m_completionDateHasBeenSet = true; m_completionDate = value; }

    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionDate(Aws::Utils::DateTime&& value) { m_completionDateHasBeenSet = true; m_completionDate = std::move(value); }

    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithCompletionDate(const Aws::Utils::DateTime& value) { SetCompletionDate(value); return *this;}

    /**
     * <p>The date and time a job to restore a recovery point is completed, in Unix
     * format and Coordinated Universal Time (UTC). The value of
     * <code>CompletionDate</code> is accurate to milliseconds. For example, the value
     * 1516925490.087 represents Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithCompletionDate(Aws::Utils::DateTime&& value) { SetCompletionDate(std::move(value)); return *this;}


    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline long long GetBackupSizeInBytes() const{ return m_backupSizeInBytes; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline bool BackupSizeInBytesHasBeenSet() const { return m_backupSizeInBytesHasBeenSet; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline void SetBackupSizeInBytes(long long value) { m_backupSizeInBytesHasBeenSet = true; m_backupSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of a backup.</p>
     */
    inline RecoveryPointByBackupVault& WithBackupSizeInBytes(long long value) { SetBackupSizeInBytes(value); return *this;}


    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline const CalculatedLifecycle& GetCalculatedLifecycle() const{ return m_calculatedLifecycle; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline bool CalculatedLifecycleHasBeenSet() const { return m_calculatedLifecycleHasBeenSet; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline void SetCalculatedLifecycle(const CalculatedLifecycle& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = value; }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline void SetCalculatedLifecycle(CalculatedLifecycle&& value) { m_calculatedLifecycleHasBeenSet = true; m_calculatedLifecycle = std::move(value); }

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline RecoveryPointByBackupVault& WithCalculatedLifecycle(const CalculatedLifecycle& value) { SetCalculatedLifecycle(value); return *this;}

    /**
     * <p>A <code>CalculatedLifecycle</code> object containing <code>DeleteAt</code>
     * and <code>MoveToColdStorageAt</code> timestamps.</p>
     */
    inline RecoveryPointByBackupVault& WithCalculatedLifecycle(CalculatedLifecycle&& value) { SetCalculatedLifecycle(std::move(value)); return *this;}


    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
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
     * storage and when it expires. Backup transitions and expires backups
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
     * storage and when it expires. Backup transitions and expires backups
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
     * storage and when it expires. Backup transitions and expires backups
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
     * storage and when it expires. Backup transitions and expires backups
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
    inline RecoveryPointByBackupVault& WithLifecycle(const Lifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle defines when a protected resource is transitioned to cold
     * storage and when it expires. Backup transitions and expires backups
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
    inline RecoveryPointByBackupVault& WithLifecycle(Lifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


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
    inline RecoveryPointByBackupVault& WithEncryptionKeyArn(const Aws::String& value) { SetEncryptionKeyArn(value); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithEncryptionKeyArn(Aws::String&& value) { SetEncryptionKeyArn(std::move(value)); return *this;}

    /**
     * <p>The server-side encryption key that is used to protect your backups; for
     * example,
     * <code>arn:aws:kms:us-west-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>.</p>
     */
    inline RecoveryPointByBackupVault& WithEncryptionKeyArn(const char* value) { SetEncryptionKeyArn(value); return *this;}


    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool GetIsEncrypted() const{ return m_isEncrypted; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline bool IsEncryptedHasBeenSet() const { return m_isEncryptedHasBeenSet; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline void SetIsEncrypted(bool value) { m_isEncryptedHasBeenSet = true; m_isEncrypted = value; }

    /**
     * <p>A Boolean value that is returned as <code>TRUE</code> if the specified
     * recovery point is encrypted, or <code>FALSE</code> if the recovery point is not
     * encrypted.</p>
     */
    inline RecoveryPointByBackupVault& WithIsEncrypted(bool value) { SetIsEncrypted(value); return *this;}


    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRestoreTime() const{ return m_lastRestoreTime; }

    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool LastRestoreTimeHasBeenSet() const { return m_lastRestoreTimeHasBeenSet; }

    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastRestoreTime(const Aws::Utils::DateTime& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = value; }

    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetLastRestoreTime(Aws::Utils::DateTime&& value) { m_lastRestoreTimeHasBeenSet = true; m_lastRestoreTime = std::move(value); }

    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithLastRestoreTime(const Aws::Utils::DateTime& value) { SetLastRestoreTime(value); return *this;}

    /**
     * <p>The date and time a recovery point was last restored, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>LastRestoreTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline RecoveryPointByBackupVault& WithLastRestoreTime(Aws::Utils::DateTime&& value) { SetLastRestoreTime(std::move(value)); return *this;}


    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline const Aws::String& GetParentRecoveryPointArn() const{ return m_parentRecoveryPointArn; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline bool ParentRecoveryPointArnHasBeenSet() const { return m_parentRecoveryPointArnHasBeenSet; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetParentRecoveryPointArn(const Aws::String& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = value; }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetParentRecoveryPointArn(Aws::String&& value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn = std::move(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline void SetParentRecoveryPointArn(const char* value) { m_parentRecoveryPointArnHasBeenSet = true; m_parentRecoveryPointArn.assign(value); }

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointByBackupVault& WithParentRecoveryPointArn(const Aws::String& value) { SetParentRecoveryPointArn(value); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointByBackupVault& WithParentRecoveryPointArn(Aws::String&& value) { SetParentRecoveryPointArn(std::move(value)); return *this;}

    /**
     * <p>This is the Amazon Resource Name (ARN) of the parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointByBackupVault& WithParentRecoveryPointArn(const char* value) { SetParentRecoveryPointArn(value); return *this;}


    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline const Aws::String& GetCompositeMemberIdentifier() const{ return m_compositeMemberIdentifier; }

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline bool CompositeMemberIdentifierHasBeenSet() const { return m_compositeMemberIdentifierHasBeenSet; }

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline void SetCompositeMemberIdentifier(const Aws::String& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = value; }

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline void SetCompositeMemberIdentifier(Aws::String&& value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier = std::move(value); }

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline void SetCompositeMemberIdentifier(const char* value) { m_compositeMemberIdentifierHasBeenSet = true; m_compositeMemberIdentifier.assign(value); }

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline RecoveryPointByBackupVault& WithCompositeMemberIdentifier(const Aws::String& value) { SetCompositeMemberIdentifier(value); return *this;}

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline RecoveryPointByBackupVault& WithCompositeMemberIdentifier(Aws::String&& value) { SetCompositeMemberIdentifier(std::move(value)); return *this;}

    /**
     * <p>This is the identifier of a resource within a composite group, such as nested
     * (child) recovery point belonging to a composite (parent) stack. The ID is
     * transferred from the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resources-section-structure.html#resources-section-structure-syntax">
     * logical ID</a> within a stack.</p>
     */
    inline RecoveryPointByBackupVault& WithCompositeMemberIdentifier(const char* value) { SetCompositeMemberIdentifier(value); return *this;}


    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline bool GetIsParent() const{ return m_isParent; }

    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline bool IsParentHasBeenSet() const { return m_isParentHasBeenSet; }

    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline void SetIsParent(bool value) { m_isParentHasBeenSet = true; m_isParent = value; }

    /**
     * <p>This is a boolean value indicating this is a parent (composite) recovery
     * point.</p>
     */
    inline RecoveryPointByBackupVault& WithIsParent(bool value) { SetIsParent(value); return *this;}

  private:

    Aws::String m_recoveryPointArn;
    bool m_recoveryPointArnHasBeenSet = false;

    Aws::String m_backupVaultName;
    bool m_backupVaultNameHasBeenSet = false;

    Aws::String m_backupVaultArn;
    bool m_backupVaultArnHasBeenSet = false;

    Aws::String m_sourceBackupVaultArn;
    bool m_sourceBackupVaultArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    RecoveryPointCreator m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_iamRoleArn;
    bool m_iamRoleArnHasBeenSet = false;

    RecoveryPointStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::Utils::DateTime m_completionDate;
    bool m_completionDateHasBeenSet = false;

    long long m_backupSizeInBytes;
    bool m_backupSizeInBytesHasBeenSet = false;

    CalculatedLifecycle m_calculatedLifecycle;
    bool m_calculatedLifecycleHasBeenSet = false;

    Lifecycle m_lifecycle;
    bool m_lifecycleHasBeenSet = false;

    Aws::String m_encryptionKeyArn;
    bool m_encryptionKeyArnHasBeenSet = false;

    bool m_isEncrypted;
    bool m_isEncryptedHasBeenSet = false;

    Aws::Utils::DateTime m_lastRestoreTime;
    bool m_lastRestoreTimeHasBeenSet = false;

    Aws::String m_parentRecoveryPointArn;
    bool m_parentRecoveryPointArnHasBeenSet = false;

    Aws::String m_compositeMemberIdentifier;
    bool m_compositeMemberIdentifierHasBeenSet = false;

    bool m_isParent;
    bool m_isParentHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
